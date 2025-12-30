// QUESTION : Sum of diagnol elements of 2d array
// Arju Rahangdale 10012
#include <stdio.h>

int main() {
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];   // main diagonal
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
/* OUTPUT :
Enter order of matrix: 3
Enter elements:
1 2 3
4 5 6
7 8 9
Sum of diagonal elements = 15
*/
