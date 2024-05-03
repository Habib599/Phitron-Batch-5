#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]) 
{
    int i = 0, j = strlen(s), flag = 1;
    while (i < j) 
    {
        if (s[i] == s[j - 1]) 
        {
            i++;
            j--;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
	char s[1001];
	scanf("%s",s);
	int p=is_palindrome(s);
	
    if (p)  printf("Palindrome\n");
    else  printf("Not Palindrome\n");
	return 0;
}