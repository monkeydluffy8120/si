#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float q,p;
        cin>>q>>p;
        if(q>1000){
            p-=(0.1*p);
        }
        float tot=q*p;
        cout<<fixed<<setprecision(6)<<tot<<endl;
    }
    return 0;
}