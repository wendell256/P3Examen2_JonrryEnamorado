#ifndef EBOMBA_H
#define EBOMBA_H

#include "Bomba.h"

class EBomba:public Bomba{
    protected:
        int cantBombas;
    public:
        EBomba();
        EBomba(int);
        void setCantBombas(int);
        int getCantBombas();
};

#endif