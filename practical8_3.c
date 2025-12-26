#include <stdio.h>
void triangle(int n) {
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
int main() { printf("Arju_10012");
    int n;
    scanf("%d",&n);
    triangle(n);
    return 0;
}
