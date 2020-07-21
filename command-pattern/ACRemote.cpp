//
// Created by Matan on 7/21/20.
//

#include "ACRemote.h"

void ACRemote::pressOnOff(){
    if(not this->on){
        this->turnOn->execute();
    } else {
        this->turnOn->undo();
    }
    this->on = not this->on;
}

void ACRemote::pressTempUp() {
    this->raiseTemp->execute();
}

void ACRemote::pressTempDown() {
    this->raiseTemp->undo();
}