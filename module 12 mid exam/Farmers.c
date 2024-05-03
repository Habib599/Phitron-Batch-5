#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int prv_day = D * M1;
        
        int new_days = prv_day / (M1 + M2);
        
        int difference = D - new_days;
        
        printf("%d\n", difference); 
    }
    
    return 0;
}
