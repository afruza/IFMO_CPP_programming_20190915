//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
// то выведите такую же заглавную букву. 
// В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t02_up.h"
#include <iostream>
#include <string>
using namespace std;
int t02_up() {
    char bukva;
	cin >> bukva;
	if (bukva >= 'a' && bukva <= 'z') {
		bukva = 'A' + bukva - 'a';
	}
	cout << bukva;
}