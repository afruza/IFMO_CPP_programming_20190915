//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>
#include <string>
using namespace std;
int t05_palindrom() {
string s, k;
	getline(cin, s);
	for (auto c : s){
		k = c + k;
	}
	if (s == k) {
		cout << "yes";
	}
	else{
		cout << "no";
	}
	return 0;
}
