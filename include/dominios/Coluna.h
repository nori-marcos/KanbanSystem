#ifndef COLUNA_H
#define COLUNA_H

#include <string>

using namespace std;

class Coluna {
public:

	private:
	
	// atributo de "status da coluna" deve ser alterado por outras classes.
	//strings possiveis: "SOLICITADO" "EM_EXECUCAO" e "CONCLUIDO";
				
	public:
			
		string status;
		
		Coluna(const string &status);
		
		Coluna() = default;
		
		string getColuna() const
		{
			return status;
		}

    
		void setStatus(const string &newStatus)
		{
			validarStatus(newStatus);
        	this->status = newStatus;
    	}


};

#endif // COLUNA_H
