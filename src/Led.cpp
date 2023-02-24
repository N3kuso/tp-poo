
#include "Led.h"

//Basculement de l'état de la led
//Si la led est éteinte, un appel à cette opération l'allume, si elle est allumée, cela l'éteint. 
//Par défaut, cette opération est une combinaison de l'opération set() et state()
void Led::toggle() {
  set(!state());
}

//Constructeur
//i est l'identifiant de la led
//a est la broche de commande de la led, true led connectée par l'anode, false par la cathode
Led::Led(int i, bool a): id(i), anode(a){
}

//Destructeur
Led::~Led(){
}

