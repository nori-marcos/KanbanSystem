#include "include/controladoras/CntrAInterface.h"

void CntrAInterface::executar() {
    bool apresentar = true;

    while (apresentar) {
        int campo;

        cout << "----------------------------------------" << endl;
        cout << "Selecione um dos serviços:" << endl;
        cout << "1 - Acessar sistema" << endl;
        cout << "2 - Criar conta" << endl;
        cout << "3 - Encerrar sistema" << endl;
        cin >> campo;

        switch (campo) {
            case 1:
                if (cntrIAAutenticacao->autenticar(&email)) {
                    bool apresentar = true;
                    while (apresentar) {
                        cout << "----------------------------------------" << endl;
                        cout << "Selecione um dos serviços:" << endl;
                        cout << "1 - Gerenciar conta" << endl;
                        cout << "2 - Gerenciar projeto" << endl;
                        cout << "3 - Encerrar sessão" << endl;
                        cin >> campo;

                        switch (campo) {
                            case 1:
                                cout << "Serviço não implementado." << endl;
                                apresentar = false;
                                break;
                            case 2:
                                cout << "Serviço não implementado." << endl;
                                apresentar = false;
                                break;
                            case 3:
                                apresentar = false;
                                break;
                            default:
                                break;
                        }
                    }
                } else {
                    cout << "----------------------------------------" << endl;
                    cout << "Falha na autenticação. Digite qualquer tecla para continuar." << endl;
                }
                break;
            case 2:
                cout << "Serviço não implementado." << endl;
                break;
            case 3:
                apresentar = false;
                break;
            default:
                break;
        }
    }
}

