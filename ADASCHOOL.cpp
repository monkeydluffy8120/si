#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        string c;
        cin>>n>>m;
        (n%2==0 || m%2==0)?c="YES":c="NO";
        cout<<c<<endl;
    }
    
}