#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Wprowadz dowolną liczbe naturalna: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Musi być dodatnia." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }

    cout << "Ilość liczb podzielnych przez 5 ale nie podzielnych przez 3 w zakresie liczby " << n
        << " to: " << count << endl;

    return 0;
}

