#ifndef ESCENARIO_H
#define ESCENARIO_H


#include "Item.h"
#include "Player.h"
#include "Obstaculo.h"
#include "Bomba.h"
#include "VBomba.h"
#include "NBomba.h"
#include "EBomba.h"

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Escenario{
    protected:
        string name;
        Item*** tablero;
        vector<Bomba> bombas;

    public:
        Escenario(string, Item***);
        
        Item* getMatriz();
        void print();
        Item*** getTablero();
        bool moverplayer(int,int,int,int);
        bool poner(int, int);

};

#endif