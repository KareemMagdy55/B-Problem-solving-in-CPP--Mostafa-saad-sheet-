//
// Created by karee on 9/17/2022.
//
// n cols toy cubes in box
// i-th cube >> Ai cubes
// swithch >> right


#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for (int& i : a) cin >> i;

    sort(a, a + n);
    for (int& i : a) cout << i << ' ';
}
