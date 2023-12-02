#include "include/controladoras/CntrAInterface.h"

void CntrAInterface::executar() {
    bool apresentar = true;

    while (apresentar) {
        int campo;

        cout << "----------------------------------------" << endl;
        cout << "Selecione um dos serviços:" << endl;
        cout << "1 - Autenticar conta" << endl;
        cout << "2 - Criar conta" << endl;
        cout << "3 - Encerrar sistema" << endl;
        cin >> campo;

        switch (campo) {
            case 1:
                if (cntrIAAutenticacao->autenticar(&email)) {
                    cout << "----------------------------------------" << endl;
                    cout << "Autenticação realizada com sucesso." << endl;

                    bool apresentarSessao = true;
                    while (apresentarSessao) {
                        cout << "----------------------------------------" << endl;
                        cout << "Selecione um dos serviços:" << endl;
                        cout << "1 - Gerenciar conta" << endl;
                        cout << "2 - Gerenciar projeto" << endl;
                        cout << "3 - Encerrar sessão" << endl;
                        cin >> campo;

                        switch (campo) {
                            case 1:
                                while (apresentarSessao) {
                                    cout << "----------------------------------------" << endl;
                                    cout << "Selecione um dos serviços de conta:" << endl;
                                    cout << "1 - Visulizar conta" << endl;
                                    cout << "2 - Atualizar conta" << endl;
                                    cout << "3 - Remover conta" << endl;
                                    cout << "4 - Voltar" << endl;
                                    cin >> campo;

                                    switch (campo) {
                                        case 1:
                                            if (cntrIAConta->pesquisar()) {
                                                cout << "Conta encontrada." << endl;
                                            } else {
                                                cout << "Conta não encontrada." << endl;
                                            }
                                            break;
                                        case 2:
                                            if (cntrIAConta->atualizar()) {
                                                cout << "Conta atualizada." << endl;
                                            } else {
                                                cout << "Conta não atualizada." << endl;
                                            }
                                            break;
                                        case 3:
                                            if (cntrIAConta->remover()) {
                                                cout << "Conta removida." << endl;
                                                apresentarSessao = false;
                                            } else {
                                                cout << "Conta não removida." << endl;
                                            }
                                            break;
                                        case 4:
                                            apresentarSessao = false;
                                            break;
                                        default:
                                            break;
                                    }
                                }
                                break;
                            case 2:
                                cout << "Serviço não implementado." << endl;
                                break;
                            case 3:
                                apresentarSessao = false;
                                break;
                            default:
                                break;
                        }
                    }
                } else {
                    cout << "----------------------------------------" << endl;
                    cout << "Falha na autenticação." << endl;
                }
                break;
            case 2:
                if (cntrIAConta->incluir()) {
                    cout << "Conta criada com sucesso." << endl;
                } else {
                    cout << "Falha ao criar conta." << endl;
                }
                break;
            case 3:
                apresentar = false;
                break;
            default:
                break;
        }
    }
}
