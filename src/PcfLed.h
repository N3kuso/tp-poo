#ifndef _PCFLED_H
#define _PCFLED_H


#include "Led.h"

class Pcf8574;

class PcfLed : public Led {
  private:
    Pcf8574 & pcf8574;


  public:
    //Modification de l'état de la led 
    //s est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
    virtual void set(bool s = true);

    //Etat de la led
    //retourne true pour led allumée, false pour éteinte
    virtual bool state();

    virtual void begin();

    //Constructeur
    //p référence sur un objet de la classe Pcf8574 permettant un accès aux broches 
    //i numéro de la broche de 0 à 7 (pour P0 à P7)
    PcfLed(Pcf8574 & p, int i);

};
#endif
