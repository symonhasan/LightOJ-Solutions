/*
* author: Symon Hasan
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
	int x , y;
	node(){}
};

int r , c ;
char G[ 25 ][ 25 ] ;
bool visited[ 25 ][ 25 ];

int dx[ 4 ] = { 0 , 0 , 1 , -1 };
int dy[ 4 ] = { 1 , -1 , 0 , 0 };

void Reset()
{
	for(int i = 0; i<25; i++ )
	{
		for(int j = 0; j<25; j++ )
		{
			visited[ i ][ j ] = 0;
			G[ i ][ j ] = '\0';
		}
	}
}

int BFS( node s )
{
	//cout << r << "  " << c << endl;
	queue < node > Q;
	Q.push( s );

	visited[ s.x ][ s.y ] = 1;

	int counter = 1;

	while( !Q.empty() )
	{
		node u = Q.front();
		Q.pop();

		int ix = u.x , iy = u.y;

		for( int i = 0; i<4; i++ )
		{
			if( ix+dx[ i ] >= 0 && ix+dx[ i ] < r && iy+dy[i] >=0 && iy + dy[ i ] < c )
			{
				u.x = ix + dx[ i ];
				u.y = iy + dy[ i ];
				
			}

			if( visited[ u.x ][ u.y ] == 0 && G[ u.x ][ u.y ] == '.' )
			{
				//cout << "YES" << endl;
				visited[ u.x ][ u.y ] = 1;
				counter ++;
				Q.push( u );
			}
		}

	}

	return counter;
}

int main()
{
	//freopen("input.txt" , "r" , stdin );
	int t ;
	scanf("%d" , &t );
	int cases = 1;
	while( cases<=t )
	{
		Reset();
		scanf("%d %d" , &c, &r );
		getchar();

		node s;

		for(int i = 0; i<r; i++ )
		{

			scanf("%s" , G[ i ] );

			//cout << G[ i ] << endl;

			for(int j = 0; j<c; j++ )
			{
				if( G[ i ][ j ] == '@' )
				{
					s.x = i; s.y = j;
				}
			}

		}


		int ans = BFS( s );

		printf("Case %d: %d\n" , cases++ , ans );


	}
	return 0;
}
