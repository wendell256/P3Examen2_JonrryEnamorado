#include "Escenario.h"
#include "Bomba.h"
#include "NBomba.h"
#include "VBomba.h"
#include "EBomba.h"
#include "Player.h"
#include "Item.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Item*** crearTablero(Item***);
int menu();
void crearPlayers(string);
void moverse();
void actualizar();



Player* p1;
Player* b1;
Player* b2;
Player* b3;
Player* b4;
Escenario* game;
int posi=0,posj=0,pb1,pb2,pb3,pb4;
//[P]=Player [E] = Enemigo/Bot  [O] = Obstaculo  [B] = Bomba
int main(){
    string name;
    cout<<"****BOMBERMAN****"<<endl<<"by: Jonrry Enamorado 11751062";
    cout<<endl<<"Ingresa tu nombre:"<<endl;
    cin>>name;
    Item*** tablero = new Item**[11];
    crearPlayers(name);
    tablero = crearTablero(tablero);
    game=new Escenario(name,tablero);
    

    while(p1->getEstado() || (b1->getEstado() || b2->getEstado() || b3->getEstado() || b4->getEstado())){
        game->print();
        cout<<endl;
        int sel=menu();
        switch(sel){
            case 1:
                moverse();
                break;
            case 2:
                cout<<"No se puede poner bombas, no tienes en inventario"<<endl;
                break;
            case 3:
                actualizar();
                break;
            default:
                cout<<"Error"<<endl;
                break;
        }
    }
    

    return 0;
}

Item*** crearTablero(Item*** tablero){
    for(int i=0;i<11;i++){
        tablero[i] = new Item*[13];
    }
    
    for(int i=0;i<11;i++){
        for(int j=0;j<13;j++){
            if(i%2!=0 && j%2!=0){
                tablero[i][j] = new Obstaculo();
            }
            else{
                tablero[i][j] = NULL;
            }
            
        }
    }
    tablero[0][0] = (p1);
    tablero[0][12] = (b1);
    tablero[10][12] = (b2);
    tablero[10][0] = (b3);
    tablero[5][6] = (b4);
    return tablero;
}

void crearPlayers(string name){
    p1 = new Player(name,true);
    
    b1 = new Player("Bot1",false);
    b2 = new Player("Bot2",false);
    b3 = new Player("Bot3",false);
    b4 = new Player("Bot4",false);
}

int menu(){
    int sel;
    cout<<"1) Moverse"<<endl<<"2) Poner"<<endl<<"3) Actualizar"<<endl<<"Ingrese Seleccion:"<<endl;
    cin>>sel;
    return sel;
}

void moverse(){
    string move ="";
    bool semovio=false;
    cout<<"Ingrese movimientos"<<endl;
    cin>>move;
    for(int i=0;i<move.length();i++){
        char tmp = move[i];

        if(tmp=='w'){
            semovio=game->moverplayer(posi,posj,posi-1,posj);
            if(semovio)
                posi--;
        }
        else if(tmp=='s'){
            semovio=game->moverplayer(posi,posj,posi+1,posj);
            if(semovio)
                posi++;
        }
        else if(tmp=='a'){
            semovio=game->moverplayer(posi,posj,posi,posj-1);
            if(semovio)
                posj--;
        }else if(tmp=='d'){
            semovio=game->moverplayer(posi,posj,posi,posj+1);
            if(semovio)
                posj++;
        }else if(tmp=='p'){
            //game->poner(posi,posj);
            cout<<"has botado la bomba y no se pudo poner"<<endl;
        }
    }
    
}


void actualizar(){

}