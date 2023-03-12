#include<bits/stdc++.h>
using namespace std; 
const int m=500;
int mul(int x, int r[], int r_size);  
void fact(int n) 
{ 
    int r[m]; 
    r[0] = 1; 
    int r_size = 1; 
    for (int x=2; x<=n; x++) 
        r_size = mul(x, r, r_size);  
    for (int i=r_size-1; i>=0; i--) 
        cout << r[i]; 
} 
int mul(int x, int r[], int r_size) 
{ 
    int carry = 0;  
    for (int i=0; i<r_size; i++) 
    { 
        int prod = r[i] * x + carry;    
        r[i] = prod % 10;    
        carry  = prod/10;     
    } 
    while (carry) 
    { 
        r[r_size] = carry%10; 
        carry = carry/10; 
        r_size++; 
    } 
    return r_size; 
} 
int main() 
{ 
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        fact(n);
        printf("\n");
    }
    return 0; 
}