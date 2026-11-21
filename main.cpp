#include <iostream>

int main() {
    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100 +1);

    std::cout << "----- NumberGuess Game -----" << std::endl;

    do {
        std::cout << "Pick a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        // game logic

        //lower
        if (guess < num) {
            std::cout << "Higher!" << std::endl;
        } else if (guess > num) {
            std::cout << "Lower!" << std::endl;
        } else {
            std::cout << "CORRECT!!!\nNumber of tries: " << tries << std::endl;
        }
    }while (guess != num);

    return 0;
}