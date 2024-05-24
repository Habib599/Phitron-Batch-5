#include <stdio.h>
int main()
{
    int n,x,i,j,a[100];
    scanf("%d",&n);
    int find=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
            if (a[i]+a[j]==x)
            {
                find=1;
                break;
            }
    }
    if(find) printf("Yes");
    else printf("No");
    return 0;
}

