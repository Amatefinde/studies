#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int numm1(int s)
{
    double a, b;
    setlocale(LC_CTYPE, "rus");
    cout << "Программа вычисляет площадь и периметр прямоугольника. ";
    cout << "Введите длины сторон a и b: ";
    cin >> a >> b;
    cout << endl;
    cout << "Площадь = " << a * b << endl;
    cout << "Периметр = " << 2 * (a + b);
    return 0;
}

int numm2(int s) {
    setlocale(LC_CTYPE, "rus");
    double d;
    cout << "Программа находит длинну оркужности. Введите длину диаметра: ";
    cin >> d;
    cout << endl;
    cout << "Длинна окружности = " << 3.14 * d;
    return 0;
}
int numm3(int s) {
    double a, b;
    setlocale(LC_CTYPE, "rus");
    cout << "Программа находит середенее арифметическое двух чисел. Введите два числа: ";
    cin >> a >> b;
    cout << endl;
    cout << "Среднее арифметическое: " << (a + b) / 2;
    return 0;
}
int numm4(int s) {
    double a, b;
    setlocale(LC_CTYPE, "rus");
    cout << "Программа вычисляет сумму, разность, произведение и частное квадратов двух чисел. Введите два числа (a и b): ";
    cin >> a >> b;
    cout << endl;
    cout << "a*a+b*b = " << a * a + b * b << endl;
    cout << "a*a-b*b = " << a * a - b * b << endl;
    cout << "(a^2)*(b^2) = " << a * a * b * b << endl;
    cout << "(a^2)/(b^2) = " << (a * a) / (b * b) << endl;
    return 0;
}
int numm5(int s) {
    setlocale(LC_CTYPE, "rus");
    double a, b;
    cout << "Введите два числа a и b. Программа вычислит сумму, разность, произведение и частное их модулей. " << endl;
    cin >> a >> b;
    cout << endl;
    cout << "|a|+|b| = " << abs(a) + abs(b) << endl;
    cout << "|a|-|b| = " << abs(a) - abs(b) << endl;
    cout << "|a|*|b| = " << abs(a) * abs(b) << endl;
    cout << "|a|/|b| = " << abs(a) / abs(b) << endl;
    return 0;
}

int main() {
    setlocale(LC_CTYPE, "rus");
label2:
    cout << "Введите номер задания (цифра от 1 до 5): " << endl;
    int a;
    cin >> a;
label1:
    if (a < 1 || a > 5) {
        cout << "Задания с таким номером не существует.\nПопробуйте ещё раз. \n\n";
        goto label2;
    }
    cout << "\n№" << a << " ";
    if (a == 1) numm1(1);
    if (a == 2) numm2(1);
    if (a == 3) numm3(1);
    if (a == 4) numm4(1);
    if (a == 5) numm5(1);

    cout << endl << "Для того что-бы перейти к другой задачи введите её номер. " << endl;
    if (a < 5) cout << "Для того что бы перейти к следующей задаче введите " << "'Next'\n";
    if (a > 1) cout << "Для того что бы вернуться к предыдущей задаче введите " << "'Back'\n";
    cout << "Что бы завершить работу программы введите " << "'Exit'" << endl;

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
