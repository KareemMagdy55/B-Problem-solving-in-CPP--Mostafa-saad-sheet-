//
// Created by karee on 9/17/2022.
//
// every 4 >> row ++
#include <iostream>
using namespace std;
int main(){
    int_fast64_t seat, row , col;
    cin >> seat ;

    row = seat / 4 ;

    if (row % 2 == 0)
        col = seat - (row * 4) ;
    else
        col = seat - (row * 4) - 3;
    cout << abs(row) << ' ' << abs(col);
}