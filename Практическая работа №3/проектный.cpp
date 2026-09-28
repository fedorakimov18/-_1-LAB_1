// Проектный вид программирования

#include <iostream>

using namespace std;

// Задача 2 - проектный
struct Mkad {
    int v;
    int t;
};

Mkad readMkad();
int findPosition(Mkad data);
void printPosition(int km);

// Задача 5 - проектный
struct Time {
    int h;
    int m;
    int s;
};

int readSeconds();
Time convert(int n);
void printTime(Time result);

int main() {
    // Задача 2 - проектный
    cout << "Задача 2 (проектный)" << endl;
    Mkad data = readMkad();
    printPosition(findPosition(data));

    // Задача 5 - проектный
    cout << "Задача 5 (проектный)" << endl;
    int n = readSeconds();
    printTime(convert(n));

    return 0;
}

// Задача 2 - проектный
Mkad readMkad() {
    Mkad data;
    cout << "Введите v и t: ";
    cin >> data.v >> data.t;
    return data;
}

int findPosition(Mkad data) {
    return (data.v * data.t % 109 + 109) % 109;
}

void printPosition(int km) {
    cout << "Вася остановится на отметке " << km << endl;
}

// Задача 5 - проектный
int readSeconds() {
    int n;
    cout << "Введите n: ";
    cin >> n;
    return n;
}

Time convert(int n) {
    Time result;
    result.h = n / 3600 % 24;
    result.m = n / 60 % 60;
    result.s = n % 60;
    return result;
}

void printTime(Time result) {
    cout << "Часы покажут " << result.h << ":" << result.m / 10 << result.m % 10 << ":" << result.s / 10 << result.s % 10 << endl;
}
