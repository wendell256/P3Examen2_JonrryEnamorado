#include "Bomba.h"

Bomba::Bomba():Item(){
    explota = 3;
}

void Bomba::reduceExplota(){
    explota-=1;
}

int Bomba::getExplota(){
    return explota;
}

int Bomba::getTipo(){
    return tipo;
}

string Bomba::verclase(){
    return "Bomba";
}
