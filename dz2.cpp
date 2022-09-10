#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


void dz21() {
    cout << "Введите высоту, радиус верхнего и нижнего оснований усечённого конуса(h, r, R): ";
    double h, r, R, pi, l;
    cin >> h >> r >> R >> l;
    l = sqrt(h*h + (R - r)*(R - r));
    if (h > 0 && r > 0 && R > 0 && l > 0 && r != R) {
        pi = acos(-1.0);
        cout << pi;
        cout << "Объём равен " << (R * R + R * r + r * r) * pi * h / 3 << endl;
        cout << "Площадь полной поверхности равна " << (R * R + (R + r) * l + r * r) * pi << endl;
    }
    else {
        cout << "Тело с такими параметрами не является усечённым конусом" << endl;
    }
}

void dz22() {
    cout << "Введите а и х: ";
    double a, x;
    cin >> a >> x;
    if (fabs(x) < 1) {
        cout << "w = " << a * log(fabs(x)) << endl;
    }
    else {
        if (a >= x * x) {
            cout << "w = " << sqrt(a - x * x) << endl;
        }
        else {
            cout << "Функция неопределена" << endl;
        }
    }
}

void dz23() {
    cout << "Введите x, y, b: ";
    double x, y, b;
    cin >> x >> y >> b;
    if (b <= y || b < x) {
        cout << "Функция неопределена" << endl;
    }
    else {
        cout << "z = " << (log(b - y)) * (sqrt(b - x)) << endl;
    }
}

void dz24() {
    cout << "Введите натуральное число N: ";
    int N;
    cin >> N;
    if N <= 0 {
        for (int i = 1; i <= 10; i++) {
            cout << i << " ";
        }
    else {
        for (int i = 0; i < 10; i++) {
            cout << N + i << " ";
    }
    cout << endl;
}

void dz25() {
    cout << "Таблица функции" << endl;
    cout << setw(5) << "x" << setw(9) << "y" << endl;
    for (float x = -4; x <= 4; x+=0.5) {
        if (x != 1) {
            cout << setw(5) << x << setw(10) << (x * x - 2 * x + 2) / (x - 1) << endl;
        }
        else {
            cout << setw(5) << x << setw(10) << "None" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    dz21();
    dz22();
    dz23();
    dz24();
    dz25();
 }
