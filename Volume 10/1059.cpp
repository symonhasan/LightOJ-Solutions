#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n , m , Acost;
pair <ll , pair< int ,int > > Arr[ 100005 ];
int parent[ 100005 ];

void Initialize( )
{
        for(int i = 0; i<=n; i++ )
                parent[ i ] = i;
}

int find_parent( int a )
{
        while( parent[ a ]!=a )
        {
                parent[ a ] = parent[ parent[ a ] ];
                a = parent[ a ];
        }

        return a;
}

void Union( int x , int y )
{
        int u = find_parent( x );
        int v = find_parent( y );

        if( u!=v )
        {
                parent[ u ] = parent[ v ];
        }
}

ll kruskal()
{
        ll cost = 0;
        for(int i = 0; i<m; i++ )
        {
                int x = Arr[ i ].second.first;
                int y = Arr[ i ].second.second;
                ll c = Arr[ i ].first;

                if( find_parent( x ) != find_parent( y ) && c<Acost )
                {
                        cost += c;
                        Union( x,y );
                }
        }
        return cost;
}

int main()
{

        int t , cases = 0;

        scanf("%d" , &t );

        while( cases++ < t )
        {
                scanf("%d %d %d" , &n , &m , &Acost );

                for(int i = 0; i<m; i++ )
                {
                        int u , v, c;
                        scanf("%d %d %d" , &u , &v, &c );
                        Arr[ i ] = { (ll)c , { u ,v } };
                }

                Initialize();

                sort( Arr , Arr+m );

                ll cost = kruskal();

                //cout << cost << endl;

                int airport = 0;

                for(int i = 1; i<=n; i++ )
                {
//                        cout << i << "  =  " << parent[ i ] << endl;
                        if( parent[ i ]==i )
                        {
                               airport++;
                        }
                }
                long long ans = (ll)airport*(ll)Acost + cost;
                printf("Case %d: %lld %d\n", cases,  ans, airport );
        }
        return 0;
}
