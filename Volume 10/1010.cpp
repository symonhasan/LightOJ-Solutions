#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    int i=1;
    int x,y,ans;
    while(i<=test)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int area=n*m;
      
        if(n>m)
        {
            x=n;
            y=m;
        }
        else
        {
            x=m;
            y=n;
        }
      
        if(x<=2 && y<=2)
        {
            ans=area;
        }
        else if(y<=1)
        {
            ans=area;
        }
        else if(y==2)
        {
            if(x%2==0 && x%4==0)
                ans=area/2;
            else if(x%2==0 && x%4!=0)
                ans=area/2+2;
            else if(x%2==1)
                ans=ceil(x/(double)2)*2;
        }
        else if(area%2==1)
        {
 
            ans=ceil(x/(double)2)*ceil(y/(double)2)+floor(x/(double)2)*floor(y/double(2));
 
        }
        else{
            ans=area/2;
        }
        //cout<<"Case "<<i<<": "<<ans<<endl;
        printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}
