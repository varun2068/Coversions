#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int num){
    int i = 1, oct = 0;
   while(num > 0){
      int rem = num % 8;
      oct = oct + rem*i;
      i *= 10;
      num /= 8;
   }
   return oct;
}

int main(){

    int n;
    cin >> n;

   int num = decimalToBinary(n);
   cout << num;
}