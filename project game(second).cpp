#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));
    string options[] = { "Stone", "Scissors", "Paper" };
    int compIndex = rand() % 3;
    string game = options[compIndex];

    string me;
    cout << "me: ";
    cin >> me;

    cout << "Комп’ютер обрав: " << game << endl;

    bool win = false;
    bool draw = false;

    if (me == "Stone") me = "Stone";
    if (me == "Scissors") me = "Scissors";
    if (me == "Paper") me = "Paper";

    if (me == game) {
        draw = true;
    }
    else if (
        (me == "Stone" && me == "Scissors") ||
        (me == "Scissors" && me == "Paper") ||
        (me == "Paper" && me == "Stone")
        ) {
        win = true;
    }
    if (draw) {
        cout << "Нічия!" << endl;
    }
    else if (win) {
        cout << "Ви перемогли!" << endl;
    }
    else {
        cout << "Ви програли!" << endl;
    }

    return 0;
}