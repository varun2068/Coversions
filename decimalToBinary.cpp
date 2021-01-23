#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int num){
    int i = 0, bin = 0;
   while(num > 0){
      int rem = num % 2;
      bin = bin * 10 + rem;
      num /= 2;
   }
   return bin;
}

int main(){

    int n;
    cin >> n;

   int num = decimalToBinary(n);
   cout << num;
}