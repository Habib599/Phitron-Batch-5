#include<stdio.h>
int main()
{
   int n,s,k=1;
   scanf("%d",&n);
   s=n-1;
   for (int i = 1;i<=n ; i++)
   {
        for (int j = 1; j<=s ; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <=k; j++) 
        {
            if (i%2==0) printf("-");
            else printf("#");
        }
        k+=2;
        s--;
        printf("\n");
   }
    s=1;
    k=n-1;
    for (int i = 1;i<=n ; i++)
    {
        for (int j = 1; j<=s ; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <=k; j++) 
        {
            if (i%2==0) printf("-");
            else printf("#");
        }
        k-=2;
        s++;
        printf("\n");
    }
   
   
   return 0;
}