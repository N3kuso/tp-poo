
#include "PcfLed.h"
#include "pcf8574.h"

//Modification de l'état de la led 
//state est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
void PcfLed::set(bool state) {
}

//Etat de la led
//retourne true pour led allumée, false pour éteinte
bool PcfLed::state() {
}

void PcfLed::begin() {
}

PcfLed::PcfLed(Pcf8574 & p, int i){
}

