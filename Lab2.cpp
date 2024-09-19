#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    cout << "Сума чисел від 1 до 100: " << sum << endl;

    return 0;
}
