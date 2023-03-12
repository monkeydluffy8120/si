#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int a,b;
        cin>>a>>b;
        int na=sqrt(a);
        int nb=sqrt(b);
        if (nb*(nb+1) > b)
            nb -= 1;
        if (na > nb)
            cout<<"Limak"<<endl;
        else
            cout<<"Bob"<<endl;
    }
    return 0;
}