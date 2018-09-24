#include<bits/stdc++.h>
using namespace std;
int calculation(int a,int b)
{
    int c=abs(a-b);
    c=c*4;
    c=c+(3*2)+5;
    c=c+a*4+3+5;
    return c;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    int x,y;
    cin>>x>>y;
    int r=calculation(x,y);
    cout<<"Case "<<i<<": "<<r<<endl;
    }
    return 0;
}
