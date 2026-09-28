// Объектно-ориентированный вид программирования

#include <iostream>

using namespace std;

// Задача 2 - объектно-ориентированный
class Biker {
private:
    int v;
    int t;

public:
    Biker() {
        v = 0;
        t = 0;
    }

    void read() {
        cout << "Введите v и t: ";
        cin >> v >> t;
    }

    int position() {
        return (v * t % 109 + 109) % 109;
    }

    void print() {
        cout << "Вася остановится на отметке " << position() << endl;
    }
};

// Задача 5 - объектно-ориентированный
class Clock {
private:
    int n;

    void printTwoDigits(int x) {
        cout << x / 10 << x % 10;
    }

public:
    Clock() {
        n = 0;
    }

    void read() {
        cout << "Введите n: ";
        cin >> n;
    }

    int hours() {
        return n / 3600 % 24;
    }

    int minutes() {
        return n / 60 % 60;
    }

    int seconds() {
        return n % 60;
    }

    void print() {
        cout << "Часы покажут " << hours() << ":";
        printTwoDigits(minutes());
        cout << ":";
        printTwoDigits(seconds());
        cout << endl;
    }
};

int main() {
    // Задача 2 - объектно-ориентированный
    cout << "Задача 2 (объектно-ориентированный)" << endl;
    Biker vasya;
    vasya.read();
    vasya.print();

    // Задача 5 - объектно-ориентированный
    cout << "Задача 5 (объектно-ориентированный)" << endl;
    Clock watch;
    watch.read();
    watch.print();

    return 0;
}
