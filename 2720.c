#include <stdio.h>

int main()
{
    int q, d, n, p, t, c;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        scanf("%d", &c);
        q=c/25;
        c%=25;
        d=c/10;
        c%=10;
        n=c/5;
        c%=5;
        p=c;
        printf("%d %d %d %d\n", q, d, n, p);
    }
}
