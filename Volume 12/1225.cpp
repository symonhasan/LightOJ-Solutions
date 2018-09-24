#include <stdio.h> 
#include <string.h>
 
    char s[20];
    char str[20];
    int main()
    {
        int t,j,k,i,temp;
        scanf("%d",&t);
        for(k=1;k<=t;k++)
        {
            scanf("%s",s);
            printf("Case %d: ",k);
            strcpy(str,s);
             j=strlen(str);
 
 
            for(i=0;i<j/2;i++)
            {
                temp = str[i];
               str[i] = str[j-1-i];
                  str[j-1-i] = temp;
            }
 
            if(strcmp(s,str)==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        return 0;
    }
 
