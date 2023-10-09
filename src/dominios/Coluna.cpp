#include "include/dominios/Coluna.h"

//#include "Coluna.h"



Coluna::Coluna(const string &status) {
    validarStatus(status);
    this->status = status;
}

void Coluna::validarStatus(string int &newStatus)
 {
    if ((newStatus != "SOLICITADO") || (newStatus != "EM EXECUÇÃO")
		(newStauts != "CONCLUIDO")
		{
			throw invalid_argument("Digite o status (SOLICITADO, EM EXECUÇÃO, CONCLUIDO) do cartão com caps-lock ativo.");
    	}
}
