#include <istream>
#include <iostream>
#include "include/Interfaces.h"
#include "include/controladoras/CntrIAAutenticacao.h"
#include "include/Stubs.h"
#include "include/controladoras/CntrISAutenticacao.h"
#include "include/controladoras/CntrAInterface.h"

using namespace std;

int main() {

    CntrAInterface cntrAInterface;

    return cntrAInterface.executar();
}