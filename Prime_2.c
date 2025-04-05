#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
    bool isPrime[MAX + 1]; // 陣列表示數字是否為質數
    for (int i = 0; i <= MAX; i++) {
        isPrime[i] = true; // 初始設為全部都是質數
    }

    isPrime[0] = isPrime[1] = false; // 0 和 1 不是質數

    // 篩選質數
    for (int p = 2; p * p <= MAX; p++) {
        if (isPrime[p]) {
            // 把 p 的所有倍數標記為非質數
            for (int j = p * p; j <= MAX; j += p) {
                isPrime[j] = false;
            }
        }
    }

    // 印出所有質數
    printf("100 以內的質數:\n");
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
