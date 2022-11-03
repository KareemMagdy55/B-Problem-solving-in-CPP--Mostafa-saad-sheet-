//
// Created by karee on 9/19/2022.
//

// n cards
// distinct nums on cards
// take left or right
// player with max sum wins

#include<iostream>
using namespace std;
int main(){
    int n, ptsA = 0, ptsB = 0, maxCard = 0;
    cin >> n ;
    int cards[n];
    for(int& i: cards)cin >> i ;

    int* ptr1 = &cards[0];
    int* ptr2 = &cards[n - 1];

    int i = 0 ;
    while ( ptr1 <= ptr2){
        if (*ptr1 > *ptr2){
            maxCard = *ptr1;
            ptr1 ++ ;
        }
        else {
            maxCard = *ptr2;
            ptr2 -- ;
        }
        if (i % 2 == 0) ptsA += maxCard;
        else ptsB += maxCard;
        i ++ ;
    }

cout << ptsA << ' ' << ptsB ;
}
// sum1 = 10 ,2
// sum2 = 4 , 1