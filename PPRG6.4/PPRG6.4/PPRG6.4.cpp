#include <iostream>
#include <string>
using namespace std;

int main() {
    string userString;
    int n;

    cout << "Wprowadz slowo: ";
    getline(cin, userString);

    cout << "Wprowadz ile razy ma byc konkatenowane: ";
    cin >> n;


    if (n < 0) {
        cerr << "Wpisz poprawna liczbe." << endl;
        return 1; 
    }

    std::string resultString;
    for (int i = 0; i < n; ++i) {
        resultString += userString;
    }

    std::cout << "Slowo konkatenowane " << n << " razy: " << resultString << endl;

    return 0;
}