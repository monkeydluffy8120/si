#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++)
        {   int a,b;
            cin>>a>>b;
            ans=ans^i;
        }
        cout<<ans<<endl;
    }
    return 0;
}