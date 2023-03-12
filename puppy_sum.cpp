#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,n,sum1,s;
        cin>>d>>n;
        while(d--){
            sum1=sum(n);
            n=sum1;
        }

    cout<<sum1<<endl;
    }
    return 0;
}