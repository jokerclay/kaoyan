#include <stdio.h>

int main() {
    int i = 5;
    float j = i / 2;        // 此时 i 还是 int 型， int 5 / 2 -> 2
    float k = (float)i / 2; // 此时 i 被强制转换成 float 型，浮点型的运算 -> 2.5

    printf("%f\n",j);
    printf("%f\n",k);

    return 0;
}



