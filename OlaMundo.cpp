#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main(){
    cout << "Ola Mundo " <<  "quem está me programando?" << endl;
    Pessoa p1;
    string nome;
    int idade;

    cin >> nome;
    p1.definirNome(nome);
    cout << "Oi " << p1.dizerSeuNome() <<  ", qual sua idade?" << endl;
    cin >> idade;
    p1.definirIdade(idade);
    cout << "Você tem: " << p1.dizerSuaIdade() << " anos." << endl;
    return 0;
}