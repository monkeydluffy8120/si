#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int k=n;
        int arr[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            b[i]=arr[i];
        }
        
        while (n>=3)
        {
            sort(arr,arr+n);
            int mid=n/2;
            for (int i = mid; i < n; i++)
            {
                arr[i]=arr[i+1];
            }
            n--;
        }
        int x=arr[0],y=arr[1];
        for (int i = 0; i < k; i++)
        {
            if(b[i]==x||b[i]==y)
                cout<<b[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}