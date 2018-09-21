#include "EBomba.h"

EBomba::EBomba(int cant):Bomba(){
    cantBombas=cant;
    tipo=2;
}

EBomba::EBomba():Bomba(){
    cantBombas=1;
}

int EBomba::getCantBombas(){
    return cantBombas;
}

void EBomba::setCantBombas(int cant){
    cantBombas=cant;
}