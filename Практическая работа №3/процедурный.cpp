// Процедурный вид программирования

#include <iostream>

using namespace std;

// Задача 2 - процедурный
void task2() {
    int v, t;
    cout << "Задача 2 (процедурный)" << endl;
    cout << "Введите v и t: ";
    cin >> v >> t;
    int km = (v * t % 109 + 109) % 109;
    cout << "Вася остановится на отметке " << km << endl;
}

// Задача 5 - процедурный
void task5() {
    int n;
    cout << "Задача 5 (процедурный)" << endl;
    cout << "Введите n: ";
    cin >> n;
    int h = n / 3600 % 24;
    int m = n / 60 % 60;
    int s = n % 60;
    cout << "Часы покажут " << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10 << endl;
}

int main() {
    // Задача 2 - процедурный
    task2();

    // Задача 5 - процедурный
    task5();

    return 0;
}
