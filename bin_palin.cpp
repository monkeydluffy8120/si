#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while (n%i==0)
            {
                n/=i;
            }
            if(n==1){
                cout<<i;
                return 0;
            }
            else
            {
                cout<<1;
                return 0;
            }
            
        }
    }
    cout<<n;
    return 0;
}