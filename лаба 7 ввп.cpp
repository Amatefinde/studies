#include <iostream>
#include <string> 
using namespace std;



int numm1(int s)
{
    
    setlocale(LC_CTYPE, "rus");
    cout << "Введите значение угла в градусах, программа определит значение того же угла в радианах. \n";
    double a, pi;
    pi = 180;
    cin >> a;
    cout << a / 180 << " Pi радианов \n";
    return 0;
}

int numm2(int s)
{
    setlocale(LC_CTYPE, "rus");
    cout << "Введите значение угла в радианах, программа определит значение того же угла в градусах. \n";
    double a, pi;
    cin >> a;
    pi = 180;
    cout << a * 180 << " градусов \n";
    return 0;
}

int numm3(int s)
{
    setlocale(LC_CTYPE, "rus");
    double x, a, y, kg;
    cout << "Известно, что X кг конфет стоит A рублей. Программа определит, сколько стоит 1 кг и Y кг этих же конфет.\nВведите X, A, Y: ";
    cin >> x >> a >> y;
    kg = a / x;
    cout << "Киллограмм конфет стоит: " << kg << " рублей, Y кг = " << y * kg << " рублей.\n";
    return 0;
}

int numm4(int s)
{
    setlocale(LC_CTYPE, "rus");
    double v1, v2, S, t;
    cout << "Два автомобиля удаляются друг от друга. Введите скорость первого и второго автомобиля, а так же растоянние между ними. \nПрограмма вычисляет расстояние между, ними через T часов.\n\n";
    cout << "Скорость первого автомобиля: ";
    cin >> v1;
    cout << "Скорость второго автомобиля: ";
    cin >> v2;
    cout << "Расстояние между автомобилями в начальный момент: ";
    cin >> S;
    cout << "Кол-во прошедших часов: ";
    cin >> t;
    cout << "\n" << "Расстояние между ними через " << t << " час(а)(ов): " << S + (v1 + v2) * t << endl;
    return 0;
}

int numm5(int s)
{
    setlocale(LC_CTYPE, "rus");
    double a, b;
    cout << "Программа решает линейное уравнение вида A * x + B = 0 \nВведите коэффициенты А и В (коэффициент А не равен 0)\n";
    cin >> a >> b;
    cout << "x = "<< - b / a << endl;
    return 0;
}

int numm6(int s)
{
    setlocale(LC_CTYPE, "rus");
    double a1,b1,c1,a2,b2,c2,delta, delta_1, delta_2;
    cout << "Найти решение системы линейный уравнений вида\nA1*x + B1*y = C1\nA2*x + B2*y = C2\n\n";
    cout << "Введите A1,B1,C1\n";
    cin >> a1 >> b1>> c1;
    cout << "Введите A2,B2,C2\n";
    cin >> a2 >> b2 >> c2;
    delta = a1 * b2 - a2 * b1;
    if (delta == 0)
    {
        cout << "Нет решений, delta = 0";
        return 0;
    }
    delta_1 = c1 * b2 - b1 * c2;
    delta_2 = a1 * c2 - a2 * c1;
    cout << "\nx = " << delta_1 / delta<<endl;
    cout << "y = " << delta_2 / delta<<endl;
    return 0;
}


int main() {
    setlocale(LC_CTYPE, "rus");
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
    cout << "Что бы завершить работу программы введите " << "'Exit'" << endl<<endl;

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