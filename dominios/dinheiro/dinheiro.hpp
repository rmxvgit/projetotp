#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

/// O propósito da classe dinheiro é mensurar o dinheiro (valor monetário) envolvido nos procedimentos.
///Nesta classe, para validação do dinheiro, foi avaliado se o valor encontra-se na faixa de 0.001 a 1000000.00 reais.
/// Por questões de conveniência, o formato adotado para representar o dinheiro foi float, representado sem vírgulas e apenas um ponto para separar as casas decimais. 
class Dinheiro{
private:
    float dinheiro;
    /// O método de validar dinheiro lança uma excessão quando o dinheiro está fora da faixa dinâmica citada acima.
    void validarDinheiro(float);
public:
    float Get();
    void Set(float);


};

#endif // DINHEIRO_HPP_INCLUDED
