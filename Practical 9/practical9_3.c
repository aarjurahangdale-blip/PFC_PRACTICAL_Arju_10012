// QUESTION: Sum of all even elements of an array
//Arju Rahangdale 10012
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even elements = %d", sum);

    return 0;
}

/*OUTPUT: 
Enter number of elements: 6
10 15 20 33 40 7
Sum of even elements = 70
 */
