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

bool Escenario::moverplayer(int i,int j,int ni,int nj){
    bool semovio=false;
    cout<<"["<<i<<" "<<j<<" "<<ni<<" "<<nj<<"]"<<endl;
    Player* tmp = dynamic_cast<Player*> (tablero[i][j]);
    
    Player* ply;
    Obstaculo* o;
    Bomba* b;

    ply = dynamic_cast<Player*>(tablero[ni][nj]);
    o = dynamic_cast<Obstaculo*>(tablero[ni][nj]);
    b = dynamic_cast<Bomba*>(tablero[ni][nj]);

    if(ply==NULL){
        if(o==NULL){
            if(b==NULL){
                tablero[ni][nj]=tmp;
                tablero[i][j]=NULL;
                semovio=true;
            }
        }
    }
    return semovio;
}

bool poner(int posi,int posj){
    bool sepuso = false;
    
}
/*Player* ply;
    Obstaculo* o;
    Bomba* b;        
            ply = dynamic_cast<Player*>(tablero[posnc][posnf]);
            o = dynamic_cast<Obstaculo*>(tablero[posnc][posnf]);
            b = dynamic_cast<Bomba*>(tablero[posnc][posnf]);
            if(ply=NULL){
                if(o=NULL){
                    if(b=NULL){
                        tablero[posnc][posnf]=player;
                        tablero[posac][posaf]=new Item();
                    }
                
                }
            }*/