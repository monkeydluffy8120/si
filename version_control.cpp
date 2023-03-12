#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n+1];
        for (int i = 1; i <=n; i++)
        {
            arr[i]=1;
        }
        while (m--)
        {
            int p;
            cin>>p;
            arr[p]=0;
        }
        while (k--)
        {
            int p;
            cin>>p;
            if(arr[p]==0)
                arr[p]=9;
            if(arr[p]==1)
                arr[p]=0;
        }
        int count1=0,count2=0;
        for (int i = 1; i <=n; i++)
        {
            if(arr[i]==9)
                count1++;
            else if(arr[i]==1)
                count2++;
        }
        
        cout<<count1<<" "<<count2<<endl;
    }
    
    return 0;
}