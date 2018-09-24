#include<iostream>
using namespace std;
int main()
{
    int T;
    int x1,x2,y1,y2;
    cin>>T;
    int i,j,k,n;
    for(i=1;i<=T;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        int a[n][2];
        for(j=0;j<n;j++)
        {
            for(k=0;k<2;k++)
            {
                cin>>a[j][k];
            }
        }
       
        cout<<"Case "<<i<<":"<<endl;
       
        for(j=0;j<n;j++)
        {
            if(a[j][0]>x1 && a[j][1]>y1 && a[j][0]<x2 && a[j][1]<y2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
 
