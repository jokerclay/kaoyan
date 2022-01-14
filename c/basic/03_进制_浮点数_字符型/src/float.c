#include <stdio.h>
int main() {
    
    float f = 0.123;
    float fe = 3e-3;
    float fee = 3e3;

    printf("输出浮点数：%f\n",f);   // %f 表示 以 浮点数的格式输出 f 占用 4字节
    printf("输出浮点数：%f\n",fe);  // e 代表 10 的幂次方
    printf("输出浮点数：%f\n",fee);

    return 0;
}
