//
// Created by karee on 9/26/2022.
//
#include<iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t ;

    int instS[20] = {0};

    for(char& ch : t) instS[ch - 40] ++ ;

    int counter = 0 ;
    for(char& ch : s) {
        if (!instS[ch - 40]) break ;
        instS[ch - 40] -- ;
        counter ++ ;
    }
    cout << counter  + 1 ;
}