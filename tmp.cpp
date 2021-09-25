#include <iostream>
#include <clocale>
#include "stdafx.h"
using namespace std;

int numm1(int s)
{
    int a, b;
    cout << "Программа вычисляет площадь и периметр прямоугольника. ";
    cout << "Write a and b: ";
    cin >> a>>b;
    cout << endl;
    cout << "Square = " << a * b << endl;
    cout << "Perimeter = " << 2*(a + b);
    return 0;
}

int numm2(int s) {
    int d;
    cout << "Write d: ";
    cin >> d;
    cout << endl;
    cout << "Length =" << 3.14 * d;
    return 0;
}
int numm3(int s) {
    int a, b;
    cout << "Write a and b: ";
    cin >> a >> b;
    cout << endl;
    cout << "Average:" << (a + b) / 2;
    return 0;
}
int numm4(int s) {
    int a, b;
    cout << "Write a and b: ";
    cin >> a >> b;
    cout << endl;
    cout << "a*a+b*b= " << a * a + b * b << endl;
    cout << "a*a-b*b= " << a * a - b * b << endl;
    cout << "a*a*b*b= " << a * a * b * b << endl;
    cout << "(a*a)/(b*b)= " << (a * a) / (b * b) << endl;
    return 0;
}
int numm5(int s) {
    int a, b;
    cout << "Write a and b: ";
    cin >> a >> b;
    cout << endl;
    cout << "|a|+|b|= " << abs(a) + abs(b) << endl;
    cout << "|a|-|b|= " << abs(a) - abs(b) << endl;
    cout << "|a|*|b|= " << abs(a) * abs(b) << endl;
    cout << "|a|/|b|= " << abs(a) / abs(b) << endl;
    return 0;
}


int main() {
    cout << "Select task (number 1-5): "<<endl;
    int a;
    cin >> a;
    if (a == 1) numm1(1);
    if (a == 2) numm2(1);
    if (a == 3) numm3(1);
    if (a == 4) numm4(1);
    if (a == 5) numm5(1);

        
    return 0;
}
