#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int num = 10;
    int *ptr = &num;

    printf("=== 指针基础示例 ===\n\n");

    printf("1. 基本变量\n");
    printf("   num = %d\n", num);

    printf("\n2. 取地址运算符 &\n");
    printf("   &num = %p (num的地址)\n", (void*)&num);

    printf("\n3. 指针变量\n");
    printf("   ptr = %p (指针存储的地址)\n", (void*)ptr);
    printf("   *ptr = %d (解引用获取的值)\n", *ptr);

    printf("\n4. 通过指针修改值\n");
    *ptr = 20;
    printf("   *ptr = 20 后，num = %d\n", num);

    printf("\n=== 指针与数组 ===\n\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("5. 数组名作为指针\n");
    printf("   arr = %p\n", (void*)arr);
    printf("   p = %p\n", (void*)p);

    printf("\n6. 指针运算\n");
    printf("   *p = %d\n", *p);
    printf("   *(p+1) = %d\n", *(p+1));
    printf("   *(p+2) = %d\n", *(p+2));

    printf("\n7. 遍历数组\n");
    for (int i = 0; i < 5; i++) {
        printf("   *(p+%d) = %d\n", i, *(p+i));
    }

    return 0;
}
