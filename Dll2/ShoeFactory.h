
// ShoeFactory.h
#ifndef SHOEFACTORY_H
#define SHOEFACTORY_H

#include "Shoe.h"
#include "Boot.h"
#include "Sandal.h"

class ShoeFactory {
public:
    enum ShoeType {
        BOOT,
        SANDAL
    };

    static Shoe* createShoe(ShoeType type) {
        switch (type) {
        case BOOT: return new Boot();
        case SANDAL: return new Sandal();
        default: return nullptr;
        }
    }
};

#endif
