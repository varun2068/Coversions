#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int num){
    int rem = 0, dec = 0;
    int base = 1;
    while(num != 0){
        rem = num % 10;
        dec += rem * base;
        base *= 8;
        num /= 10;
    }
    return dec;
}

int main(){

    int n;
    cin >> n;

   int num = octalToDecimal(n);
   cout << num;
}