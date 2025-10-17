#include <iostream>
using namespace std;

int main() {
    int subjects;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    double total = 0, marks;
    for (int i = 1; i <= subjects; i++) {
        cout << "Enter marks of subject " << i << ": ";
        cin >> marks;
        total += marks;
    }

    double avg = total / subjects;
    char grade;

    if (avg >= 90) grade = 'A';
    else if (avg >= 75) grade = 'B';
    else if (avg >= 60) grade = 'C';
    else if (avg >= 50) grade = 'D';
    else grade = 'F';

    cout << "\nTotal Marks: " << total;
    cout << "\nAverage: " << avg;
    cout << "\nGrade: " << grade << endl;
    return 0;
}
