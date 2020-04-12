//dicegame.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int rollDice(){
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    return die1 + die2;
}

int main(){
    cout << "Please enter an positive integar: ";
    unsigned int seed;
    cin >> seed;
    srand(seed);
    enum gameStatus {WIN, LOSE, ON};
    gameStatus flag = ON;
    int sum, points = 0;
    switch(sum = rollDice()){
        case 7:;
        case 11: flag = WIN; break;
        case 2:;
        case 3:;
        case 12: flag = LOSE; break;
        default: points = sum; break;
    }
    cout << "Round 1 sum: " << sum << endl;
    int i = 2;
    while(flag ==  ON){
        sum = rollDice();
        {
            if(sum ==  points) flag = WIN;
            else if(sum == 7) flag = LOSE;
        }
        cout << "Round " << i++ << " sum: " << sum<< endl;
    }
    if(flag == WIN) cout << "Congrats! You WIN!" << endl;
    else cout << "Sorry. You LOSE!" << endl;
    return 0;
}