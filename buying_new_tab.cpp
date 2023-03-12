#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, w, h, p;
        int area = 0;
        cin>>n>>b;
        for (int j=0;j<n;j++)
        {
            cin>>w>>h>>p;
            if ((p<=b) && ((w*h)>area))
            {
                area = w*h;
            }
        }
        if (area == 0)
            cout << "no tablet" << endl;
        else
            cout << area << endl;
    }
    return 0;
}