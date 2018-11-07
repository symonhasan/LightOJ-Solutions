#include<bits/stdc++.h>
using namespace std;

int n;
pair < int , pair<int , int > > Arr[ 4000 ];
int parent[ 55 ];

void Initialize()
{
        for(int i = 0; i<55; i++ )
        {
                parent[ i ] = i;
        }
}

int find_parent( int a )
{
        while( parent[ a ] != a )
        {

                parent[ a ] = parent[ parent[a] ];
                a = parent[ a ];
        }

        return a;
}

void Union( int a , int b )
{
        int u = find_parent( a );
        int v = find_parent( b );

        if( u!=v )
        {
                parent[ u ] = parent[ v ];
        }
}

int kruskal( int edges )
{
        int len = 0;
        for(int i = 0; i<edges; i++ )
        {
                int x = Arr[ i ].second.first;
                int y = Arr[ i ].second.second;
                int l = Arr[ i ].first;

                if( find_parent( x ) != find_parent( y ) && x!=y )
                {
                        len += l;
                        Union( x , y );
                }
        }
        return len;
}

int main()
{
        int t ;
        scanf("%d" , &t );

        int cases = 0;
        while( cases++ < t )
        {
                scanf("%d" , &n );

                int edges = 0;
                int totalWire = 0;

                for(int i = 0; i<n; i++ )
                {
                        for(int j = 0; j<n; j++ )
                        {
                                int len;
                                scanf("%d" , &len );
                                if( len!=0 )
                                {
                                        Arr[ edges++ ] = { len ,{ i+1 ,j+1 } };
                                        totalWire += len;
                                }
                        }
                }

                Initialize();

//                for(int i = 0; i<edges; i++ )
//                {
//                        cout << Arr[ i ].second.first << " -> " << Arr[ i ].second.second << " - " << Arr[ i ].first << "\n";
//                }
//                cout << "\n\n";

                sort( Arr , Arr + edges );

//                cout <<"Total Wire = "<< totalWire << "\n";

                int reqWire = kruskal( edges );

//                cout << "REQ Wire = " << reqWire << "\n";

                int flag = 0;

                for(int i = 1; i<=n ; i++ )
                {
//                        cout << "For " << i << "    parent  " << parent[ i ] << "\n";
                        if( parent[ i ] == i )
                        {
                                flag++;
                        }
                }

                printf("Case %d: " , cases );

                if( flag>=2 )
                        puts("-1");
                else
                        printf("%d\n" , totalWire - reqWire );

        }
        return 0;
}
