//Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

#include "t07_quad2.h"
#include <iostream>
#include <cmath>

using namespace std;

int t07_quad2() {
 double a, b, c, d;
    cin >> a >> b >> c;
    if ( a != 0 ) {
        d = pow(b,2) - 4 * a * c;
        if ( d > 0 ) {
         double k,z;
            k = ( b * (-1) - sqrt(d) ) / ( 2 * a );
            z = ( b * (-1) + sqrt(d) ) / ( 2 * a );
            if ( k > z ) cout << 2 << " " << z << " " << k;
            else cout << 2 << " " << k << " " << z;
        }
        else if ( d == 0 ) cout << 1 << " " << b * (-1) / ( 2 * a );
        else cout << 0;
    }
    else if ( b != 0 ) cout << 1 << " " << c * (-1) / b;
    else if ( a == 0 && c == 0 && b != 0 ) cout << 1 << " " << 0;
    else if ( a == 0 &&  b == 0 && c != 0 ) cout << 0; 
    else if (a == 0 && b == 0 && c == 0) cout << 3;
    return 0;
};
