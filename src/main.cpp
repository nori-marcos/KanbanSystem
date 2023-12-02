#include <istream>
#include "include/Interfaces.h"
#include "include/controladoras/CntrAInterface.h"
#include "include/controladoras/CntrIAAutenticacao.h"
#include "include/controladoras/CntrISAutenticacao.h"
#include "include/controladoras/CntrISConta.h"
#include "include/controladoras/CntrIAConta.h"
#include "include/sqlite3.h"

using namespace std;

int main() {
    cout << "----------------------------------------" << endl;
    cout << "╦╔═╔═╗╔╗╔╔╗ ╔═╗╔╗╔  ╔═╗╦ ╦╔═╗╔╦╗╔═╗╔╦╗\n"
            "╠╩╗╠═╣║║║╠╩╗╠═╣║║║  ╚═╗╚╦╝╚═╗ ║ ║╣ ║║║\n"
            "╩ ╩╩ ╩╝╚╝╚═╝╩ ╩╝╚╝  ╚═╝ ╩ ╚═╝ ╩ ╚═╝╩ ╩"
         << endl;

    // Instanciar controladoras de apresentação.
    CntrAInterface *cntrAInterface = new CntrAInterface();
    IAAutenticacao *cntrIAutenticacao = new CntrIAAutenticacao();
    IAConta *cntrIAConta = new CntrIAConta();

    // Instanciar controladoras de serviço.
    ISAutenticacao *cntrISAutenticacao = new CntrISAutenticacao();
    ISConta *cntrISConta = new CntrISConta();

    ContainerConta *containerConta = new ContainerConta();

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