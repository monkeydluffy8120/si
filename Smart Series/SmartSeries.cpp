#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if((n&1) == 0)
            n -= 1;
            
        if(n == 1){cout<<2<<endl;}
        else{
            long long int m = (n - 1)/2 - 1;
        long long int lcd = 6 + m*4;
            long long int np = (lcd-6)/4 + 1;
            long long int sum = (np*(6 + lcd))/2;
        cout<<2+ sum <<endl;
        }
        
    }
    return 0;
}
