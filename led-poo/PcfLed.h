#ifndef _PCFLED_H
#define _PCFLED_H


#include "Led.h"

class Pcf8574;

class PcfLed : public Led {
  private:
    Pcf8574 & pcf8574;


  public:
    //Modification de l'état de la led 
    //state est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
    virtual void set(bool state = true);

    //Etat de la led
    //retourne true pour led allumée, false pour éteinte
    virtual bool state();

    virtual void begin();

    PcfLed(Pcf8574 & p, int i);

};
#endif
