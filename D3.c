#include<stdio.h>
int main() {
    int n, k;
    int arr[100];
    int comparisons = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        comparisons++;   
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            break;
        }
    }
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
update 2026-02-04 #1
