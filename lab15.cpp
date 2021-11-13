#include <iostream>
#include <string> 
#include <conio.h>
#include <cctype> 
using namespace std;

double PowerA3(double A) 
{   
    double B;
    B = (A * A * A);
    return B;
}

int mainForPowerA3(int s) 
{
    double a, mas[5];
    int i;
    cout << "Введите 5 чисел. Программа выведет их третью степень.\n";
    for (i = 0; i < 5; i++)
    {
        cout << "Введите число №" << i + 1 << ": ";
        cin >> mas[i];
    }
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Число №"<<i+1<<" в третьей степени: "<<PowerA3(mas[i])<<endl;
    }
    return 0;
}



int SignX(double x) 
{
    if (x < 0) return -1;
    if (x == 0) return 0;
    if (x > 0) return 1;
}

int mainForSingX(int s)
{
    double x,a,b;
    cout << "Введите число X. Если X < 0, то программа напечатает -1, если X = 0, то 0, если X > 0, то 1.\n";
    cout << "X = ";
    cin >> x;
    cout << "SignX(x) = " << SignX(x) << endl<<endl;
    cout << "Программа посчитает значение выражения SignX(A)+SignX(B).\nВведите значение А и B: ";
    cin >> a >> b;
    cout << "SignX(A) + SignX(B) = " << SignX(a) + SignX(b)<<endl;
    return 0;
}



double RingS(double R1, double R2)
{   
    double S1, S2;
    S1 = 3.14 * R1 * R1;
    S2 = 3.14 * R2 * R2;
    return S1 - S2;
}

int mainForRingS(int s)
{
    cout << "Введите радиусы двух окружностей (R1 > R2). Программа посчитает площадь заключённого между ними кольца.\n\n";
    int i;
    double masR1[3], masR2[3];
    for (i = 0; i < 3; i++)
    {
        cout << "Кольцо №"<<i+1<<":"<<endl<<"R1 = ";
        cin >> masR1[i];
        cout << "R2 = ";
        cin >> masR2[i];
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Площадь кольца №" << i + 1 << ": " << RingS(masR1[i],masR2[i]);
        cout << endl;
    }


    return 0;
}



int Quarter(double x, double y)
{
    if (y > 0) 
        if (x > 0) return 1;
        else return 2;
    else
        if (x > 0) return 4;
        else return 3;
}
int mainForQuarter(int s) {
    cout << "Программа определяет в какой четверти находиться точка на плоскости.\n";
    cout << "Введите координаты точки (x и y): ";
    double x, y;
    cin >> x >> y;
    cout << endl;
    cout << "Точка распроложена в четверти №" << Quarter(x,y)<<endl;
    return 0;
}



double Fact2(int n)
{
    int start = 1,i=1;
    if (n % 2 == 0)
        start++;
    while (start <= n)
    {
        i *= start;
        start += 2;
    }
    return i;
}

int mainFact2(int s) 
{
    cout <<"Программа вычисляет двойной факториал.\nN!! = 1·3·5·. . .·N, если N — нечетное; \nN!!= 2·4·6·. ..·N, если N — четное(N > 0)\n";
    cout << "Введите N: ";
    int n;
    cin >> n;
    cout << "\nДвойной факториал = "<<Fact2(n);
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
    if (a == 1) mainForPowerA3(1);
    if (a == 2) mainForSingX(1);
    if (a == 3) mainForRingS(1);
    if (a == 4) mainForQuarter(1);
    if (a == 5) mainFact2(1);


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
