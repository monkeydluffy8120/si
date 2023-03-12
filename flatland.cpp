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
        while (n!=0)
        {
            int root=sqrt(n);
            n-=pow(root,2);
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
    
}