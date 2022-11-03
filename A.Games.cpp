//
// Created by karee on 9/20/2022.
//
#include<iostream>
using namespace std ;

int main (){
    int n, sum = 0;
    cin >> n ;

    int a[101] = {0};
    int b[101] = {0};

    for (int i = 0; i < n; ++i) {
        int x, y ;
        cin >> x >> y ;
        a[x] ++ ;
        b[y] ++ ;
    }
    for (int i = 0; i < 101; ++i) {
        sum += a[i] * b[i];
    }
    cout << sum ;

}