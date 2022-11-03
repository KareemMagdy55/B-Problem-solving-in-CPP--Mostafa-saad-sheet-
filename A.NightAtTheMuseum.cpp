//
// Created by karee on 9/20/2022.
//
#include <iostream>
using namespace std ;

int main (){
    string str ;
    cin >> str ;

    str = 'a' + str ;
    int rotations = 0;
    for (int i = 0 ; i < str.length() -1  ; i ++ ) {
        int x = max(str[i], str[i + 1]) - min(str[i], str[i + 1]);
        //cout << x << ' ';
        rotations += min (x, 26 - x);
    }

    cout << rotations;


}
