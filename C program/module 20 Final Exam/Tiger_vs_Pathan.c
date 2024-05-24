#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    
    while (T--) 
    {   
        int n;
        scanf("%d",&n);
        getchar(); 
        char s[100001];
        gets(s);
        int t=0,p=0;
        for (int i = 0; s[i]!=0; i++)
        {
            if (s[i] ==84) t++;
            else if (s[i] ==80) p++;
        }
        if(t>p) printf("Tiger\n"); 
        else if(t<p) printf("Pathaan\n");
        else printf("Draw\n");
    }
    
    return 0;
}