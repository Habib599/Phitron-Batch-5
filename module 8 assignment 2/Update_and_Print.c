#include<stdio.h>

int main() {
    int n, p, v;
    scanf("%d", &n);
    int a[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &p, &v);
    a[p] = v;
    for (int i = n - 1; i >= 0; i--) { 
        printf("%d ", a[i]); 
    }
    return 0;
}
