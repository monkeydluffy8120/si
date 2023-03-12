#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void rot(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    int t;cin>>t;
    int x=0;
    while(t--)
    {
        x++;
        int n;cin>>n;
        int a[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Test Case #"<<x<<":"<<endl;
        rot(a,n);
    }
    return 0;
}
