#ifndef EMAIL_H
#define EMAIL_H

#include <stdexcept>
#include <string>

using namespace std;

class Email {
private:
    /// Atributo que armazena o email.

    string email;

    /// Valida o email passado por parâmetro, que deve ser composto por 2 partes: nome e domínio.
    /// @param email email a ser validado.
    static void validarEmail(const string& email);

    /// Valida o nome passado por parâmetro, que deve ter no mínimo 2 caracteres e no máximo 10 caracteres.
    /// @param nome nome a ser validado.
    static void validarNome(const string& nome);

    /// Valida o dominio passado por parâmetro, que deve ter no mínimo 2 caracteres e no máximo 20 caracteres.
    /// @param dominio dominio a ser validado.
    static void validarDominio(const string& dominio);

    /// Valida o caracter passado por parâmetro, que não pode ser espaço ou caracter especial.
    /// @param caracter caracter a ser validado.
    static void validarCaracter(const char& caracter);

    /// Valida se os caracteres passados por parâmetro são pontos seguidos.
    /// @param caracter1 e @param caracter2 são caracteres consecutivos de um string.
    static void validarPontosSeguidos(const char& caracter1, const char& caracter2);

public:

    /// Inicializa o objeto com o email passado por parâmetro.
    /// Regra de formato:
    /// - Exemplo: nome@dominio
    /// - O email deve ser composto por 2 partes: nome e domínio.
    /// - O nome deve ter no mínimo 2 caracteres e no máximo 10 caracteres.
    /// - O domínio deve ter no mínimo 2 caracteres e no máximo 20 caracteres.
    /// - O nome e o domínio devem ser separados por um arroba.
    /// - O nome e o domínio não podem começar ou terminar com ponto.
    /// - O nome e o domínio não podem conter espaços.
    Email(const string& email);

    Email() = default;

    /// Retorna o email do objeto.
    string getEmail() const {
        return email;
    }

    /// Atribui um novo email ao objeto.
    void setEmail(const string& newEmail) {
        validarEmail(newEmail);
        this->email = newEmail;
    }
};

#endif // EMAIL_H
