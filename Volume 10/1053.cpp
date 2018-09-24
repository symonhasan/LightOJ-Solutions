#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,a,b,c,i;
    int r1,r2;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            r1=a*a;
            r2=b*b+c*c;
        }
        else if(b>a && b>c)
        {
            r1=b*b;
            r2=a*a+c*c;
        }
        else if(c>a && c>b)
        {
            r1=c*c;
            r2=a*a+b*b;
        }
        if(r1==r2)
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }
    return 0;
}
 
