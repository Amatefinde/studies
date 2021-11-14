#include <iostream>
#include <string> 
#include <conio.h>
#include <cctype> 
using namespace std;

int numm1(int s) {
    cout << "Даны две переменные целого типа: A и B. Если их значения не равны, \nто программа присвоит каждой переменной большее из этих значений, а если равны, \nто присвоит переменным нулевые значения, а потом выведем новые значения A и B.\n";
    cout << "Введите А и B: ";
    int b,a,maxim;
    cin >> a>>b;
    if (a > b)
        maxim = a;
    else maxim = b;
    if (a != b)
    {
        a = maxim;
        b = maxim;
        cout << "A = " << a << "\nB = " << b;
        cout << endl;
        return 0;
    }
    a = 0; b = 0;
    cout << "A = " << a << "\nB = " << b;
    cout << endl;
    return 0;
}

int numm2(int s) {

    cout << "Даны три числа. Программа выведет сумму двух наибольших из них\n";
    cout << "Введите три числа через пробел: ";
    int a, b, c,min;
    cin >> a >> b >> c;
    cout << endl;
    if (a < b && a < c)
        min = a;
    else if (b < a && b < c)
        min = b;
    else
        min = c;
    cout << "Сумма двух наибольших: " << a + b + c - min;
    return 0;
}

int numm3(int s) {

    cout << "На плоскости расположены три точки: A, B, C.\nПрограмма определит, какая из двух последних точек (B или C) расположена \nближе к A, и выведет эту точку и ее расстояние от точки A.\n";
    int64_t ax,ay,bx,by,cx,cy;
    double blen, clen;
    cout << "\nВведите координаты точки А (X и Y через пробел): ";
    cin >> ax>>ay;
    cout << "Введите координаты точки B (X и Y через пробел): ";
    cin >> bx >> by;
    cout << "Введите координаты точки C (X и Y через пробел): ";
    cin >> cx >> cy;
    blen = pow(pow(abs(ax - bx), 2) + pow(abs(ay - by), 2), 0.5);
    clen = pow(pow(abs(ax - cx), 2) + pow(abs(ay - cy), 2), 0.5);
    if (blen < clen)
    {
        cout << "\nТочка B расположена ближе. Растояние от А до B: " << blen<<endl;
        return 0;
    }
    cout << "\nТочка C расположена ближе. Растояние от A до C: " << clen<<endl;

    return 0;
}

int numm4(int s) {
    int x,y;
    cout << "Введите координаты точки не лежащей на осях OX и OY. Программа определит в какой четверти находиться точка.\n";
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    if (x > 0)
    {
        if (y > 0) cout << "Точка лежит в первой четверти.";
        else cout << "Точка лежит в четвёртой четверти.";
    }
    else
    {
        if (y > 0) cout << "Точка лежит во второй четверти";
        else cout << "Точка лежит в третьей четверти";
    }
    return 0;
}

int numm5(int s) {
    int n;
    cout << "Введите число. Программа выведет описание этого числа (чётность и знак).\n";
    cout << "Число: ";
    cin >> n;
    cout << endl;
    if (n < 0) cout << "Отрицательное ";
    else if (n > 0) cout << "Положительное ";
    else
    {
        cout << "Нулевое число "<<endl;
        return 0;
    }
    if (n % 2 == 0) cout << "чётное ";
    else cout << "нечётное ";
    cout << "число\n";
    return 0;
}

int numm6(int s) {
    int n;
    cout << "Введите число от 1 до 999 включительно. Программа выведет описание этого числа (чётность и кол-во знаков).\n";
    cout << "Число: ";
    cin >> n;
    cout << endl;
    if (n % 2 == 0) cout << "Чётное ";
    else cout << "Нечётное ";
    if (n < 10) cout << "однозначное ";
    else if (n < 100) cout << "двузначное ";
    else cout << "трехзначное ";
    cout << "число\n";
    return 0;
}

int main() {

    setlocale(LC_ALL, "rus");
label2:
    cout << "Введите номер задания (цифра от 1 до 6): " << endl;
    int a;
    cin >> a;
label1:
    if (a < 1 || a > 6) {
        cout << "Задания с таким номером не существует.\nПопробуйте ещё раз. \n\n";
        goto label2;
    }
    system("cls");
    cout << "№" << a << " ";
    if (a == 1) numm1(1);
    if (a == 2) numm2(1);
    if (a == 3) numm3(1);
    if (a == 4) numm4(1);
    if (a == 5) numm5(1);
    if (a == 6) numm6(1);


    cout << endl << "Для того что-бы перейти к другой задачи введите её номер. " << endl;
    if (a < 6) cout << "Для того что бы перейти к следующей задаче введите " << "'Next'\n";
    if (a > 1) cout << "Для того что бы вернуться к предыдущей задаче введите " << "'Back'\n";
    cout << "Что бы завершить работу программы введите " << "'Exit'" << endl << endl;

    string name;
    cin >> name;
    if (name == "Exit" || name == "exit" || name == "EXIT")
        return 0;
    if (name == "Next" || name == "next" || name == "NEXT")
        a += 1;

    else
        if (name == "Back" || name == "back" || name == "BACK")
            a -= 1;
        else {
            int b = stoi(name);
            a = b;
        }
    goto label1;
    return 0;
}