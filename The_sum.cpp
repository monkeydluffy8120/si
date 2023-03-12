#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=1;
    cin>>n;
    int a=0,b=1;
    for(int i=2;i<=n;i++){
        int c=a+b;
        sum+=c;
        a=b;
        b=c;
    }
    cout<<sum;
    return 0;
}