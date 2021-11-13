#include <iostream>
#include <string> 
#include <conio.h>
#include <cctype> 
using namespace std;

int numm1(int s) {

    cout << "Введите стоимость 1 кг конфет: ";
    int a;
    double i;
    cin >> a;
    cout << endl;
    for (i = 0.1; i <= 1; i = i + 0.1) 
    {
        cout << i << " кг конфет стоит " << i * a << " руб\n";
    }
    return 0;
}

int numm2(int s) {

    cout << "Программа найдёт произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей)\nВведите целое число N (> 0): ";
    double i,summ=1,mnozh=1,a=0;
    int n;
    cin >> n;
    cout << endl;
    while (a < n)
    {
    mnozh = mnozh + 0.1;
    summ *= mnozh;
    a++;
    }
    cout << "Произведение сомножителей: "<<summ;
    return 0;
}

int numm3(int s) {

    cout << "Программа найдёт квадрат числа, используя для его вычисления\nследующую формулу: N2 = 1 + 3 + 5 + . . . + (2*N - 1)\n\nВведите целое число N (> 0):";
    int a, i=1,b=0;
    cin >> a;
    cout << endl;
    a = (2 * a - 1);
    while (i <= a)
    {
        
        cout << "Текущее значение суммы: " << b+i << ";\n";
        b += i;
        i += 2;
    }
    cout << "\n\nИтоговое значение суммы: " << b<<endl;
    return 0;
}

int numm4(int s) {

    cout << "Программа используя один цикл, найдёт сумму 1 + A + A^2 + A^3 + . . . + A^N\n\nВведите целые число A и N (> 0):";
    int a, i = 0, b = 0, n;
    cin >> a >> n;
    cout << endl;
    double ss = 0;
    while (i <= n)
    {

        b = pow(a, i);
        cout << "Текущее слогаемое суммы: " << b << ";\n";
        i++;
        ss += b;

    }
    cout << "\n\nИтоговое значение суммы: " << ss << endl;
    return 0;
}

int numm5(int s) {

    cout << "Программа используя один цикл, найдёт сумму 1 - A + A^2 - A^3 + . . . +- A^N\n\nВведите целые число A и N (> 0):";
    int a, i = 0, b = 0, n;
    cin >> a >> n;
    a = -a;
    cout << endl;
    double ss = 0;
    while (i <= n)
    {

        b = pow(a, i);
        cout << "Текущее слогаемое суммы: " << b << ";\n";
        i++;
        ss += b;

    }
    cout << "\n\nИтоговое значение суммы: " << ss << endl;
    return 0;
}


int main() {

    setlocale(LC_ALL, "rus");
label2:
    cout << "Введите номер задания (цифра от 1 до 5): " << endl;
    int a;
    cin >> a;
label1:
    if (a < 1 || a > 5) {
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


    cout << endl << "Для того что-бы перейти к другой задачи введите её номер. " << endl;
    if (a < 5) cout << "Для того что бы перейти к следующей задаче введите " << "'Next'\n";
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