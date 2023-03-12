#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long int maxi=0,l;
    for (int i = 0; i < n-1; i++)
    {
            maxi=max(maxi,abs(a[i]-a[i+1]));
            if(maxi>abs(a[i]-a[i+1]))
                l=i;
    }
    if(maxi==1||maxi==0)
    {
        cout<<"0";
        exit(0);
    }
    cout<<b[l]+b[l+1];
    return 0;
}