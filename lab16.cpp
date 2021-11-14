#include <iostream>
#include <string> 
#include <conio.h>
#include <cctype> 
using namespace std;

int numm1(int s) {
    cout << "Программа генерирует массив с последовательностью вида: 1,3,5,...\n";
    cout << "Введите N (длинну массива): ";
    int n,i,count=1;
    cin >> n;
    int* mas = new int[n];
    cout << endl;
    for (i = 0; i < n; i = i+1)
    {   
        
        mas[i] = count;
        count += 2;
    }

    for (i = 0; i < n; i = i + 1)
    {
        cout << "[" << i + 1 << "] = " << mas[i] << ";\n";
    }
    return 0;
}

int numm2(int s) {

    cout << "Программа сформирует и выведет массив размера N, содержащий N \nпервых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .\n";
    cout << "Введите целое число N (> 1), а также первый \nчлен A и знаменатель D геометрической прогрессии.\n";
    int a, n,d,i=0;
    cout << "N = ";
    cin >> n;
    cout << "A = ";
    cin >> a;
    cout << "D = ";
    cin >> d;
    cout << endl;
    int* mas = new int[n];
    while (i < n)
    {
        mas[i] = a * pow(d, i);
        i++;
    }
    cout << "Массив: \n";
    for (i = 0; i < n; i = i + 1)
    {
        cout << "[" << i + 1 << "] = " << mas[i] << ";\n";
    }
    return 0;
}

int numm3(int s) {
    
    cout << "Программа сформирует и выведет целочисленный массив \nразмера N, первый элемент которого равен A, второй равен B, \nа каждый последующий элемент равен сумме всех предыдущих\n";
    cout << "Введите целые числа N (> 2), A и B: \n";
    int64_t a, n, b, i = 0, summa=0,tmp=0;
    cout << "N = ";
    cin >> n;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    int* mas = new int[n];
    while (i < n)
    {
        if (i == 0)
            mas[i] = a;
        if (i == 1)
            mas[i] = b;
        if (i > 1)
            mas[i] = summa;
        summa += mas[i];
        i += 1;
    }
    cout << "Массив: \n";
    for (i = 0; i < n; i = i + 1)
    {
        cout << "[" << i + 1 << "] = " << mas[i] << ";\n";
    }
    return 0;
}

int numm4(int s) {
    int n;
    cout << "Дан массив A размера N. Программа выведет его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,...\n";
    cout << "Введите N: ";
    cin >> n;
    int i = 0,j = 0, l = 0;
    int* mas = new int[n];

    while (i < n)
    {
        cout << "[" << i + 1 << "] = ";
        cin >> mas[i];
        i++;
    }
    i = 0; 
    while (i < n)
    {
        if (i % 2 == 0) 
        {
            cout << mas[j];
            j++;
        }
        else
        {
            cout << mas[n - l - 1];
            l++;
        }
        i++;
    }
    cout << endl;
    return 0;
}

int numm5(int s) {
    int n;
    cout << "Дан массив A размера N. Программа выведет его элементы \nс нечетными номерами в порядке возрастания номеров, а затем — \nэлементы с четными номерами в порядке убывания номеров.\n";
    cout << "Введите N: ";
    cin >> n;
    int i = 0, j = 0, l = 0;
    int* mas = new int[n];

    while (i < n)
    {
        cout << "[" << i + 1 << "] = ";
        cin >> mas[i];
        i++;
    }
    i = 0;
    cout << endl;
    while (i < n)
    {
        if (i % 2 == 1)
        {
            cout << mas[j]<<endl;
            j+=2;
        }
        i++;
    }
    i = 0;
    if (n % 2 != 0) {
        cout << mas[n - 1] << endl;
        n--;
    }
    while (i < n)
    {
        if (i % 2 == 0)
        {
            cout << mas[n - l - 1]<<endl;
            l+=2;
        }
        i++;
    }
    cout << endl;
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