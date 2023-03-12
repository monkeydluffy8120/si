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
        ll count=0;
        for(ll i=5;i<=n;i=i*5)
        {
            count=count+(n/i);
        }
        cout<<count<<endl;
   }
    return 0;
    
}
