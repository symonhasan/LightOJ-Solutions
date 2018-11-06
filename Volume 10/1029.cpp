/*
* author: symon hasan
*/
#include<bits/stdc++.h>
using namespace std;

int n , m;
pair < int, pair <int , int> > Arr[ 12005 ];
int parent[ 105 ];

void Initialize()
{
	for(int i = 0; i<105; i++ )
		parent [ i ] = i;
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

void Union( int a, int b)
{
	int x = find_parent( a );
	int y = find_parent( b );

	if( x!=y )
	{
		parent[ x ] = parent[ y ];
	}
}

int min_kruskal( int edges )
{
	int cost = 0;
	for(int i = 0; i<edges; i++ )
	{
		int x = Arr[ i ].second.first;
		int y = Arr[ i ].second.second;
		int c = Arr[ i ].first;

		if( find_parent( x ) != find_parent( y ) )
		{
			cost+= c;
			Union( x, y );
		}
	}

	return cost;
}

int max_kruskal( int edges )
{
	Initialize();
	int cost = 0;
	//cout << edges << " e " <<endl;
	for(int i = edges-1; i>=0; i-- )
	{
		int x = Arr[ i ].second.first;
		int y = Arr[ i ].second.second;
		int c = Arr[ i ].first;

		if( find_parent( x ) != find_parent( y ) )
		{
			//cout << x <<"  " << y  << "  - " << c << endl;
			cost+= c;
			Union( x, y );
		}
	}

	return cost;
}



int main()
{
	//freopen("input.txt" , "r" , stdin );
	int t ; 
	scanf("%d" , &t );
	int cases = 1;
	while( cases<=t )
	{
		m = 0;
		scanf("%d" , &n );

		while( 1 )
		{
			int a , b , c;
			scanf("%d %d %d" , &a ,&b , &c );
			if( a==0 && b==0 && c==0 )
				break;

			Arr[ m++ ] = { c, { a ,b } };

		}

		Initialize();

		sort( Arr , Arr + m );

		int min_ans = min_kruskal( m );
		int max_ans = max_kruskal( m );

		int total = min_ans + max_ans ;

		//cout << min_ans << "   " << max_ans << "  " << total << endl;

		printf("Case %d: " , cases++ );

		if( ( total/2 )*2 == total )
			printf("%d\n" , total/2 );
		else
			printf("%d/2\n" , total );
		m = 0;
	}
	return 0;
}
