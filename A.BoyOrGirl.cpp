//
// Created by karee on 9/18/2022.
//
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int counter = 0 ;
    string str ;
    cin >> str ;
    sort(str.begin(), str.end());

    for (int i = 0 ; i < str.length() ; i ++)
        if (str[i] != str[i + 1])
            counter ++ ;

    cout << (counter % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

}

