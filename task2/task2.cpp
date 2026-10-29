#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int guessGame(int guess, int hidden) { if (guess > hidden) return 1; else if (guess < hidden) return -1; else return 0; }
int main() {
    srand(time(0));
    int hidden = rand() % 50 + 1;
    int guess, result;

    do {
        cout << "Guess the number between (1-50)" << endl;
        cin >> guess;

        result = guessGame(guess, hidden);

        if (result == 1)
            cout << "Your guess is greater than the number" << endl;
        else if (result == -1)
            cout << "Your guess is less than the number" << endl;
        else
            cout << "You win!!" << endl;

    } while (result != 0);

    return 0;
}