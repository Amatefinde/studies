#include <iostream>
#include <string> 
#include <conio.h>
#include <cctype> 
using namespace std;



int numm1(int s)
{

    cout << "Введите два числа, первое от 1 до 31, второе от 1 до 12. \nПрограмма выведет дату в виде текста (например, «пятое января»).\n\n";

    int a, b,tmp;
    cin >> a >> b;
    cout << endl;
    switch (a)
    {
    case 1:
        cout << "Первое ";
        break;
    case 2:
        cout << "Второе ";
        break;
    case 3:
        cout << "Третье ";
        break;
    case 4:
        cout << "Четвертое ";
        break;
    case 5:
        cout << "Пятое ";
        break;
    case 6:
        cout << "Шестое ";
        break;
    case 7:
        cout << "Седьмое ";
        break;
    case 8:
        cout << "Вомсьмое ";
        break;
    case 9:
        cout << "Девятое ";
        break;
    case 10:
        cout << "Десятое ";
        break;
    case 11:
        cout << "Одинадцатое ";
        break;
    case 12:
        cout << "Двенадцатое ";
        break;
    case 13:
        cout << "Тринадцатое ";
        break;
    case 14:
        cout << "Четырнадцатое ";
        break;
    case 15:
        cout << "Пятнадцатое ";
        break;
    case 16:
        cout << "Шестнадцатое";
        break;
    case 17:
        cout << "Семнадцатое ";
        break;
    case 18:
        cout << "Восемнадцатое ";
        break;
    case 19:
        cout << "Девятнадцатое ";
        break;
    case 20:
        cout << "Двадцатое ";
        break;
    }
    if ((a % 10 != 0) && (a / 10 == 2)) {
        tmp = a % 10;
        cout << "Двадцать ";
        switch (tmp)
        {
        case 1:
            cout << "первое ";
            break;
        case 2:
            cout << "второе ";
            break;
        case 3:
            cout << "третье ";
            break;
        case 4:
            cout << "четвертое ";
            break;
        case 5:
            cout << "пятое ";
            break;
        case 6:
            cout << "шестое ";
            break;
        case 7:
            cout << "седьмое ";
            break;
        case 8:
            cout << "вомсьмое ";
            break;
        case 9:
            cout << "девятое ";
            break;
        }
    }
    if (a == 30)
        cout << "Тридцатое";
    if (a == 31)
        cout << "Тридцать первое";

    switch (b)
    {
    case 1:
        cout << "января ";
        break;
    case 2:
        cout << "февраля ";
        break;
    case 3:
        cout << "марта ";
        break;
    case 4:
        cout << "апреля ";
        break;
    case 5:
        cout << "мая ";
        break;
    case 6:
        cout << "июня ";
        break;
    case 7:
        cout << "июля ";
        break;
    case 8:
        cout << "августа ";
        break;
    case 9:
        cout << "сентября ";
        break;
    case 10:
        cout << "октября ";
        break;
    case 11:
        cout << "ноября ";
        break;
    case 12:
        cout << "декабря ";
        break;
    }
    cout << endl;
    return 0;
}


int numm2(int s)
{
    system("chcp 1251");
    cout << "Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток и \nпринимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. \n";
    cout << "Введите символ C — исходное направление робота и целое число N — посланная ему команда. \nПрограмма выведет направление робота после выполнения полученной команды" << endl;
    int a;
    string alphabet = "СЗЮВсзюв";
    string sam;
    cin >> sam;
    cin >> a;
    if (a == 0)
    {
        cout << a;
        return 0;
    }
    if (a == 1)
    {
        if (sam[0] == alphabet[0] || (sam[0] == alphabet[4]))
            cout << "З";
        if (sam[0] == alphabet[1] || (sam[0] == alphabet[5]))
            cout << "Ю";
        if (sam[0] == alphabet[2] || (sam[0] == alphabet[6]))
            cout << "В";
        if (sam[0] == alphabet[3] || (sam[0] == alphabet[7]))
            cout << "С";
        return 0;
    }
    if (sam[0] == alphabet[0] || (sam[0] == alphabet[4]))
        cout << "В";
    if (sam[0] == alphabet[1] || (sam[0] == alphabet[5]))
        cout << "С";
    if (sam[0] == alphabet[2] || (sam[0] == alphabet[6]))
        cout << "З";
    if (sam[0] == alphabet[3] || (sam[0] == alphabet[7]))
        cout << "Ю";
    cout << endl;
    return 0;
}

