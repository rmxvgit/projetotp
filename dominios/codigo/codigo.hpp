#pragma once
#include <string>

using namespace std;

/// Classe responsável por representar e validar um código identificador numérico.
/// Garante que o valor armazenado seja um número positivo dentro dos limites definidos.
/// Realiza validação automática ao atribuir novos valores.

class Codigo {
    private:
        /// Valor máximo permitido para o código
        static const int LIMITE = 9;

        /// Armazena o valor do código como string
        string valor;

        /// Método interno que valida o código de acordo com as regras definidas
        void validar(const string&);

    public:
        /// Atribui um novo valor ao código (com validação automática)
        void Set(const string&);

        /// Retorna o valor atual do código
        string Get();
};

inline string Codigo::Get(){
    return this->valor;
}
