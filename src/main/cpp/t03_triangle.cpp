//Даны длины сторон треугольника. Вычислите площадь треугольника.
//Формат входных данных
//        Вводятся три положительных числа.
//Формат выходных данных
//        Выведите ответ на задачу. Точность - 4 знака после запятой.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//6.0000

#include "t03_triangle.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t03_triangle() { 
  double z,y,x,p;
    cin >> z >> y >> x >> p;
    p = ( x + y + z ) / 2;
        cout << sqrt ( p * ( p - x ) * ( p - y ) * ( p - z ) );    
  return 0;

};
