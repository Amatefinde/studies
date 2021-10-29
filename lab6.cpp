#include <iostream>
#include <string> 
using namespace std; 

int numm1(int s)
{
    setlocale(LC_CTYPE, "rus");
    int a, b, tmp;
    cout << "Программа меняет значения ""а"" и ""b"" местами \n";
    cout << "a = ";
    cin >> a;
    system("cls");
    cout << "Программа меняет значения ""а"" и ""b"" местами \n";
    cout << "a = "<< a<<"; b = ";
    cin >> b;
    tmp = b;
    b = a;
    a = tmp;
    cout << endl << "a = " << a << "; b = " << b<<endl;
    return 0;
}



int numm2(int s) 
{   
    setlocale(LC_CTYPE, "rus"); //Ввод данных
    int a, b, c,tmp;
    cout << "Программа перемещает содержимое A в B, B — в C, C — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = "; 
    cin >> a;
    system("cls");
    cout << "Программа перемещает содержимое A в B, B — в C, C — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = " << a << "; b = ";
    cin >> b;
    system("cls");
    cout << "Программа перемещает содержимое A в B, B — в C, C — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = " << a << "; b = "<<b<<"; c = ";
    cin >> c;

    tmp = b; // Перестановка
    b = a;
    a = c;
    c = tmp;

    cout << "a = " << a << "; b = " << b << "; c = " << c << ';'<<endl;
    return 0;
}




int numm3(int s) 
{
    int a, b, c, tmp;
    cout << "Программа перемещает содержимое A в C, C — в B, B — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = "; //Ввод данных
    cin >> a;
    system("cls");
    cout << "Программа перемещает содержимое A в C, C — в B, B — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = " << a << "; b = ";
    cin >> b;
    system("cls");
    cout << "Программа перемещает содержимое A в C, C — в B, B — в A, и выводит новые значения переменных A, B, C.\n";
    cout << "a = " << a << "; b = " << b << "; c = ";
    cin >> c;

    tmp = c; // Перестановка
    c = a;
    a = b;
    b = tmp;

    cout << "a = " << a << "; b = " << b << "; c = " << c << ';' << endl;
    return 0;
}

int numm4(int s) 
{ 
    int x;
    cout << "Программа вычисляет значение Y по формуле: Y = 3x^6 - 6x^2 - 7 . Введите х: ";
    cin >> x;
    cout << "Y = " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7 <<endl;
    return 0; 
}



int numm5(int s)
{
    int x;
    cout << "Программа вычисляет значение Y по формуле: Y = 4(x-3)6 - 7(x-3)3 + 2  . Введите х: ";
    cin >> x;
    cout << "Y = " << 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2 << endl;
    return 0;
}



int numm6(int s)
{
    int a,tmp;
    cout << "Программа вычисляет значение числа А в степени 8, используя вспомогательную переменную и три операции умножения. \nВведите A: ";
    cin >> a;
    tmp = a * a;
    tmp = tmp * tmp;
    a = tmp * tmp;
    cout << "A^8 = " <<a<< endl;
    return 0;
}


int numm7(int s)
{
    int a, tmp, tmp2;
    cout << "Программа вычисляет значение числа А в степени 15, используя две вспомогательные переменные и пять операций умножения. \nВведите A: ";
    cin >> a;
    tmp = a * a; //2
    tmp2 = tmp * a; //3
    tmp = tmp * tmp2; //5
    tmp2 = tmp * tmp; //10
    tmp = tmp * tmp2; //15
    cout << "A^15 = " << tmp << endl;
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
    cout << "\n№" << a << " ";
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
