#include "Distance.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    Point a = { 1.0f, 2.0f };
    Point b = { 4.0f, 6.0f };

    cout << "Расстояние между точками a и b: " << distance(a, b) << endl;

    float x1 = 1.0f, y1 = 2.0f, x2 = 4.0f, y2 = 6.0f;

    cout << "Расстояние между точками (x1, y1) и (x2, y2): " << distance(x1, y1, x2, y2) << endl;

    double dx1 = 1.0, dy1 = 2.0, dx2 = 4.0, dy2 = 6.0;

    cout << "Расстояние между точками (dx1, dy1) и (dx2, dy2): " << distance(dx1, dy1, dx2, dy2) << endl;

    return 0;
}