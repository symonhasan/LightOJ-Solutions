#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long long int w;
        cin>>w;
        if(w%2!=0)
        {
            cout<<"Case "<<i<<": "<<"Impossible"<<endl;
        }
        else{
 
            for(int j=2;j<=w/2;j+=2)
            {
 
                if((w/j)%2==1 && w%j==0)
                {
                   cout<<"Case "<<i<<": "<<w/j<<" "<<j<<endl;
                   break;
                }
            }
 
        }
    }
    return 0;
}
