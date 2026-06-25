#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of France?\n";
    cout << "A. Berlin\nB. Madrid\nC. Paris\nD. Rome\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (toupper(answer) == 'C') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. Paris\n\n";
    }

    // Question 2
    cout << "2. Which planet is known as the Red Planet?\n";
    cout << "A. Earth\nB. Mars\nC. Jupiter\nD. Venus\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (toupper(answer) == 'B') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. Mars\n\n";
    }

    // Question 3
    cout << "3. Who developed C++?\n";
    cout << "A. Dennis Ritchie\nB. James Gosling\nC. Bjarne Stroustrup\nD. Guido van Rossum\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (toupper(answer) == 'C') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. Bjarne Stroustrup\n\n";
    }

    cout << "===== QUIZ COMPLETED =====\n";
    cout << "Your Score: " << score << "/3\n";

    return 0;
}