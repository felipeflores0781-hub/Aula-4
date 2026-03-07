#include "Pessoa.h"


    Pessoa::Pessoa(){
        nome = "";
        idade = 0;
    }
    void Pessoa::definirNome(std::string n){
        nome = n;
    }
    std::string Pessoa::dizerSeuNome(){
        return nome;
    }

    void Pessoa::definirIdade(int id){
        idade = id;
    }
    int Pessoa::dizerSuaIdade(){
        return idade;
    }
