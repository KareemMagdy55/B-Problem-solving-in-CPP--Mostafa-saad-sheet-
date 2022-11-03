//
// Created by karee on 9/17/2022.
//
// fence  >> h meter
// all not exceed h
// if exceed h >> bent down
// bent width == 2 and normal = 1
// they are all in a single row

#include <iostream>

using namespace std;
int main(){
    int n, h, counter = 0;
    cin >> n >> h ;

    int a[n];
    for(int&i : a) cin >> i ;

    for(int&i : a)
        if (i > h) counter += 2 ;
        else counter ++ ;

    cout << counter ;
}