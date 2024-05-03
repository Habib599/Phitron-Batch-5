#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    getchar(); 
    
    while (T--) {
        char s[10001];
        gets(s);
        int c=0,small=0,d=0;
        for (int i = 0; s[i]!=0; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
                small++;
            else if (s[i] >= '0' && s[i] <= '9')
                d++;
        }
        printf("%d %d %d\n", c,small,d); 
    }
    
    return 0;
}
