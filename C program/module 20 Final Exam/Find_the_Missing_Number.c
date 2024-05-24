#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    
    while (T--) 
    {   
        int n=4;
        long long int a[n-1];
        for (int i = 0; i < n; i++) 
        {
            scanf("%lld", &a[i]);
        }
        int b=a[1]*a[2]*a[3];
        if(a[0]==0) printf("0\n");
        else if(a[0]%b==0) printf("%lld\n",a[0]/b);
        else printf("-1\n");
    } 
    
    return 0;
}