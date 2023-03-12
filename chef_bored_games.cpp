#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=n;i>0;i-=2)
            count+=i*i;
        cout<<count<<endl;
    }
    return 0;
    
}