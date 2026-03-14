#include "RPG.h"
#include "Personagem.h"

int main(){
    Personagem *p1 = new Personagem();
    Personagem *p2 = new Personagem();
    RPG *rpg = new RPG(p1, p2);
    rpg->inciarBatalha();
    delete p1;
    return 0;
}