//
// Created by karee on 9/19/2022.
//
#include <iostream>

using namespace std;
int main(){
    int a[4];
    for (int & i : a) cin >> i ;

    string str ;
    cin >> str ;

    int calories = 0 ;
    for(char & ch : str)
        calories += a[ch - 49];

    cout << calories;
}