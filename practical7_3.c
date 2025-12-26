#include <stdio.h>
int main() { printf("Arju_10012\n");
    int i,j,n=4;
    for(i=1;i<=n;i++) {
        for(j=0;j<i;j++)
            printf("%c",'A'+j);
        printf("\n");
    }
    return 0;
}
