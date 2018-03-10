#pragma once

#include <stdio.h>

class Panda {
public:
    Panda(char id, Panda &other) : m_id(id) {
        printf("Panda %c is being constructed\n", m_id);
        this->Speak();
        printf("Other panda: ");
        other.Speak();
    }

    virtual ~Panda() {
    }

    void Speak() {
        printf("Woof woof I am %c\n", m_id);
    }

private:
    char m_id;
};
