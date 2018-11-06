/*
* author: symon hasan
*/
#include<bits/stdc++.h>
using namespace std;

pair < int , pair< int , int > > P[ 55 ];
int n , address;
unordered_map < string,int> Id;
int parent[ 150 ];

void Initialize()
{
	for(int i = 0; i<150; i++ )
		parent[ i ] = i;
}

int find_parent( int a )
{
	while( parent[ a ] != a )
	{
		parent[ a ] = parent[ parent[ a ] ];
		a = parent[ a ];
	}
	return a;
}

void Union( int a , int b )
{
	int u = find_parent( a );
	int v = find_parent( b );

	if( u != v )
	{
		parent[ u ] = parent[ v ];
	}
}

int kruskal( int edges )
{
	int mincost = 0;
	for(int i = 0; i<edges; i++ )
	{
		int x = P[ i ].second.first;
		int y = P[ i ].second.second;
		int c = P[ i ].first;

		if( find_parent( x ) != find_parent( y ) )
		{
			mincost += c;
			Union( x, y );
		} 
	}
	return mincost;
}


int main()
{
	//freopen("input.txt" , "r", stdin );
	//freopen("output.txt" , "w" , stdout );
	int t;
	scanf("%d" , &t );

	int cases = 1;

	while( cases <= t )
	{
		address = 0;
		Id.clear();

		scanf("%d" , &n );
		getchar();

		for(int i = 0; i<n; i++ )
		{
			string u , v;
			int c;
			cin >> u >> v >> c;

			if( !Id.count( u ) )
				Id[ u ] = ++address;
			if( !Id.count( v ) )
				Id[ v ] = ++address;
			
			int a = Id[ u ];
			int b = Id[ v ];
			//cout <<"For " << u << " ID is " << a << endl;
			//cout <<"For " << v << " ID is " << b << endl;

			P[ i ] = { c , { a , b  } };
		}

		sort( P, P+n );

		/*for(int i = 0; i<n; i++ )
		{
			cout << P[ i ].first << "   " << P[ i ].second.first << "  " << P[ i ].second.second <<endl;
		}*/

		Initialize();

		int ans = kruskal( n );

		int flag = 0;

		for(int i = 1; i<=address; i++ )
		{
			//cout << "For  " << i << " Parent is " << parent[ i ] << endl;

			if( parent[ i ]==i )
				flag++;
		}

		if( flag>=2 )
		{
			printf("Case %d: Impossible\n", cases++ );
		}
		else
			printf("Case %d: %d\n", cases++ , ans);
	}

	return 0;
}
