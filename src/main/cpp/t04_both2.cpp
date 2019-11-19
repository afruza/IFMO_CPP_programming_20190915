//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <string>
using namespace std;
int t04_both2() {
 set <int> s1;
 set <int> s2;
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s1.insert(x);
  }
    
  cin >> m;
  for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      s2.insert(x);
  }
    
  for (auto x : s1) {
      if (s2.find(x) != s2.end())
          cout << x << " ";
  }
    
  return 0;
}
