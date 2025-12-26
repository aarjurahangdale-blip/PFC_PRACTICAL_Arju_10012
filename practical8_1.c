#include <stdio.h>
int sumOfDigits(int n) { printf("Arju_10012");
    int sum=0;
    while(n>0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigits(n));
    return 0;
}
