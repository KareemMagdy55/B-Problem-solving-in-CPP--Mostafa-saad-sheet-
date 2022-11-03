
// Created by karee on 9/17/2022.
//

// limak bear wants to be the largest bear
// at least than his brother
// every year >> limak is tripled and brother bob doubled
#include <iostream>

using namespace std;
int main(){
     int a, b, counter = 0 ;
     cin >> a >> b ;

    while (a <= b){
        a *= 3 ;
        b *= 2 ;
        counter ++ ;
    }

    cout << counter;
}
