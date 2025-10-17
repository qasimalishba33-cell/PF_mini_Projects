#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number
    int secret = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Guess the number (1-100):\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secret) cout << "Too high!\n";
        else if (guess < secret) cout << "Too low!\n";
        else cout << "🎉 Correct! You guessed it in " << tries << " tries!\n";

    } while (guess != secret);

    return 0;
}
