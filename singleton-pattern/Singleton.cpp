//
// Created by Matan on 7/20/20.
//

#include "Singleton.h"

Singleton* Singleton::singleton= nullptr;;

Singleton* Singleton::instance(int value) {
    if(singleton==nullptr){
        singleton = new Singleton(value);
    }
    return singleton;
}