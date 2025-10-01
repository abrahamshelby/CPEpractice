#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    // 讀取每一行輸入，直到檔尾
    while (scanf("%d %d", &num1, &num2) == 2) {
        int a = num1, b = num2;  // 保留原始輸入順序

        // 將 num1, num2 排序，方便迴圈
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        int max_cycle = 0;

        // 計算從 num1 到 num2 的每個數的 cycle length
        for (int i = num1; i <= num2; i++) {
            long n = i;       // 用 long 避免 3n+1 過程爆掉
            int count = 1;    // 包含起始數字
            while (n != 1) {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n /= 2;
                count++;
            }
            if (count > max_cycle)
                max_cycle = count;
        }

        // 輸出原始輸入和最大 cycle length
        printf("%d %d %d\n", a, b, max_cycle);
    }

    return 0;
}
