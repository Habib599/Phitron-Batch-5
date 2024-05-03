#include<stdio.h>

int main() {
    int c = 0;
    char s[100001];
    gets(s);
    
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') 
        {
            c++;
        }
    }
    
    printf("%d", c);
    
    return 0;
}
