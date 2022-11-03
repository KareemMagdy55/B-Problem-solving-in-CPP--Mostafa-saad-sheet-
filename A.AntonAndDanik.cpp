//
// Created by karee on 9/17/2022.
//

// n games in row
// no tie

#include <iostream>
#include <algorithm>
using namespace std ;


int main (){
    int n;
    string str ;
    cin >> n >> str;
    int counter = std::count(str.begin(), str.end(),'A');
    if (counter*2 > n )
        cout << "Anton";
    else if (counter*2 < n  )
        cout << "Danik";
    else
        cout << "Friendship";

}