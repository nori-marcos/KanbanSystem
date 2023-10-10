#ifndef COLUNA_H
#define COLUNA_H

#include <string>
#include <stdexcept>

using namespace std;

class Coluna {
public:

private:

    string status;

    static void validarStatus(const string& status);

public:

    Coluna(const string& status);

    Coluna() = default;

    string getColuna() const {
        return status;
    }


    void setStatus(const string& newStatus) {
        validarStatus(newStatus);
        this->status = newStatus;
    }


};

#endif // COLUNA_H
