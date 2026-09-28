// Модульный вид программирования

#include <iostream>

using namespace std;

// Задача 2 - модульный
namespace Mkad {
    const int LENGTH = 109;

    int position(int v, int t) {
        return (v * t % LENGTH + LENGTH) % LENGTH;
    }

    void run() {
        int v, t;
        cout << "Задача 2 (модульный)" << endl;
        cout << "Введите v и t: ";
        cin >> v >> t;
        cout << "Вася остановится на отметке " << position(v, t) << endl;
    }
}

// Задача 5 - модульный
namespace Clock {
    int hours(int n) {
        return n / 3600 % 24;
    }

    int minutes(int n) {
        return n / 60 % 60;
    }

    int seconds(int n) {
        return n % 60;
    }

    void printTwoDigits(int x) {
        cout << x / 10 << x % 10;
    }

    void run() {
        int n;
        cout << "Задача 5 (модульный)" << endl;
        cout << "Введите n: ";
        cin >> n;
        cout << "Часы покажут " << hours(n) << ":";
        printTwoDigits(minutes(n));
        cout << ":";
        printTwoDigits(seconds(n));
        cout << endl;
    }
}

int main() {
    // Задача 2 - модульный
    Mkad::run();

    // Задача 5 - модульный
    Clock::run();

    return 0;
}
