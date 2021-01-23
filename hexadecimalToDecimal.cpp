#include<bits/stdc++.h>
using namespace std;

int hexaToDecimal(string num){
    int n = 0;
    int x = 1;

    int s = num.size();
    for(int i = s-1; i >= 0; i--){
        
        if(num[i] >= '0' && num[i] <= '9'){
            n += x*(num[i] - '0');
        }
        else if(num[i] >= 'A' && num[i] <= 'F'){
            n += x*(num[i] - 'A' + 10);
        }
        x *= 16;
    }
    return n;
}

int main(){

    string n;
    cin >> n;

   cout << hexaToDecimal(n);
    
}