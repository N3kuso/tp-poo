#ifndef _LED_H
#define _LED_H


class Led {
  public:
    //Modification de l'état de la led 
    //s est l'état que l'on veut appliquer à la led,  true pour led allumée, false pour éteinte
    virtual void set(bool s = true) = 0;

    //Etat de la led
    //retourne true pour led allumée, false pour éteinte
    virtual bool state() = 0;

    //Basculement de l'état de la led
    //Si la led est éteinte, un appel à cette opération l'allume, si elle est allumée, cela l'éteint. 
    //Par défaut, cette opération est une combinaison de l'opération set() et state()
    void toggle();


  private:
    //Identifiant de la led
    int id;

    //Connection de la led
    //true si la led est commandée par son anode, un niveau logique haut sur l'anode allume la led, 
    //false  si la led est commandée par sa cathode, un niveau logique haut sur sa cathode allume la led
    
    bool anode;


  public:
    //Retourne l'identifiant de la led
    inline const int get_id() const;

    //Retourne la broche de commande de la led
    //true commande par anode, false par cathode
    inline const bool get_anode() const;

    //Constructeur
    //i est l'identifiant de la led
    //a est la broche de commande de la led, true led connectée par l'anode, false par la cathode
    Led(int i, bool a = true);

    //Destructeur
    virtual ~Led();

    virtual void begin() = 0;

};
//Retourne l'identifiant de la led
inline const int Led::get_id() const {
  return id;
}

//Retourne la broche de commande de la led
//true commande par anode, false par cathode
inline const bool Led::get_anode() const {
  return anode;
}

#endif
