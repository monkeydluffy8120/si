#include<bits/stdc++.h>
using namespace std;

int findAns(int counts[]){
    int ans = counts[4];

    int c13 = min(counts[1], counts[3]);
    ans += c13;
    counts[1] -= c13;
    counts[3] -= c13;
    
    if((counts[2] & 1) == 0)
        ans += counts[2]/2;
    else{
        ans += (counts[2]+1)/2;
        if(counts[1])
            counts[1] -= min(counts[1],2);
    }
    ans += counts[3];
    if(counts[1]){
        if(counts[1]%4 != 0)
            ans += counts[1]/4 + 1;
        else
            ans += counts[1]/4;
    }
        
    
    return ans;
    
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], counts[5]={0,0,0,0,0};
        for(int i = 0;i < n;i++){
            cin>>a[i];
            counts[a[i]]++;
        }
        
        cout<<findAns(counts)<<endl;
    }
    return 0;
}
