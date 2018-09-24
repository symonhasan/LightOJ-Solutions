#include<bits/stdc++.h>
using namespace std;
int _I(){int x;scanf("%d",&x);return x;}
int Arr[ 100005 ];
int lb , ub, n, q;
void bs(int l,int u)
{
    int low = 1 , high = n;
    while( low <= high )
    {
        int mid = ( low + high )/2;
        //cout << Arr[mid] << endl;
        if( Arr[mid] >= l )
        {
            lb = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    low = 1 , high = n;
    while( low <= high )
    {
        int mid = ( low + high )/2;
        if( Arr[mid] <= u )
        {
            ub = mid;
            low = mid + 1;
        }
        else
           high = mid - 1;
    }

}
int main()
{
    //freopen("out.txt","w",stdout);
    int t = _I();
    int cases = 1;
    while( t-- )
    {
        n = _I();
        q = _I();
        for(int i=1; i<=n; i++)
        {
            Arr[i] = _I();
        }
        printf("Case %d:\n",cases++);
        for(int i=0; i<q; i++)
        {
            int l = _I(), u = _I();
            lb = -1;
            ub = -1;
            bs( l, u );
            if(ub==-1 || lb==-1){
                puts("0");
                continue;
            }
            printf("%d\n", (ub-lb)+1 );
        }
    }
    return 0;
}
