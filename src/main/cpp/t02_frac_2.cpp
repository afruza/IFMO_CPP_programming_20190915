//Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
//Формат входных данных
//        Вводится положительное действительное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1.79
//Sample Output:
//
//7

#include "t02_frac_2.h"
#include <iostream>
#include <cmath>


using namespace std;

int t02_frac_2() { 
    double X;
    cin >> X;
    cout << int(X * 10)%10; 
  return 0;

};