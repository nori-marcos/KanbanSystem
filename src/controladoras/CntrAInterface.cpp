#include "include/controladoras/CntrAInterface.h"
#include <string>

void CntrAInterface::executar() {
    string texto1 = "Selecione um dos serviços:";
    string texto2 = "1 - Acessar sistema";
    string texto3 = "2 - Criar conta";
    string texto4 = "3 - Encerrar sistema";

    string texto5 = "Selecione um dos serviços:";
    string texto6 = "1 - Excluir conta";
    string texto7 = "2 - Editar conta";
    string texto8 = "3 - Consultar conta";
    string texto9 = "4 - Encerrar sessão";

    string texto10 = "Falha na autenticação. Digite qualquer tecla para continuar.";

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
                        cout << "1 - Excluir conta" << endl;
                        cout << "2 - Editar conta" << endl;
                        cout << "3 - Consultar conta" << endl;
                        cout << "4 - Encerrar sessão" << endl;
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
                                cout << "Serviço não implementado." << endl;
                                apresentar = false;
                                break;
                            case 4:
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

