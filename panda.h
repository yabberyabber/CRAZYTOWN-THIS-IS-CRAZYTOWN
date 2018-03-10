#pragma once

#include <stdio.h>

class TrashPanda;

class Panda {
public:
    Panda(TrashPanda *trash) {
        printf("Panda is being constructed %p\n", trash);
    }

    virtual ~Panda() {
    }
};

class TrashPanda {
public:
    TrashPanda(Panda *panda) {
        printf("TrashPanda is being constructed %p\n", panda);
    }

    virtual ~TrashPanda() {
    }
};
