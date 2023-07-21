#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average, max = 0, min = 100;
    scanf("%d", &n);
    float scores[n];
    for (i = 0; i < n; i++) {
        scanf("%f", &scores[i]);
        sum += scores[i];
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    average = sum / n;
    printf("%.2f\n", average);
    printf("%.0f\n", max);
    printf("%.0f\n", min);
    return 0;
}55
