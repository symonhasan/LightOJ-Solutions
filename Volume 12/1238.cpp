#include<bits/stdc++.h>
using namespace std;

int row , column;

char Arr[ 25 ][ 25 ];

struct node{
        int x;
        int y;
};

int visited[ 25 ][ 25 ];

node A , B , C , H;

int dx[] = { 0 , 0 , 1 , -1 };
int dy[] = { -1 , 1 , 0 , 0 };

int BFS()
{
        queue < node > Q;

        Q.push( H );

        visited[ H.x ][ H.y ] = 0;

        while( !Q.empty() )
        {
                node Temp = Q.front();
                Q.pop();

                int ix = Temp.x;
                int iy = Temp.y;

                for(int i = 0; i < 4; i++ )
                {
                        if( ix + dx[ i ] >=0 && ix + dx[ i ] < row && iy + dy[ i ] >= 0 && iy + dy[ i ] < column )
                        {
                                Temp.x = ix + dx[ i ];
                                Temp.y = iy + dy[ i ];
                        }

                        if( visited[ Temp.x ][ Temp.y ] == -1 && ( Arr[ Temp.x ][ Temp.y ] != '#' && Arr[ Temp.x ][ Temp.y ] != 'm' ) )
                        {
                                visited[ Temp.x ][ Temp.y ] = visited[ ix ][ iy ] + 1;
                                Q.push( Temp );
                        }
                }
        }

        return max( visited[ A.x ][ A.y ] , max( visited[ B.x ][ B.y ] , visited[ C.x ][ C.y ] ) );
}

void solve()
{
        int t;
        scanf("%d" , &t );

        int cases = 1;

        while( t-- )
        {
                scanf("%d %d" , &row , &column );

                for(int i = 0; i < row; i++ )
                {
                        scanf("%s" , Arr[ i ] );

                        for(int j = 0; j < column; j++ )
                        {
                                if( Arr[ i ][ j ] == 'a' )
                                {
                                        A = { i , j };
                                }
                                else if( Arr[ i ][ j ] == 'b' )
                                {
                                        B = { i , j }; 
                                }
                                else if( Arr[ i ][ j ] == 'c' )
                                {
                                        C = { i , j }; 
                                }
                                else if( Arr[ i ][ j ] == 'h' )
                                {
                                        H = { i , j }; 
                                }
                        }
                }

                memset( visited , -1 , sizeof( visited ) );

                int ans = BFS();

                // for(int i = 0; i < row ; i++ )
                // {
                //         for(int j = 0; j < column; j++ )
                //         {
                //                 cout << visited[ i ][ j ] << " ";

                //         }

                //         cout << endl;
                // }

                printf("Case %d: %d\n" , cases++ , ans);
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
