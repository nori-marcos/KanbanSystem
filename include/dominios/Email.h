#ifndef EMAIL_H
#define EMAIL_H

#include <stdexcept>
#include <string>

using namespace std;

class Email {
private:
    string email;

    static void validarEmail(const string& email);

    static void validarNome(const string& nome);

    static void validarDominio(const string& dominio);

    static void validarCaracter(const char& caracter);

    static void validarPontosSeguidos(const char& caracter1, const char& caracter2);

public:

    Email(const string& email);

    Email() = default;

    string getEmail() const {
        return email;
    }

    void setEmail(const string& newEmail) {
        validarEmail(newEmail);
        this->email = newEmail;
    }
};

#endif // EMAIL_H
