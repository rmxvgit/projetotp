#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

/// O propósito da classe dinheiro é mensurar o dinheiro (valor monetário) envolvido nos procedimentos.
///Nesta classe, para validação do dinheiro, foi avaliado se o valor encontra-se na faixa de 0.001 a 1000000.00 reais.
/// Por questões de conveniência, o formato adotado para representar o dinheiro foi float, representado sem vírgulas e apenas um ponto para separar as casas decimais. 
class Dinheiro{
private:
    float dinheiro;
    void validarDinheiro(float);
public:
    /// Get() retorna o valor armazenado (dinheiro).
    float Get();
    
    /// Set() valida e atribui um novo valor (dinheiro), lançando exceção se inválido.
    void Set(float);


};

#endif // DINHEIRO_HPP_INCLUDED
