#include<bits/stdc++.h>
using namespace std;

int convertBintoDeci(int num){
    int rem = 0, dec = 0;
    int base = 1;
    while(num != 0){
        rem = num % 10;
        dec += rem * base;
        base *= 2;
        num /= 10;
    }
    return dec;
}

int main(){

    int n;
    cin >> n;

   int num = convertBintoDeci(n);
   cout << num;
}