#include "data.hpp"
#include <string>
#include <iostream>

void Data::validarData(string data){
    int dia;
    int mes;
    int ano;
    string temp;

    if(data.size() != 8){ //checagem de tamanho
        throw invalid_argument("formato da data errado(quantidade de caracteres)");
    }

    for (const char& i : data) {
        if (i < '0' || i > '9') {
            throw invalid_argument("data inválida: caracter não numérico.");
        }
    }

    //transformando strings em ints
    temp = data.substr(0,4);
    ano = stoi(temp);
    
    temp = data.substr(4,2);
    mes = stoi(temp);

    temp = data.substr(6,2);
    dia = stoi(temp);
    
    //Checagem do mês
    if(mes > 12){
        throw invalid_argument("formato do mes errado");
    }

    //Checagem do dia
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12){
        if(dia>31){
            throw invalid_argument("dia invalido, esse mes so tem 31 dias");
        }
    }

    if(mes== 4 || mes == 6 || mes ==9 || mes == 11){
        if(dia>30){
            throw invalid_argument("dia invalido, esse mes so tem 30 dias");
        }

    }

    if(mes == 2 && ano % 400 ==0){//ano terminado em 00 mas divisivel por 400
        if(dia>29){
            throw invalid_argument("dia invalido, esse mes so tem 29 dias");
        }
    }else if(mes == 2 && ano % 4 ==0 && ano %100 !=0){//ano divisivel por 4 e nao terminado em 00
        if(dia>29){
            throw invalid_argument("dia invalido, esse mes so tem 29 dias");
        }
    }else{
        if(dia>28){
            throw invalid_argument("dia invalido, esse mes so tem 28 dias");
        }
    }

}


string Data::get(){
    return data;
}

void Data::Set(string data){
    validarData(data);
    this->data = data;
}

