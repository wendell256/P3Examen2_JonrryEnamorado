#include "Player.h"

Player::Player():Item(){
        name = "Default";
        tipo = true;
        estado = true;
}

Player::Player(string name, bool tipo){
    this->name = name;
    this->tipo = tipo;
    estado=true;
}

string Player::verclase(){
    return "Player";
}

bool Player::getTipo(){
    return tipo;
}

bool Player::getEstado(){
    return estado;
}

void Player::setName(string tmp){
    name=tmp;
}
