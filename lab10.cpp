#include <iostream>
#include <string> 
#include <conio.h>
using namespace std;



int numm1(int s)
{
    
    cout << "Программа проверит истинность высказывания: «Справедливы неравенства A > 2 и B <= 3» \n";
    cout << "Введите A и B: ";
    int a,b;
    cin >> a>>b;
    cout << endl;
    if ((a > 2) && (b <= 3))
    {
        cout << "Высказывания справедливы\n";
        return 0;
    }
    cout << "Высказывания не справедливы\n";
    return 0;
}


int numm2(int s)
{
    cout << "Программам проверит истинность высказывания: «Справедливо двойное неравенство A < B < C \n";
    cout << "Введите A,B,C: "<< endl;
    int a, b,c;
    cin >> a >> b>>c;
    if ((a < b) && (b < c))
    {
        cout << "Высказывания справедливы\n";
        return 0;
    }
    cout << "Высказывания не справедливы\n";
    return 0;
}

int numm3(int s)
{   
    cout << "Программа проверит истинность высказывания: «Данное число является четным двузначным»\n";
    cout << "Введите целое положительное число: ";
    int a;
    cin >> a;
    cout << endl;
    if (((a > 9) && (a <= 99)) && (a % 2 == 0))
    {
        cout << "Высказывание истинно \n";
        return 0;
    }
    cout << "Высказывания не истинно\n";
    return 0;
}

int numm4(int s)
{
    cout << "Программа проверит истинность высказывания: \nЦифры данного числа образуют возрастающую или убывающую последовательность\n";
    cout << "Введите трёхзначное число: ";
    int a,b,c,tmp;
    cin >> tmp;
    cout << endl;
    c = tmp % 10;
    tmp /= 10;

    b = tmp % 10;
    tmp /= 10;
  
    a = tmp;

    if (((a < b) && (b < c)) || (( a > b) && (b > c)))
    {
        cout << "Высказывание истинно \n";
        return 0;
    }
    cout << "Высказывания не истинно\n";
    return 0;
}


int numm5(int s)
{
    cout << "Программа проверит истинность высказывания: \nДанное число читается одинаково слева направо и справа налево\n";
    cout << "Введите четырёхзначное число: ";
    int a, b, c, d, tmp;
    cin >> tmp;
    cout << endl;
    d = tmp % 10;
    tmp /= 10;

    c = tmp % 10;
    tmp /= 10;

    b = tmp % 10;
    tmp /= 10;

    a = tmp;

    if ((a == d) && (b ==c))
    {
        cout << "Высказывание истинно \n";
        return 0;
    }
    cout << "Высказывания не истинно\n";
    return 0;
}

int numm6(int s)
{
    cout << "Программа проверит истинность высказывания: \nТреугольник со сторонами a, b, c является прямоугольным\n";
    cout << "Введите a,b,c: ";
    int a, b, c,tmp;
    cin >>a>>b>>c;
    cout << endl;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if ((a > c) && (a > b))
        {
            if (b * b + c * c == a * a)
            {
                cout << "Треугольник прямоугольный\n";
                return 0;
            }
            cout << "Треугольник не прямоугольный\n";
            return 0;
        }
        if ((b > c) && (b > a))
        {
            if (a * a + c * c == b * b)
            {
                cout << "Треугольник прямоугольный\n";
                return 0;
            }
            cout << "Треугольник не прямоугольный\n";
            return 0;
        }
        if (a * a + b * b == c * c)
        {
            cout << "Треугольник прямоугольный\n";
            return 0;
        }
        cout << "Треугольник не прямоугольный\n";
        return 0;
    }
    cout << "Треугольник не существует(((\n";
    return 0;
}

int numm7(int s)
{
    cout << "Программа проверит истинность высказывания: \nСуществует треугольник со сторонами a, b, c\n";
    cout << "Введите a,b,c: ";
    int a, b, c, tmp;
    cin >> a >> b >> c;
    cout << endl;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << "Высказывание истинно!\n";
        return 0;
    }
    cout << "Высказывание не истинно!\n";
    return 0;
}



int main() {
    setlocale(LC_CTYPE, "rus");
label2:
    cout << "Введите номер задания (цифра от 1 до 7): " << endl;
    int a;
    cin >> a;
label1:
    if (a < 1 || a > 7) {
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
    if (a == 7) numm7(1);

    cout << endl << "Для того что-бы перейти к другой задачи введите её номер. " << endl;
    if (a < 7) cout << "Для того что бы перейти к следующей задаче введите " << "'Next'\n";
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