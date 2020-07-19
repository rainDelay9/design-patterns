//
// Created by Matan on 7/19/20.
//

#ifndef ABSTRACT_FACTORY_PATTERN_DAYOFFCLOTHESFACTORY_H
#define ABSTRACT_FACTORY_PATTERN_DAYOFFCLOTHESFACTORY_H


#include "ClothesFactory.h"

class DayOffClothesFactory : public ClothesFactory {
public:
    std::unique_ptr<Shoe> shoe();
    std::unique_ptr<Shirt> shirt();
    std::unique_ptr<Pants> pants();
};


#endif //ABSTRACT_FACTORY_PATTERN_DAYOFFCLOTHESFACTORY_H
