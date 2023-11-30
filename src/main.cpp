#include <istream>
#include "include/Interfaces.h"
#include "include/controladoras/CntrAInterface.h"
#include "include/controladoras/CntrIAAutenticacao.h"
#include "include/controladoras/CntrISAutenticacao.h"
#include "include/controladoras/CntrISConta.h"
#include "include/controladoras/CntrIAConta.h"

using namespace std;

int main() {
    // Instanciar controladoras de apresentação.
    CntrAInterface *cntrAInterface = new CntrAInterface();
    IAAutenticacao *cntrIAutenticacao = new CntrIAAutenticacao();
    IAConta *cntrIAConta = new CntrIAConta();

    // Instanciar controladoras de serviço.
    ISAutenticacao *cntrISAutenticacao = new CntrISAutenticacao();
    ISConta *cntrISConta = new CntrISConta();

    ContainerConta *containerConta = new ContainerConta();

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

    cntrISConta->setCntrISConta(containerConta);
    cntrIAConta->setCntrIAConta(cntrISConta);

    cntrAInterface->setCntrIAAutenticacao(cntrIAutenticacao);
    cntrAInterface->setCntrIAConta(cntrIAConta);

    cntrAInterface->executar();

    delete cntrAInterface;
    delete cntrIAutenticacao;
    delete cntrISAutenticacao;
    delete cntrIAConta;
    delete cntrISConta;
    delete containerConta;

    return 0;
}