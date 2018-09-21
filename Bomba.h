#ifndef BOMBAS_H
#define BOMBAS_H

#include "Item.h"


class Bomba:public Item{
    protected:
        int explota;
        int tipo;
    public:
        Bomba();
        string verclase();
        void reduceExplota();
        int getExplota();
        int getTipo();
};

#endif