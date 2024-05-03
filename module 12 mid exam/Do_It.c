#include <stdio.h>

int main() {
    int T,k;
    scanf("%d %d", &T,&k); 
    
    while (T--) {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}
