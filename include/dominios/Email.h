//Marcos Noriyuki Miyata 18/0126890

#ifndef EMAIL_H
#define EMAIL_H

#include <stdexcept>
#include <string>

using namespace std;

/// Classe que representa o email do usuário, usado na autenticação do sistema.
/// Regra de formato:
/// - Exemplo: nome@dominio
/// - O email deve ser composto por 2 partes: nome e domínio.
/// - O nome deve ter no mínimo 2 caracteres e no máximo 10 caracteres.
/// - O domínio deve ter no mínimo 2 caracteres e no máximo 20 caracteres.
/// - O nome e o domínio devem ser separados por um arroba.
/// - O nome e o domínio não podem começar ou terminar com ponto.
/// - O nome e o domínio não podem conter espaços.
class Email {
private:

    string email;

    static void validarEmail(const string &email);

    static void validarNome(const string &nome);

    static void validarDominio(const string &dominio);

    static void validarCaracter(const char &caracter);

    static void validarPontosSeguidos(const char &caracter1, const char &caracter2);

public:
    /// Inicializa o objeto com o email passado por parâmetro.
    Email(const string &email);

    /// Inicializa o objeto com o email vazio.
    Email() = default;

    /// Retorna o email do objeto.
    string getValor() const {
        return email;
    }

    /// Atribui um novo email ao objeto.
    void setValor(const string &newEmail) {
        validarEmail(newEmail);
        this->email = newEmail;
    }
};

#endif // EMAIL_H
