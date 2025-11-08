#include <iostream>
using namespace std;

int main() {
    string studentName;
    double score1, score2, score3;
    double sum, average, difference;

    cout << "Enter your name: ";
    cin >> studentName;

    cout << "Enter first score: ";
    cin >> score1;

    cout << "Enter second score: ";
    cin >> score2;

    cout << "Enter third score: ";
    cin >> score3;

    sum = score1 + score2 + score3;
    average = sum / 3.0;

    cout << "\nStudent: " << studentName << endl;
    cout << "Sum of scores: " << sum << endl;
    cout << "Average score: " << average << endl;

    return 0;
}
