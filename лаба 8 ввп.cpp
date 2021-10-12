#include <iostream>
#include <string> 
#include <conio.h>
using namespace std;



int numm1(int s)
{

    setlocale(LC_CTYPE, "rus");
    cout << "Введите размер файла в байтах, программа найдёт количество полных килобайтов которые занимает данный файл. \n";
    double a;
    cin >> a;
    int a1 = a;
    cout << "Полных килобайт: "<< a1 / 1024  <<"\n";
    return 0;
}


int numm2(int s)
{
    setlocale(LC_CTYPE, "rus");
    cout << "На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).\nПрограмма\
 находит количество отрезков B, размещенных на отрезке A.\nВведите два целых положительных числа А и В (А > B).\n";
    int a, b;
    cin >> a>>b;
    cout << "Количество отрезков B: "<< a/b << "\n";
    return 0;
}

int numm3(int s)
{
    setlocale(LC_CTYPE, "rus");
    cout << "На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).\nПрограмма\
 находит длину незанятой части отрезка A.\nВведите два целых положительных числа А и В (А > B).\n";
    int a, b;
    cin >> a >> b;
    cout << "Количество отрезков B: " << a % b << "\n";
    return 0;
}

int numm4(int s)
{
    setlocale(LC_CTYPE, "rus");
    int a,a1,a2;
    label3:
    cout << "Введите двузначное число, программа выведет число полученное при перестановке цифр иходного числа\n";
    cin >> a;
    if (a > 99)
    {
        cout << "В числе слишком много разрядов, для продолжения нажмите любую кнопку";
        int k = _getch();
        system("cls");
        goto label3;
    }
    if (a < 10)
    {
        cout << "В числе слишком мало разрядов";
        int k1 = _getch();
        system("cls");
        goto label3;
    }
    a1 = a / 10;
    a2 = a % 10;
    cout << a2 <<a1<<endl;
    return 0;
}

int numm5(int s)
{
    setlocale(LC_CTYPE, "rus");
    string a, b;
    cout << " В исходном числе зачеркнули первую слева цифру и приписали ее справа. \nПрограмма выведет полученное число. Введите исходное число: \n\n";
    cin >> a;
    cout << "Результат работы программы: " << a[1]<<a[2]<<a[0]<<endl;
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