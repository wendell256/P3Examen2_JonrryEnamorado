#ifndef BOMBAS_H
#define BOMBAS_H

class Bomba{
    protected:
        int explota;
        int tipo;
    public:
        Bomba();
        void reduceExplota();
        int getExplota();
        int getTipo();
};

#endif