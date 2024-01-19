#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 6;
const int NUM_SUBJECTS = 4;

struct Student {
    string name;
    int grades[NUM_SUBJECTS];
};

int main() {
    Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Wpisz kolejno oceny " << students[i].name << " (informatyka, matematyka, biologia, jezyk polski): ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cin >> students[i].grades[j];
        }
    }

    while (true) {
        int studentNumber, subjectNumber;

        cout << "Wpisz numer studenta (Od 1 do 6, wpisz 0 by zakonczyc program): ";
        cin >> studentNumber;

        if (studentNumber == 0) {
            break;
        }

        if (studentNumber < 1 || studentNumber > NUM_STUDENTS) {
            cout << "Niepoprawny numer." << endl;
            continue;
        }

        cout << "Wpisz numer przedmiotu (1.Informatyka, 2.Matematyka, 3.Biologia, 4.J.Polski) ";
        cin >> subjectNumber;

        // Validate subject number
        if (subjectNumber < 1 || subjectNumber > NUM_SUBJECTS) {
            cout << "Niepoprawny numer." << endl;
            continue;
        }

        // Display the grade for the selected student and subject
        cout << "Ocena " << students[studentNumber - 1].name << " z przedmiotu "
            << subjectNumber << " to: " << students[studentNumber - 1].grades[subjectNumber - 1] << endl;
    }

    return 0;
}
