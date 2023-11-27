#include "include/controladoras/CntrAInterface.h"
#include "include/controladoras/CntrIAAutenticacao.h"
#include "include/controladoras/CntrISAutenticacao.h"

int CntrAInterface::executar() {
    IAAutenticacao *cntrIAutenticacao = new CntrIAAutenticacao();
    ISAutenticacao *cntrISAutenticacao = new CntrISAutenticacao();
    ContainerConta *containerConta = new ContainerConta();
    CntrAInterface *cntrAInterface = new CntrAInterface();

    Conta conta_1;
    Texto nome_1;
    Texto email_texto_1;
    Texto senha_texto_1;
    Email email_1;
    Senha senha_1;

    nome_1.setValor("Marcos");
    email_1.setValor("marcos@gmail.com");
    senha_1.setValor("Abc1!");

    conta_1.setNome(nome_1);
    conta_1.setEmail(email_1);
    conta_1.setSenha(senha_1);

    containerConta->incluir(conta_1);

    cntrISAutenticacao->setContainerConta(containerConta);
    cntrIAutenticacao->setCntrIAutenticacao(cntrISAutenticacao);
    cntrAInterface->setCntrIAAutenticacao(cntrIAutenticacao);

    bool resultado;
    bool encerrar = false;
    int escolha;

    Email email;

    cout << endl << "Tela inicial do sistema." << endl;

    do {
        cout << endl << "Escolha uma das opções:" << endl;
        cout << endl << "1. Cadastrar" << endl;
        cout << endl << "2. Autenticar" << endl;
        cout << endl << "3. Sair" << endl;
        cin >> escolha;

        switch (escolha) {
            case 1:
                cout << "Opção indisponível" << endl;
                break;
            case 2:
                try {
                    resultado = cntrIAutenticacao->autenticar(&email);
                } catch (const runtime_error &exp) {
                    cout << "Erro de sistema." << endl;
                    return 1;
                }
                if (resultado) {
                    cout << endl << "Sucesso de autenticação." << endl;
                    return 0;
                } else {
                    cout << endl << "Erro de autenticação." << endl;
                    break;
                }
            case 3:
                cout << "Sistema encerrado" << endl;
                encerrar = true;
                break;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
    } while (!encerrar);

    delete cntrIAutenticacao;
    delete cntrISAutenticacao;
    delete containerConta;
    delete cntrAInterface;

    return 0;
}
