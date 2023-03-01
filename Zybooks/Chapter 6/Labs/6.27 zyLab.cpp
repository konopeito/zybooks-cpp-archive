// 6.27.1: LAB: Flip a coin
#include <iostream>
#include <cstdlib>
using namespace std;


string CoinFlip() {
    int flip = rand() % 2;
    if (flip == 0) {
        return "Tails";
    }
    else {
        return "Heads";
    }
}

int main() {
    srand(time(0));

    int num_flips;
    cin >> num_flips;

    
    for (int i = 0; i < num_flips; i++) {
        cout << CoinFlip() << endl;
    }


   return 0;
}
