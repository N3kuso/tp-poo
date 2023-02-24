#include <Arduino.h>

#include "GpioLed.h"

void GpioLed::begin() {

  pinMode (get_id(), OUTPUT);
  digitalWrite (get_id(),! get_anode());
}

//Modification de l'état de la led
//state est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte

void GpioLed::set(bool s) {

  if (get_anode() == false) {

    s = !s;
  }
  digitalWrite (get_id(),s);
}

//Etat de la led
//retourne true pour led allumée, false pour éteinte
bool GpioLed::state() {
  bool b = digitalRead (get_id());

  if (get_anode() == false) {

    b = !b;
  }

  return b;
}

//Constructeur
//i numéro iNo de la broche de commande
//a broche de commande de la led
GpioLed::GpioLed(int i, bool a) : Led (i, a) {
}

