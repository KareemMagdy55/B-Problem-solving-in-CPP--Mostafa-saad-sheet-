//
// Created by karee on 9/21/2022.
//
#include<iostream>
using namespace std ;

int sol(int a, int b, int q){
    if (q == 1)
        return a;
    else if (q == 2)
        return b;
    else if (q >= 3)
        return (sol(a, b, q - 1) ^ sol(a, b, q - 2));

}


int main (){
    int a, b, q ;
    cin >> a >> b >> q ;
    cout << sol(a, b, q);
}