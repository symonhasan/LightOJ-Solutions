#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d" , &t );
    int cases = 1;

    while( cases <= t )
    {
        double a , b , c , d;
        scanf("%lf %lf %lf %lf" , &a, &b, &c, &d );

        double e = abs( a - c );

        double s = ( b + d + e )/2;

        double tri_area = sqrt( s * ( s - b ) * ( s - d ) * ( s - e ) );

        double h = ( 2 * tri_area ) / e;

        double rac_area =  a > c ? c * h : a * h;

        double tra_area = rac_area + tri_area;

        printf("Case %d: %0.9f\n" , cases++, tra_area );

    }

    return 0;
}
