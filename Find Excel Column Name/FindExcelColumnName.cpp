#include<bits/stdc++.h>
using namespace std;


void solve(long long int n){
    string ans = "";
    
    while(n){
        n--;
        ans = (char)('A'+n%26) + ans;
        n /= 26;
    }
    cout<<ans<<endl;
    return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
