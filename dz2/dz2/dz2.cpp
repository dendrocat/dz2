#include <iostream>
#include <math.h>
using namespace std;


void dz21() {
    cout << "Введите высоту, радиус верхнего и нижнего оснований и образующую усечённого конуса(h, r, R, l): ";
    double h, r, R, pi, l;
    cin >> h >> r >> R >> l;
    pi = acos(-1.0);
    cout << "Объём равен " << (R * R + R * r + r * r) * pi * h / 3 << endl;
    cout << "Площадь полной поверхности равна " << (R * R + (R + r) * l + r * r) * pi << endl;
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
    if (b <= y && b < x) {
        cout << "z = " << (log(b - y)) * (sqrt(b - x)) << endl;
    }
    else {
        cout << "Функция неопределена" << endl;
    }
}

void dz24() {
    cout << "Введите натуральное число N: ";
    int N;
    cin >> N;
    for (int i = 0; i < 10; i++) {
        cout << N + i << " ";
    }
}

void dz25() {
    double func[2][16];
    double x;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 16; j++) {
            x = j / 2;
            func[i][j] = (x * x - 2 * x + 2) / (x - 1);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 16; x++) {
            cout << func[i][x] << " ";
        }
        cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double func[2][16];
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 16; x++) {
            func[i][x] = x;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 16; x++) {
            cout << func[i][x] << " ";
        }
        cout << endl;
    }
}

