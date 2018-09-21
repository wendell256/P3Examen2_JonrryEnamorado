#include "Escenario.h"
#include <iostream>
using namespace std;



Escenario::Escenario(string tmp,Item*** tablero){
    this->tablero=tablero;
    name="Invisible";
}

void Escenario::print(){
    Player* ply;
    Obstaculo* o;
    Bomba* b;
    for(int i=0;i<11;i++){

        for(int j=0;j<13;j++){
            
            ply = dynamic_cast<Player*>(tablero[i][j]);
            o = dynamic_cast<Obstaculo*>(tablero[i][j]);
            b = dynamic_cast<Bomba*>(tablero[i][j]);
            if(ply!=NULL){
                
                if(ply->getTipo())
                cout<<"[P] ";
                else{
                    cout<<"[E] ";
                }
            }
            else if(o!=NULL){
                cout<<"[O] ";
            }
            else if(b!=NULL){
                cout<<"[B] ";
            }
            else{
                cout<<"[ ] ";
            }
        }
        cout<<endl;
    }
}

Item*** Escenario::getTablero(){
    return tablero;
}