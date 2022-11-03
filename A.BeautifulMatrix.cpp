//
// Created by karee on 9/17/2022.
//
// 5*5 MATRIX  >> 24 zeros and 1 one
// swap cols and rows
// then check [2][2]

#include <iostream>

using namespace std;
int main() {
    int a[5][5];

    for (int i = 0 ; i < 5 ; i ++)
        for (int j = 0 ; j < 5 ; j ++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                cout << abs(i - 2) + abs(j - 2);
                return 0 ;
            }
        }



}
