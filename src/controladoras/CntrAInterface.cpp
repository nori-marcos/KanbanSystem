#include "include/controladoras/CntrAInterface.h"

void CntrAInterface::executar() {
    string negrito = "\033[1m";
    string reset = "\033[0m";
    bool apresentar = true;

    while (apresentar) {
        int campoPrincipal;

        cout << "----------------------------------------" << endl;
        cout << negrito << "Selecione um dos serviços:" << reset << endl;
        cout << "1 - Autenticar conta" << endl;
        cout << "2 - Criar conta" << endl;
        cout << "3 - Encerrar sistema" << endl;
        cin >> campoPrincipal;

        switch (campoPrincipal) {
            case 1: {
                try {
                    Conta contaAutenticada = cntrIAAutenticacao->autenticar(&email);

                    if (contaAutenticada.getEmail().getValor().empty()) {
                        break;
                    }

                    cout << "----------------------------------------" << endl;
                    cout << "Autenticação realizada com sucesso." << endl;

                    bool apresentarSessao = true;
                    while (apresentarSessao) {
                        int campoSessao;

                        cout << "----------------------------------------" << endl;
                        cout << negrito << "Selecione um dos serviços:" << reset << endl;
                        cout << "1 - Gerenciar conta" << endl;
                        cout << "2 - Gerenciar projeto" << endl;
                        cout << "3 - Sair da área logada" << endl;
                        cin >> campoSessao;

                        switch (campoSessao) {
                            case 1: {
                                while (apresentarSessao) {
                                    int campoConta;

                                    cout << "----------------------------------------" << endl;
                                    cout << negrito << "Selecione um dos serviços de conta:" << reset << endl;
                                    cout << "1 - Visualizar conta" << endl;
                                    cout << "2 - Atualizar conta" << endl;
                                    cout << "3 - Remover conta" << endl;
                                    cout << "4 - Sair do gerenciamento de conta" << endl;
                                    cin >> campoConta;

                                    switch (campoConta) {
                                        case 1: {
                                            try {
                                                Conta contaEncontrada = cntrIAConta->pesquisar(contaAutenticada);
                                                cout << "----------------------------------------" << endl;
                                                cout << "Dados da conta:" << endl;
                                                cout << "Nome: " << contaEncontrada.getNome().getValor() << endl;
                                                cout << "Email: " << contaEncontrada.getEmail().getValor() << endl;
                                                cout << "Senha: " << contaEncontrada.getSenha().getValor() << endl;
                                            } catch (const invalid_argument &exception) {
                                                cout << endl << exception.what() << endl;
                                            }
                                            break;
                                        }
                                        case 2:
                                            try {
                                                Conta contaAtualizada = cntrIAConta->atualizar(contaAutenticada);
                                                cout << "----------------------------------------" << endl;
                                                cout << "Dados da conta atualizada:" << endl;
                                                cout << "Nome: " << contaAtualizada.getNome().getValor() << endl;
                                                cout << "Email: " << contaAtualizada.getEmail().getValor() << endl;
                                                cout << "Senha: " << contaAtualizada.getSenha().getValor() << endl;
                                            } catch (const invalid_argument &exception) {
                                                cout << "Conta não atualizada." << endl;
                                                cout << endl << exception.what() << endl;
                                            }
                                            break;
                                        case 3:
                                            if (cntrIAConta->remover(contaAutenticada.getEmail())) {
                                                cout << "Conta removida." << endl;
                                                apresentarSessao = false;
                                            } else {
                                                cout << "Conta não removida." << endl;
                                            }
                                            break;
                                        case 4:
                                            break;
                                        default:
                                            break;
                                    }
                                }
                                break;
                            }
                            case 2:
                                int campoProjeto;

                                cout << "----------------------------------------" << endl;
                                cout << "Selecione um dos serviços de projeto:" << endl;
                                cout << "1 - Criar projeto" << endl;
                                cout << "2 - Editar projeto" << endl;
                                cout << "3 - Remover projeto" << endl;
                                cout << "4 - Sair do gerenciamento de projeto" << endl;
                                cin >> campoProjeto;

                                if (campoProjeto == 4) {
                                    break;
                                } else {
                                    cout << "----------------------------------------" << endl;
                                    cout << "Serviço não implementado." << endl;
                                    break;
                                }

                            case 3:
                                apresentarSessao = false;
                                break;
                            default:
                                break;
                        }
                    }
                } catch (const invalid_argument &exception) {
                    cout << "----------------------------------------" << endl;
                    cout << "Falha na autenticação." << endl;
                    cout << endl << exception.what() << endl;
                }
                break;
            }
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
