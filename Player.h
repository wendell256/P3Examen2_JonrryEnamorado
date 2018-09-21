#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
    protected:
        string name;
        bool estado;//true = vivo; false = muerto
        bool tipo;//true = human; false = CPU
    public:
        Player(string,bool);
        Player();
        bool getEstado();
        bool setEstado();
        bool getTipo();
};

#endif