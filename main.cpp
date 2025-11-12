#include <iostream>
#include <vector>
#include <string>
#include "loteria.h"

using namespace std;

const int BOARD_SIZE = 4;

//prints out the board and if a card a drawn that matches a users board then it marks it
void printBoard(const vector<vector<int>>& board, const vector<vector<bool>>& marked, const string cardNames[]) {
    cout << "-------------------------------\n";
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (marked[i][j]) {
                cout << "[" << cardNames[board[i][j] - 1] << "]X ";
            } else {
                cout << "[" << cardNames[board[i][j] - 1] << "] ";
            }
        }
        cout << endl;
    }
    cout << "-------------------------------\n";
}

//checks for winner by seeing if the board is filled with marks
bool checkWinner(const vector<vector<bool>>& marked) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (!marked[i][j]) {
                return false;
            }
        }
    }
    return true;
}

//the interactive game loop
void playLoteria() {
    Loteria loteria(54);
    loteria.shuffle();

    vector<vector<int>> playerBoard(BOARD_SIZE, vector<int>(BOARD_SIZE));
    vector<vector<bool>> playerMarked(BOARD_SIZE, vector<bool>(BOARD_SIZE, false));
    vector<vector<int>> computerBoard(BOARD_SIZE, vector<int>(BOARD_SIZE));
    vector<vector<bool>> computerMarked(BOARD_SIZE, vector<bool>(BOARD_SIZE, false));

    //initializes boards
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            playerBoard[i][j] = loteria.deal();
            computerBoard[i][j] = loteria.deal();
        }
    }
    //refills the deck after the boards have been made
    loteria.refillDeck();

    //outputs boards
    cout << "\nPlayer's board:\n";
    printBoard(playerBoard, playerMarked, loteria.cardNames);
    cout << "\nComputer's board:\n";
    printBoard(computerBoard, computerMarked, loteria.cardNames);

    //game loop
    while (true) {

        char choice;
        cout << "\nDo you want to draw a card? (y/n): ";
        cin >> choice;

        if (choice == 'n') {
            cout << "Game stopped by player.\n";
            break;
        }

        int drawnCard = loteria.deal();
        if (drawnCard == -1) {
            cout << "Game over. No more cards left in Deck.\n";
            break;
        }

        cout << "\nDrawn card: " << loteria.cardNames[drawnCard - 1] << endl;
        
        //outputs if a card from the deck matches the player or computers board and updates there board's with a mark
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                if (playerBoard[i][j] == drawnCard) {
                    playerMarked[i][j] = true;
                    cout << "Player marks: " << loteria.cardNames[drawnCard - 1] << endl;
                }
                if (computerBoard[i][j] == drawnCard) {
                    computerMarked[i][j] = true;
                    cout << "Computer marks: " << loteria.cardNames[drawnCard - 1] << endl;
                }
            }
        }

        //outputs updated boards
        cout << "\nPlayer's board:\n";
        printBoard(playerBoard, playerMarked, loteria.cardNames);
        cout << "\nComputer's board:\n";
        printBoard(computerBoard, computerMarked, loteria.cardNames);

        bool playerWins = checkWinner(playerMarked);
        bool computerWins = checkWinner(computerMarked);

        //outputs the winner or if it was a tied
        if (playerWins || computerWins) {
            if (playerWins && computerWins) {
                cout << "\nBoth Player and Computer have marked their boards fully! It's a tie!\n";
            } else if (playerWins) {
                cout << "\nThe Player has won by marking the entire board!\n";
            } else {
                cout << "\nThe Computer has won by marking the entire board!\n";
            }
            break;
        }
    }
}

int main() {
    //for consistent error checking
    unsigned int seed;
    cout << "Enter a seed: ";
    cin >> seed;
    srand(seed);

    playLoteria();
    return 0;
}

