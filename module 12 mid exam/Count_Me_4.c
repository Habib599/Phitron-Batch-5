#include <stdio.h>

int main() {
    char s[10001];
    fgets(s, sizeof(s), stdin); 

    int count[26] = {0}; 
    
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a'; 
            count[index]++; 
        }
    }
    
    
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
