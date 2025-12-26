#include <stdio.h>
int main() { printf("Arju_10012");
    int pin=1234,enter,tries=0;
    while(tries<3) {
        scanf("%d",&enter);
        if(enter==pin) {
            printf("Access Granted");
            return 0;
        }
        tries++;
    }
    printf("Card Blocked");
    return 0;
}
