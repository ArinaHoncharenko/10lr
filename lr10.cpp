#include <iostream>
using namespace std;
 //Гончаренко Аріна 1-3, Варіант 7
int main()
{
        // Задача 1.1
    setlocale(0, ".1251");
    cout << "       Задача 1.1\n  Гончаренко Арiна 1-3, Варiант 7" << endl;
    int d, m, y;
    cout << "Введiть день Вашого народження: ";
    cin >> d;
    cout << "Введiть мiсяць Вашого народження: ";
    cin >> m;
    cout << "Введiть рiк Вашого народження: ";
    cin >> y;

    int D, M, Y;
    cout << "Введiть поточний день: ";
    cin >> D;
    cout << "Введiть поточний мiсяць: ";
    cin >> M;
    cout << "Введiть поточний рiк: ";
    cin >> Y;

    int vik, misac;
    if (m = M & D < d) { vik = Y - y - 1; misac = vik * 12 + 11; }
    else if (m = M & D >= d) { vik = Y - y; misac = vik * 12; }
    else if (m > M) { vik = Y - y - 1; misac = vik * 12 + (12 - m + M); }
    else { vik = Y - y; misac = vik * 12 + (M - m); }

    cout <<"Ваш вiк: "<<vik<< endl;
    cout << "Ваш вiк у мiсяцях: " <<misac << " \n" << endl;
    system("pause>>void");

    // Задача 1.2
    int tg, th, n, k, vik2;
    cout << "       Задача 1.2" << endl;
    cout << "Введiть середню тривалiсть Вашого сну\nГодин: ";
    cin >> tg;
    cout << "Хвилин:  ";
    cin >> th;
    cout << "Введiть Ваш вiк: ";
    cin >> vik2;
    k = th * vik2 / 60;
    n = (tg * 60 + th) * 30 / (24 * 12);
    cout << "За все життя Ви проспали: " << tg*vik2+k << " годин "<< n<< " хвилин.\n"<< endl;
    system("pause>>void");

    // Задача 2
    
    cout << "       Задача 2\n      Варiант 7" << endl;
    const int i = 7;
    cout << "A(0;0), B(i;i-1), C(-i;i+1)" << endl;
        struct Point
        {
            int x;
            int y;
        };
        Point a;
        a.x = 0, a.y = 0;
        Point b;
        b.x = i, b.y = i - 1;
        Point c;
        c.x = -i, c.y = i + 1;
        Point me;
        me.x = (a.x + b.x) / 2, me.y = (a.y + b.y) / 2;
   cout << "A(" << a.x << ";" << a.y << ") B("<< b.x << ";" << b.y <<") C(" << c.x << ";" << c.y <<")" << endl;
   double ab, bc, ca, p, h, cme;
      ab = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y), 2));
      bc = sqrt(pow((c.x - b.x), 2) + pow((c.y - b.y), 2));
      ca = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2));
      cme = sqrt(pow((me.x - c.x), 2) + pow((me.y - c.y), 2));
   p = (ab + bc + ca)/2;
   h = 2 * sqrt(p * (p - ab) * (p - bc) * (p - ca)) / ca;
   cout << "Висота, проведена до сторони AC: h= " << h << "\nМедiана, проведена до сторони AB: m= "<<cme << endl;
   system("pause>>void");

   // Задача 3  
   cout << "       Задача 3" << endl;
   double aDeg, rez, pp, rez2;
   cout << "Ведiть значення a (у градусах): "; 
   cin >> aDeg;
   aDeg = aDeg * 3.14 / 180;
   pp = 3.14;
   rez = pow(cos((3* pp)/8-aDeg/4), 2)- pow(cos((11*pp)/8 + aDeg/4), 2);
   rez2 = sqrt(2) / 2 * sin(aDeg/2);
   cout <<"Результат 1: "<< rez<< endl;
   cout << "Результат 2: " << rez2<< endl;
   system("pause>>void");

   // Задача 4  
   cout << "       Задача 4" << endl;
   const double x4=-1, e=2.71828;
   double b4, c4, a4, y4;
   cout << "Введiть значення b: ";
   cin >> b4;
   a4 = sqrt(fabs(x4))+pow(e, sqrt(b4));
   c4 = pow(a4, 2) + pow(b4, 2);
   y4 = pow(c4, 3) / cos(c4);
   cout << "Значення a: " << a4 << "\nЗначення b: " << b4 << "\nЗначення c: " << c4 << "\nЗначення y: " << y4 << endl;
   system("pause>>void");

   // Задача 5  
   cout << "       Задача 5" << endl;
   double x5, y5, rez5;
   cout << "Введiть значення x: ";
   cin >> x5;
   cout << "Введiть значення y: ";
   cin >> y5;
   rez5 = pow(e, y5) * ((8 * pow(x5, 2) + 3) / (1 - (9 * pow(y5, 2)))) * ((x5 + 0.5) / ((9 * y5) + 3));
   cout << "Результат: " << rez5 << endl;
   
    system("pause>>void");
    return 0;
}
