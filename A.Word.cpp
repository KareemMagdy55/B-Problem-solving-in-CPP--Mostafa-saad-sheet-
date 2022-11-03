//
// Created by karee on 9/18/2022.
//
#include <iostream>

using namespace std;
string tolower(string str){
    for (char &ch: str)
        ch = tolower(ch);
    return str ;
}

string toupper(string str){
    for (char &ch: str)
        ch = toupper(ch);
    return str ;
}
int main(){
    int counter = 0 ;
    string str ;
    cin >> str ;
    string str2 = tolower(str);

    for (int i = 0; i < str.length(); ++i)
        if (str[i] != str2[i] ) counter ++ ;
//    cout << counter << endl;
    if (counter * 2 > str.size())
        cout << toupper(str);
    else
        cout << tolower(str);





}