#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n-1], d3 = 0, d2 = 0;
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        if (a[i] % 3 == 0) 
        {
            if (a[i] % 2 == 0) 
            {
                d2++;
            } 
            else 
            {
                d3++;
            }
        } 
        else if (a[i] % 2 == 0) {
            d2++;
        }
    }
    
    printf("%d %d\n", d2, d3);

    return 0;
}