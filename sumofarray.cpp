#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
