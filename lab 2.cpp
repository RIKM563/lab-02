// lab 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <math.h>;
using namespace std;
int main()
{ //Task 1
    int x, y, z;
    cout << "Vvedite x,y\n";
    cin >> x >> y;
    if (x * y % 2 != 0) { cout << "condition is true \n"; }
    else { cout << "condition is false \n"; }
    cout << "Vvedite x,y \n";
    cin >> x >> y;
    if (x > 20 & y < 20 || x < 20 & y>20) { cout << "condition is true\n"; }
    else { cout << "condition is false\n"; }
    cout << "Vvedite x,y\n";
    cin >> x >> y;
    if (x * y == 0) { cout << "condition is true\n"; }
    else { cout << "condition is false\n"; }
    cout << "Vvedite x,y,z\n";
    cin >> x >> y >> z;
    if (x < 0 & y < 0 & z < 0) { cout << "condition is true\n"; }
    else { cout << "condition is false\n"; }
    cout << "Vvedite x,y,z\n";
    cin >> x >> y >> z;
    if (x % 5 != 0 & y % 5 != 0 & z % 5 == 0 || x % 5 == 0 & y % 5 != 0 & z % 5 != 0 || x % 5 != 0 & y % 5 == 0 & z % 5 != 0) { cout << "condition is true\n"; }
    else { cout << "condition is false\n"; }
    cout << "Vvedite x,y,z\n";
    cin >> x >> y >> z;
    if (x > 100 || y > 100 || z > 100) { cout << "condition is true\n"; }
    else { cout << "condition is false\n"; }
    //Task 2
    int a, b, c, d;
    a <= 8;
    b <= 8;
    c <= 8;
    d <= 8;
    pair<char, char> positionA(a, b);
    pair<char, char> positionB(c, d);
    cout << "Koordinaty a,b,c,d \n";
    cin >> a >> b >> c >> d;
    if (a == c || b == d) { cout << "positionB under threat\n"; }
    else { cout << "Vse OK\n"; }
    cout << "Koordinaty a,b,c,d\n";
    cin >> a >> b >> c >> d;
    if (abs(a - c) == abs(b - d)) { cout << "positionB under threat\n"; }
    else { cout << "Vse OK\n"; }
    cout << "Koordinaty a,b,c,d\n";
    cin >> a >> b >> c >> d;
    if (abs(a - c) == 1 || abs(b - d) == 1) { cout << "positionB under threat\n"; }
    else { cout << "Vse OK\n"; }
    cout << "Koordinaty a,b,c,d\n";
    cin >> a >> b >> c >> d;
    if (a == c || b == d || abs(a - c) == abs(b - d)) { cout << "positionB under threat\n"; }
    else { cout << "Vse OK\n"; }
    cout << "Koordinaty a,b,c,d\n";
    cin >> a >> b >> c >> d;
    if (a + 1 == c || a + 1 == c & b + 1 == d || a + 1 == c & b - 1 == d) { cout << "popal v positionB\n"; }
    else { cout << "Uvi,no net\n"; }
    //Task 3
    int g, f, n1;
    for (g = 1; g <= 10; g++) {
        f = 7 * g;
        cout << g << "*7=" << f << endl;
    }
    cout << "Vvedite n1\n";
    cin >> n1;
    for (g = 1; g <= 10; g++) {
        f = n1 * g;
        cout << g << "*" << n1 << "=" << f << endl;
    }
    //Task 4
    for (int o = 8; o < 16; o++) {
        int p = 1;
        p = p * o;
        cout << p << endl;
    }
    int a1;
    int c1 = 1;
    int b1;
    cout << "Vvedite a1\n";
    cin >> a1;
    {for (b1 = a1; b1 < 20; b1++)
        c1 = c1 * b1;
    cout << c1 << endl;
    }
    int b2;
    int c2 = 1;
    int a2;
    cout << "Vvedite b2\n";
    cin >> b2;
    {for (int a2 = b2; a2 < 20; a2++)
        c2 = c2 * b2;
    cout << c2 << endl;
    }
    int a3, b3;
    int c3 = 1;
    cout << "Vvedite a3,b3\n";
    cin >> a3 >> b3;
    if (b3 >= a3)
    {
        for (z = a3; z <= b3; ++z)
            c3 = c3 * z;
        cout << c3 << endl;
    }



    system("pause");

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
