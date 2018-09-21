#include "Player.h"

Player::Player(){
        name = "Default";
        tipo = true;
        estado = true;
}

Player::Player(string name, bool tipo){
    this->name = name;
    this->tipo = tipo;
}

