#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int numm1(int s) {
    setlocale(LC_CTYPE, "rus");
    double x1, x2, y1, y2;
    cout << "Программа вычисляет растояние между двумя точками." << endl << "Введите координаты точек. Пример ввода: " << endl << "x1 y1 \nx2 y2\n\n" ;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Растояние между точками: " << pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5) << endl;
    return 0;

}

int numm2(int s) {
    setlocale(LC_CTYPE, "rus");
    cout << "Введите три точки A, B, C на числовой оси. Программа находит длины отрезков AC и BC и их сумму.\n";
    double a, b, c;
    cin >> a >> b >> c;
    cout << "AC = " << abs(a - c) << "\nBC = " << abs(b - c) << "\nAC + BC = " << abs(a - c) + abs(b - c)<<'\n';
    return 0;
}

int numm3(int s) {
    setlocale(LC_CTYPE, "rus");
    cout << "Введите три точки A, B, C на числовой оси. \nТочка С должна быть расположена между точками A и B. \nПрограмма ищет произведение длин отрезков AC и BC\n\n";
    double a, b, c;
    cin >> a >> b >> c;
    cout << "\nAC * BC = " << abs(a - c) * abs(b - c) << '\n';
    return 0;
}

int numm4(int s) {
    setlocale(LC_CTYPE, "rus");
    cout << "Программа находит площадь и периметр прямоугольника. \nВведите координаты двух противоположных вершин данного прямоугольника. \nПример: \nx1 y1\nx2 y2\n\n";
    double x1, y1, x2, y2, square, perimeter;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "\nПлощадь прямоугольника: " << abs(x1 - x2) * abs(y1 - y2) << "\nПериметр прямоугольника: " << (abs(x1 - x2) + abs(y1 - y2)) * 2 << '\n';
    return 0;
}

int numm5(int s) {
    setlocale(LC_CTYPE, "rus");
    cout << "Программа находит периметр и площадь треугольника. \nВведите координаты трёх вершин данного треугольника.\nПример: \nx1 y1\nx2 y2\nx3 y3\n\n";
    double x1, y1, x2, y2,x3,y3, square, perimeter,a,b,c,half_p;
    label3:
    cin >> x1 >> y1 >> x2 >> y2>>x3>>y3;
    a = pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5);
    b = pow(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2), 0.5);
    c = pow(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2), 0.5);
    if (a + b <= c || b + c <= a || c + a <= b) {
        cout << "\nДанный треугольник не может существовать! \nЧтобы треугольник существовал, сумма любых двух сторон должна быть больше третьей."<<
            "\nПопробуйте ещё раз, введите координаты трёх вершин данного треугольника.\nПример: \nx1 y1\nx2 y2\nx3 y3\n\n";
        goto label3;
    }
    perimeter = a + b + c;
    half_p = perimeter / 2;
    cout << "\nПлощадь прямоугольника: " << pow(half_p * (half_p - a) * (half_p - b) * (half_p - c),0.5) << "\nПериметр прямоугольника: " <<perimeter << '\n';
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

