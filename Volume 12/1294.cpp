#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    int t;
    scanf("%d",&t);
    int i=1;
    long long int c=0;
    long long int a=1;
    long long int cou=0;
    int cons=-1;
    while(i<=t)
    {
        scanf("%lld %lld",&n,&m);
        vector <int> v;
        long long int sum=0;
        //for()
        /*
        for(int j=1;j<=n/2;j++)
        {
            sum+=(j*2+(m-i%m))*cons;
            if(j%m==0)
            {
                cons=cons*-1;
            }
        }*/
        /*
       while(cou!=n)
       {
           if(c%2==0)
           {
               //v.push_back(a*-1);
               sum+=a*(-1);
               cou++;
               a++;
           }
           else{
                //v.push_back(a);
                sum+=a;
               cou++;
               a++;
           }
           if(cou%m==0)
           {
               c++;
           }
       }*/
       /*
       for(int k=0;k<v.size();k++)
        cout<<v[k]<<endl;
        */
        sum=(n/2)*m;
        printf("Case %d: %lld\n",i,sum);
        i++;
       //cout<<sum<<endl;
       sum=0;
       c=0;
       a=1;
       cou=0;
       cons=-1;
       //v.clear();
    }
 
    return 0;
}
