#include<stdio.h>
int main()
{
    int T,i,a,b,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
        {
            scanf("%d %d",&a,&b);
            r=a+b;
            printf("Case %d: %d\n",i,r);
        }
    return 0;
}
