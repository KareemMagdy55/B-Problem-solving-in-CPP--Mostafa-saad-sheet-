//
// Created by karee on 9/17/2022.
//
#include<iostream>
using namespace std ;
void tolower(string& str){
    for (char& ch: str)
        ch = tolower(ch);
}
int main(){
    string str1, str2 ;
    cin >> str1 >> str2 ;
    tolower(str1);
    tolower(str2);

    if ( str1 > str2) cout << 1 ;
    else if ( str1 < str2) cout << -1 ;
    else cout << 0 ;

}