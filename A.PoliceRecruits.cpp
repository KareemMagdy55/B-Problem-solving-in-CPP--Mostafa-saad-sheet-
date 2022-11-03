//
// Created by karee on 9/19/2022.
//
#include<iostream>
using namespace std;

int main(){
    int n, offS = 0, crimes = 0 ;
    cin >> n ;

    int a[n];
    for (int & i : a) cin >> i ;

    for (int & i : a) {
        if ( i > 0) offS += i ;
        else if (i < 0 && offS == 0) crimes ++ ;
        else if (i < 0 && offS > 0 ) offS --;
    }

    cout << crimes;

}