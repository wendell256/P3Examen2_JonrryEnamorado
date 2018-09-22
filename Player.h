#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Item.h"
using namespace std;

class Player:public Item{
    protected:
        string name;
        bool estado;//true = vivo; false = muerto
        bool tipo;//true = human; false = CPU
    public:
        Player(string,bool);
        Player();
        bool getEstado();
        bool getTipo();
        string verclase();
        void setName(string);
};

#endif