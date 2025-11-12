#ifndef LOTERIA_H
#define LOTERIA_H

#include <iostream>
#include <vector>
#include <string>

class Loteria {
private:
    int size;
    int *deck;

public:
    Loteria(int n = 54);
    Loteria(const Loteria &fromDeck);
    ~Loteria();
    const Loteria &operator=(const Loteria &fromDeck);

    int getSize() const;
    void shuffle();
    int deal();
    void printDeck() const;
    void refillDeck();

    std::string cardNames[54];
};

#endif

