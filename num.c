#include <stdio.h>
#include <windows.h>

int isNarcissistic(int num) {
    int original = num;
    int sum = 0;
    int digit;
    
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    
    return sum == original;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num;
    
    printf("请输入一个三位数: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("请输入三位数！\n");
        return 0;
    }
    
    if (isNarcissistic(num)) {
        printf("%d 是水仙花数\n", num);
    } else {
        printf("%d 不是水仙花数\n", num);
    }
    
    return 0;
}
