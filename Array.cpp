#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of integers.\n");
        return 1;
    }

    int arr[n];
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = (double)sum / n;

    printf("Average: %.2lf\n", average);

    return 0;
}
