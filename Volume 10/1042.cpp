#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
        int t;
        scanf("%d" , &t );

        int cases = 1;

        while( t-- )
        {
                int n;

                scanf("%d" , &n );

                int temp = n;

                vector < int > v;

                while( temp != 0 )
                {
                        v.push_back( temp % 2 );
                        temp /= 2;
                }

                v.push_back( 0 );

                int sz = v.size();


                next_permutation( v.rbegin() , v.rend() );

                ll ans = 0;

                for( int i = 0; i < sz; i++ )
                {
                        if( v[ i ] == 1 )
                        {
                                ans += pow( 2, i );
                        }
                }

                
                printf("Case %d: %lld\n" , cases++ , ans );


                

                
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
