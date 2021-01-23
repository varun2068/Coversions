#include<bits/stdc++.h>
using namespace std;

string decimalTohexa(int num){
    int i = 1;
    string s = "";
    while(i <= num)
        i *= 16;
    i /= 16;

    while(i > 0){
        int rem = num / i;
        num -= rem*i;
        i /= 16;

        if(rem <= 9)
            s = s+to_string(rem);
        else{
            char ch = 'A' + rem - 10;
            s.push_back(ch);
        }
    }
    return s;
}

int main(){

    int n;
    cin >> n;

   cout << decimalTohexa(n);
}