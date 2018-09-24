#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    long long int s;
    long long int R,C;
    while(i<=t)
    {
        cin>>s;
        long long int a=ceil(sqrt(s));
        //cout<<a<<endl;
        long long int mid=(pow(a-1,2)+pow(a,2)+1)/2;
        long long int temp;
        //cout<<mid<<endl;
        R=a;
        C=a;
        if(s>mid)
        {
            temp=s-mid;
            C=C-temp;
        }
        else if(s<mid)
        {
            temp=mid-s;
            R=R-temp;
        }
        if(a%2==0)
            cout<<"Case "<<i<<": "<<R<<" "<<C<<endl;
        else
            cout<<"Case "<<i<<": "<<C<<" "<<R<<endl;
        i++;
    }
    return 0;
}
