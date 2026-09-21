// Задача 2. За один цикл вычислить F(n) = 1! * 2! * 3! * ... * n!,
// где n! = 1 * 2 * 3 * ... * n.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введите n: ";
    cin >> n;

    unsigned long long factorial = 1;  // здесь копится i!
    unsigned long long result = 1;     // здесь копится ответ F(n)

    // Один цикл: на каждом шаге сначала получаем i! из (i-1)!,
    // а потом сразу домножаем на него ответ
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;      // было (i-1)!, стало i!
        result = result * factorial;    // домножили ответ на i!
    }

    cout << "F(" << n << ") = " << result << endl;

    return 0;
}