int numm3(int s)
{
    cout << "Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. \nПрограмма выведет строку-описание указанного количества заданий, обеспечив правильное согласование \nчисла со словами «учебное задание», например: 18 — «восемнадцать учебных заданий»\n";
    int a;
    cin >> a;
    cout << endl;
    switch (a)
    {
    case 1:
        cout << "Одно учебное задание";
        break;
    case 2:
        cout << "Два учебных задания";
        break;
    case 3:
        cout << "Три учебных задания";
        break;
    case 4:
        cout << "Четыре учебных задания ";
        break;
    case 5:
        cout << "Пять учебных заданий";
        break;
    case 6:
        cout << "Шесть учебных заданий ";
        break;
    case 7:
        cout << "Семь учебных заданий ";
        break;
    case 8:
        cout << "Восемь учебных заданий ";
        break;
    case 9:
        cout << "Девять учебных заданий ";
        break;
    case 10:
        cout << "Десять учебных заданий ";
        break;
    case 11:
        cout << "Одинадцать учебных заданий ";
        break;
    case 12:
        cout << "Двенадцать учебных заданий ";
        break;
    case 13:
        cout << "Тринадцать учебных заданий ";
        break;
    case 14:
        cout << "Четырнадцать учебных заданий ";
        break;
    case 15:
        cout << "Пятнадцать учебных заданий";
        break;
    case 16:
        cout << "Шестнадцать учебных заданий";
        break;
    case 17:
        cout << "Семнадцать учебных заданий ";
        break;
    case 18:
        cout << "Восемнадцать учебных заданий ";
        break;
    case 19:
        cout << "Девятнадцать учебных заданий ";
        break;
    case 20:
        cout << "Двадцать учебных заданий ";
        break;

    }
    if (a > 20) {
        if (a / 10 == 2)
            cout << "Двадцать ";
        if (a / 10 == 3)
            cout << "Тридцать ";
        switch (a % 10)
        {
        case 1:
            cout << "одно учебное задание";
            break;
        case 2:
            cout << "два учебных задания";
            break;
        case 3:
            cout << "три учебных задания";
            break;
        case 4:
            cout << "четыре учебных задания ";
            break;
        case 5:
            cout << "пять учебных заданий";
            break;
        case 6:
            cout << "шесть учебных заданий ";
            break;
        case 7:
            cout << "семь учебных заданий ";
            break;
        case 8:
            cout << "восемь учебных заданий ";
            break;
        case 9:
            cout << "девять учебных заданий ";
            break;

        }
        if (a == 40)
            cout << "Сорок учебных заданий";
    }
    return 0;
}

