//
// Created by karee on 9/19/2022.
//

#include <iostream>
using namespace std ;

int main (){
    int n, counter = 0;
    cin >> n ;

    int a[n];
    for(int&i : a) cin >> i ;

    for (int i = 0; i < n; ++i) {
        if(a[i] != a[i + 1]) counter ++ ;
    }
    cout << counter;
}