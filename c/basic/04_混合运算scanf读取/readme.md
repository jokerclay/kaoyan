# scanf 原理 和 混合运算
## 字符串常量

## 强制转换
```C
#include <stdio.h>

int main() {
    int i = 5;
    float j = i / 2;        // 此时 i 还是 int 型， int 5 / 2 -> 2
    float k = (float)i / 2; // 此时 i 被强制转换成 float 型，浮点型的运算 -> 2.5

    printf("%f\n",j);
    printf("%f\n",k);

    return 0;
}

```

## 数据输入和输出函数
scanf 读取标准输入
printf 标准输出


## scanf 原理

scanf 匹配缓冲区，换行符也有 ASCII 码
缓冲区为空时，scanf 才会卡主(阻塞)
**scanf 在 读取 `整型`，`浮点型`，`字符串`， 时，会忽略`\n` `空格字符`**
`scanf("%c",&c); ` 不会忽略，会把 `\n`也读入

```c
#include <stdio.h>

int main() {
    int i;
    char c;
    float j;
    scanf("%d",&i);
    printf("%d",i);

    // scanf("%c",&c);          // char 类型会把回车也读入
    // printf("%c\n",c);

    scanf("%f",&j);
    printf("%f\n",j);
    return 0;
}
```


##判断闰年







