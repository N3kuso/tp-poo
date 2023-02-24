#ifndef _GPIOLED_H
#define _GPIOLED_H


#include "Led.h"

class GpioLed : public Led {
  public:
    virtual void begin();

    //Modification de l'état de la led 
    //s est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
    virtual void set(bool s = true);

    //Etat de la led
    //retourne true pour led allumée, false pour éteinte
    virtual bool state();

    //Constructeur
    //i numéro iNo de la broche de commande
    //a broche de commande de la led
    GpioLed(int i, bool a);

};
#endif
