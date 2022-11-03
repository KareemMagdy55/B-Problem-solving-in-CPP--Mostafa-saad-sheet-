//
// Created by karee on 9/21/2022.
//
#include<iostream>
using namespace std;
int main(){
    int x, y, r, n ;
    cin >> x >> y >> r >> n ;

    for (int i = 0; i < n; ++i) {
        int xx, yy ;
        cin >> xx >> yy ;
        if (xx > x + r or yy > y + r)
            cout << "NO\n";
        else
            cout << "YES\n";
    }


}