int numm4(int s)
{
    cout << "Введите целое число в диапазоне 100–999. Программа выведет строку-описание данного числа, \nнапример: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать»\n";
    int a;
    cin >> a;
    cout << endl;
    if (a < 100 || a > 999)
    {
        cout << "Введено недопустимое число";
        return 0;
    }
    switch((a/10)/10)
    {
    case 1:
        cout << "Сто";
        break;
    case 2:
        cout << "Двести ";
        break;
    case 3:
        cout << "Тристо ";
        break;
    case 4:
        cout << "Четыресто ";
        break;
    case 5:
        cout << "Пятьсот ";
        break;
    case 6:
        cout << "Шестьсот ";
        break;
    case 7:
        cout << "Семьсот ";
        break;
    case 8:
        cout << "Восемьсот ";
        break;
    case 9:
        cout << "Девятьсот ";
        break;
    }

    switch (a % 100)
    {
    case 1:
        cout << "один";
        return 0;
    case 2:
        cout << "два";
        return 0;
    case 3:
        cout << "три";
        return 0;
    case 4:
        cout << "четыре";
        return 0;
    case 5:
        cout << "пять";
        return 0;
    case 6:
        cout << "шесть";
        return 0;
    case 7:
        cout << "семь";
        return 0;
    case 8:
        cout << "восемь";
        return 0;
    case 9:
        cout << "девять";
        return 0;
    case 10:
        cout << "десять";
        return 0;
    case 11:
        cout << "одинадцать";
        return 0;
    case 12:
        cout << "двенадцать";
        return 0;
    case 13:
        cout << "тринадцать";
        return 0;
    case 14:
        cout << "четырнадцать";
        return 0;
    case 15:
        cout << "пятнадцать";
        return 0;
    case 16:
        cout << "шестнадцать";
        return 0;
    case 17:
        cout << "семнадцать";
        return 0;
    case 18:
        cout << "восемнадцать";
        return 0;
    case 19:
        cout << "девятнадцать";
        return 0;
    case 20:
        cout << "двадцать";
        return 0;
    }

    switch ((a%100)/10)
    {
    case 2:
        cout << "двадцать ";
        break;
    case 3:
        cout << "тридцать ";
        break;
    case 4:
        cout << "сорок ";
        break;
    case 5:
        cout << "пятьдесят ";
        break;
    case 6:
        cout << "шестьдесят ";
        break;
    case 7:
        cout << "семьдесят ";
        break;
    case 8:
        cout << "восемьдесят ";
        break;
    case 9:
        cout << "девяносто ";
        break;

    }
    switch (a%10)
    {
    case 1:
        cout << "одно";
        break;
    case 2:
        cout << "два";
        break;
    case 3:
        cout << "три";
        break;
    case 4:
        cout << "четыре";
        break;
    case 5:
        cout << "пять";
        break;
    case 6:
        cout << "шесть";
        break;
    case 7:
        cout << "семь";
        break;
    case 8:
        cout << "восемь";
        break;
    case 9:
        cout << "девять";
        break;
    }
    cout << endl;
    return 0;
}


int numm5(int s)
{
    cout << "В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых \nназваниями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле \nгоды носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, \nобезьяны, курицы, собаки и свиньи. Программа по номеру года определит его название, если \n1984 год — начало цикла: ''год зеленой крысы''\n";
    cout << "Введите год: ";
    int a;
    cin >>a;
    cout << endl;
    if (a < 1984)
    {
        cout << "Введённый год меньше года начала цикла";
        return 0;
    }
    a -= 1984;
    a %= 60;
    cout << "Год ";
    switch (a / 12)
    {
    case 0:
        cout << "зелённ";
        break;
    case 1:
        cout << "красн";
        break;
    case 2:
        cout << "жёлт";
        break;
    case 3:
        cout << "бел";
        break;
    case 4:
        cout << "чёрн";
        break;
    }
    switch (a % 12)
    {
    case 0:
        cout << "ой крысы ";
        break;
    case 1:
        cout << "ой коровы ";
        break;
    case 2:
        cout << "ого тигра ";
        break;
    case 3:
        cout << "ого зайца ";
        break;
    case 4:
        cout << "ого дракона ";
        break;
    case 5:
        cout << "ой змеи ";
        break;
    case 6:
        cout << "ой лошади ";
        break;
    case 7:
        cout << "ой овцы ";
        break;
    case 8:
        cout << "ой обезьяны ";
        break;
    case 9:
        cout << "ой курицы ";
        break;
    case 10:
        cout << "ой собаки ";
        break;
    case 11:
        cout << "ой свиньи ";
        break;
    }
    cout << endl;
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