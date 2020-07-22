//
// Created by Matan on 7/20/20.
//

#include "Singleton.h"

Singleton& Singleton::instance() {
    static Singleton instance{0};
    return instance;
}