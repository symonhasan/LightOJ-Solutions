#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T;
    int i,j,n,sum=0;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>n;
        if(n>=1 && n<=1000)
        {
          int a[n];
          for(j=0;j<n;j++)
          {
              cin>>a[j];
          }
          for(j=0;j<n;j++)
          {
              if(a[j]>=0)
              {
                  sum=sum+a[j];
              }
          }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
    }
    return 0;
}
