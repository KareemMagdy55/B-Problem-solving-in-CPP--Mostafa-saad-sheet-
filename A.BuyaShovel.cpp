// Created by karee on 9/26/2022.



#include<iostream>

using namespace std;
int main(){

    int k , r;
    cin >> k >> r ;

    int n = 1 ;
    while (1){
        int temp = n * k ;
        if (temp % 10 == r || temp % 10 == 0 ){
            cout << temp / k ;
            return 0 ;
        }
        n ++ ;
    }
}