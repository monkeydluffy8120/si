#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        long long int lb = ceil(sqrt(a));
        long long int up = floor(sqrt(b));
        cout<<up-lb+1<<endl;
    }
    return 0;
}
