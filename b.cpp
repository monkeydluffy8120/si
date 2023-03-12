#include<bits/stdc++.h>
using namespace std;
int find_l(int n,int a[],int b[]){
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i])
            return i;
    }
    return 0;
}
int find_r(int n,int a[],int b[],int l){
    for(int i=l;i<n;i++)
        if(a[i]==b[i])
            return i-1;
    return 0;
}
int find_k(int n,int a[],int b[],int l,int r){
    int k=a[l]-b[l];
    for(int i=l;i<=r;i++){
        if(a[i]-b[i]!=k)
            return 0;
    }
    return k;
}
void solve(int n,int a[],int b[],int l,int r,int k){
    for(int i=l;i<=r;i++){
        a[i]+=k;
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==b[i])
            count++;
    }
    if(count == n)
        cout<<"YES"<<endl;
    else
    {
            cout<<"NO"<<endl;
    }
    
    
}
int main(){
    int t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int  i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int l=find_l(n,a,b);
        int r=find_r(n,a,b,l);
        int k=find_k(n,a,b,l,r);
        solve(n,a,b,l,r,k);
    }
    return 0;
}