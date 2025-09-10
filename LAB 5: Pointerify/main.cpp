//
//  main.cpp
// COMSC-210 | LAB 5: Pointerify | Guo An Wang
// IDE used: Xcode
//  Created by Guo An Wang on 9/10/25.
//

#include <iostream>
using namespace std;

//function swap switches the values of two different integers
//argument: two integer address
//return: sum of integers
int swap(int &, int &);

int main() {
    int x = 5, y = 10;
    cout << "x = " << x << "  | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(x, y);
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int &a, int &b) {
    int *pa = &a;
    int *pb = &b;
    int temp = *pa;
    a = *pb;
    b = temp;
    return a + b;
}
