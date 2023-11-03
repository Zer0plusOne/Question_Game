#include <iostream>
// TRABAJO FINAL
#include <iostream>
using namespace std;

int main() {
    string questions[10] = {
        "1.",
        "2.",
        "3.",
        "4.",
        "5.",
        "6.",
        "7.",
        "8.",
        "9.",
        "10."
    };

    string options[10][4] = {
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},
        {"a) 001", "b) 002", "c) 003", "d) 004"},

    };

    string answers[10] = {
        "a", "b", "c", "d", "d", "c", "b", "a", "c", "a"
    };

    int score = 0;
    int streak = 1;

    for (int i = 0; i < 10; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        string userAnswer;
        cout << "Ingrese su respuesta (a, b, c o d): ";
        cin >> userAnswer;

        if (userAnswer == answers[i]) {
            score += streak;
            streak++;
        }
        if (userAnswer != answers[i]) {
            streak == 1;
        }
        cout << endl;
    }

    cout << "Su puntaje final es: " << score << "/10" << endl;

    return 0;
}