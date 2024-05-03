#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tens = n / 10; // Get the tens digit
    int ones = n % 10; // Get the ones digit

    // Check if either digit is zero or if one divides the other
    if (ones == 0 || tens == 0 || tens % ones == 0 || ones % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
