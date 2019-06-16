#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fact[ 25 ];

void Precal()
{
        fact[ 0 ] = 1;
        for(int i = 1; i <= 20; i++ )
                fact[ i ] = fact[ i - 1 ] * i;
}

void solve()
{
        int t;
        scanf("%d" , &t );

        int cases = 1;
        Precal();

        while( t-- )
        {
                ll n;
                scanf("%lld" , &n );

                vector < int > v;

                for(int i = 20; i >= 0; i-- )
                {
                        if( fact[ i ] <= n )
                        {
                                n -= fact[ i ];
                                v.push_back( i );
                        }
                }

                printf("Case %d: " , cases++ );
                if( n != 0 )
                {
                        printf("impossible\n");
                }
                else
                {
                        int sz = v.size();
                        printf("%d!" , v[ sz - 1 ] );

                       

                        for(int i = sz - 2; i >= 0; i-- )
                        {
                                printf("+%d!" , v[ i ] );
                        }

                        printf("\n");
                }
                
        }

}

int main()
{
        #ifndef ONLINE_JUDGE
                freopen("input.txt" , "r" , stdin );
        #endif

        solve();

        return 0;
}
