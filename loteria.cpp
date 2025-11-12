#include "loteria.h"
#include <algorithm>
#include <ctime>
#include <iostream>

using namespace std;

//constructor
Loteria::Loteria(int n) : size(n) {
    deck = new int[size];
    for (int i = 0; i < size; ++i) {
        deck[i] = i + 1;
    }

    //card names
    cardNames[0] = "El Gallo";      cardNames[1] = "El Diablito";    cardNames[2] = "La Dama";
    cardNames[3] = "El Catrin";     cardNames[4] = "El Paraguas";    cardNames[5] = "La Sirena";
    cardNames[6] = "La Escalera";   cardNames[7] = "La Botella";     cardNames[8] = "El Barril";
    cardNames[9] = "El Arbol";      cardNames[10] = "El Melon";      cardNames[11] = "El Valiente";
    cardNames[12] = "El Gorrito";   cardNames[13] = "La Muerte";     cardNames[14] = "La Pera";
    cardNames[15] = "La Bandera";   cardNames[16] = "El Bandolon";   cardNames[17] = "El Violoncello";
    cardNames[18] = "La Garza";     cardNames[19] = "El Pajaro";     cardNames[20] = "La Mano";
    cardNames[21] = "La Bota";      cardNames[22] = "La Luna";       cardNames[23] = "El Cotorro";
    cardNames[24] = "La Borracho";  cardNames[25] = "El Negrito";    cardNames[26] = "El Corazon";
    cardNames[27] = "La Sandia";    cardNames[28] = "El Tambor";     cardNames[29] = "El Camaron";
    cardNames[30] = "Las Jaras";    cardNames[31] = "El Musico";     cardNames[32] = "La Arana";
    cardNames[33] = "El Soldado";   cardNames[34] = "La Estrella";   cardNames[35] = "El Cazo";
    cardNames[36] = "El Mundo";     cardNames[37] = "El Apache";     cardNames[38] = "El Nopal";
    cardNames[39] = "El Alacran";   cardNames[40] = "La Rosa";       cardNames[41] = "La Calavera";
    cardNames[42] = "La Campana";   cardNames[43] = "El Canarito";   cardNames[44] = "El Venado";
    cardNames[45] = "El Sol";       cardNames[46] = "La Corona";     cardNames[47] = "La Chalupa";
    cardNames[48] = "El Pino";      cardNames[49] = "El Pescado";    cardNames[50] = "La Palma";
    cardNames[51] = "La Maceta";    cardNames[52] = "El Arpa";       cardNames[53] = "La Rana";
}

//copy constructor
Loteria::Loteria(const Loteria &fromDeck) : size(fromDeck.size) {
    deck = new int[size];
    copy(fromDeck.deck, fromDeck.deck + size, deck);
}

//destructor
Loteria::~Loteria() {
    delete[] deck;
}
//assignment operator
const Loteria &Loteria::operator=(const Loteria &fromDeck) {
    if (this != &fromDeck) {
        delete[] deck;
        size = fromDeck.size;
        deck = new int[size];
        copy(fromDeck.deck, fromDeck.deck + size, deck);
    }
    return *this;
}

//get deck size
int Loteria::getSize() const {
    return size;
}

//shuffles the deck
void Loteria::shuffle() {
    std::random_shuffle(deck, deck + size);
}

//deals a card
int Loteria::deal() {
    if (size > 0) {
        int card = deck[size - 1];
        size--;
        return card;
    }
    return -1;
}

//prints the deck
void Loteria::printDeck() const {
    for (int i = 0; i < size; i++) {
        cout << deck[i] << " ";
    }
    cout << endl;
}

//refills the deck
void Loteria::refillDeck() {
     size = 54;
    delete[] deck;
    deck = new int[size];
    for (int i = 0; i < size; ++i) {
      deck[i] = i + 1;
    }
    shuffle();
}
                                                                                             
