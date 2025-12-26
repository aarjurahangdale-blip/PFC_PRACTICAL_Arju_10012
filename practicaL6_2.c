#include <stdio.h>
int main() { printf("Arju_10012");
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i%2!=0)
            continue;
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
