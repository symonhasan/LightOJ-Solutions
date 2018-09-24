#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<utility>
using namespace std;

typedef long long ll;

#define filein() {freopen("input.txt","r",stdin);}
#define fileout() {freopen("output.txt","w",stdout);}

int _I() {int x;scanf("%d",&x);return x;}
ll _LL() {ll x;scanf("%lld",&x);return x;}
float _F() {float x;scanf("%f",&x);return x;}
double _LF() {double x;scanf("%lf",&x);return x;}

#define PB(x,y) x.push_back(y)
#define Clear(x) x.clear()
#define Resize(x) x.resize()
#define Fill(x,y) fill(x.begin(),x.end(),y)
#define Sort(x) sort(x.begin(),x.end())

map <int,int> m;

void Set()
{
    for(int i=0;i<256;i++)
    {
        int temp=i;
        //char num[10];
        /*int index=7;
        num[0]=48;num[1]=48;num[2]=48;num[3]=48;num[4]=48;
        num[5]=48;num[6]=48;num[7]=48;num[8]='\0';*/
        vector <int> v(8);
        int index=0;
        while(temp!=0)
        {
            v[index++]=temp%2;
            temp/=2;
        }
        int num=(((((((((((((v[7]*10)+v[6])*10)+v[5])*10)+v[4])*10)+v[3])*10)+v[2])*10)+v[1])*10)+v[0];
        m[i]=num;
        //cout<<i<< " - "<<num<<endl;
    }
}

void C_Enigma()
{
    Set();
    int t=_I();
    int cases=1;
    while(cases<=t)
    {
        int a,b,c,d;
        ll b1,b2,b3,b4;
        a=_I();
        getchar();
        b=_I();
        getchar();
        c=_I();
        getchar();
        d=_I();

        b1=_LL();
        getchar();
        b2=_LL();
        getchar();
        b3=_LL();
        getchar();
        b4=_LL();
        //cout<<a<<" "<<b<< " "<<c<<" "<<d<<endl;
        //cout<<m[a]<<" - "<<m[b]<<" - "<<m[c]<<" - "<<m[d]<<endl;
        if(m[a]==b1 && m[b]==b2 && m[c]==b3 && m[d]==b4)
            printf("Case %d: Yes\n",cases++);
        else
            printf("Case %d: No\n",cases++);
    }
}

int main()
{
    //filein();fileout();
    C_Enigma();

    return 0;
}
