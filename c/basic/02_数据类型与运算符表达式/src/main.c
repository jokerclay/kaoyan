#include <stdio.h>
#define PI  3

int main() {
    int a = 3; // 把 3 这个值复制到 a 里，
               // 3 是从何而来的 ？3 是在代码段中, 执行到 int a = 3
               // 会把代码段中的 3 复制到 a 中

    printf("%d \n",a);
    printf("%d \n",PI);
    
    return 0;
}

