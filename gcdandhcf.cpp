#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
   if(a==0) return b;
    else return gcd(b%a,a);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll p=gcd(a,b);
        cout<<(a*b)/p<<" "<<p<<endl;
    }
    return 0;
}
