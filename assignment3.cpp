
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int score, highest;
    cout << "Enter score of student 1: ";
    cin >> highest;

    for (int i = 2; i <= n; i++) {
        cout << "Enter score of student " << i << ": ";
        cin >> score;
        if (score > highest)
            highest = score;
    }

    cout << "Highest score = " << highest;
    return 0;
}

