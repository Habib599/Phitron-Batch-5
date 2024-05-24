#include <stdio.h>
int main()
{
    int i,n,m,a[100][100];
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(int i=n-1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            printf("%d ",a[i][j]);
        } 
    }
    
    printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j<m;j++)
        {
            
            printf("%d ",a[i][j]);
        } 
    }
    return 0;
}

