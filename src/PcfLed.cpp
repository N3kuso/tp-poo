
#include "PcfLed.h"
#include "pcf8574.h"

//Modification de l'état de la led 
//s est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
void PcfLed::set(bool s) {
  pcf8574.digitalWrite (get_id(), !s);
}

//Etat de la led
//retourne true pour led allumée, false pour éteinte
bool PcfLed::state() {
  return ! pcf8574.digitalRead (get_id());
}

void PcfLed::begin() {
  pcf8574.begin();
  pcf8574.pinMode (get_id(), OUTPUT);
  pcf8574.digitalWrite (get_id(), true);
}

//Constructeur
//p référence sur un objet de la classe Pcf8574 permettant un accès aux broches 
//i numéro de la broche de 0 à 7 (pour P0 à P7)
PcfLed::PcfLed(Pcf8574 & p, int i)  : Led (i, false), pcf8574 (p)  {
}

