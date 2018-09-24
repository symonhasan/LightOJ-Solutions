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
 
 
void C_Enigma()
{
    int t;
    t=_I();
    int cases=1;
    while(cases<=t)
    {
        int n=_I();
        getchar();
        ll sum=0;
        printf("Case %d:\n",cases++);
        while(n--)
        {
            char s[105];
            scanf("%s",&s);
            if(s[0]=='d'){
                int a=_I();
                getchar();
                sum+=a;
            }
            else
            {
                printf("%lld\n",sum);
            }
        }
        sum=0;
    }
}
 
int main()
{
    //filein();fileout();
    C_Enigma();
 
    return 0;
}