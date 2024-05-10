#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int N;
        scanf("%d", &N);
        int A[N-1], B[N-1], C[N-1];

        
        for (int i = 0; i < N; i++) 
        {
            scanf("%d", &A[i]);
        }
         

         qsort(B, N, sizeof(int), 
            // Compare function
            (const void *a, const void *b) -> int {
                return (*(int *)a - *(int *)b);
            });


        for (int i = 0; i < N; i++) 
        {
            C[i] = abs(A[i] - B[i]); 
        }

        for (int i = 0; i < N; i++) 
        {
            printf("%d ", B[i]);
        }
        printf("\n");
    }

    return 0;
}
