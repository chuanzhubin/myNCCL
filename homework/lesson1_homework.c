/* 1, 找不到库
ld：0711-317 错误：未定义的符号：.pow
ld：0711-345 使用 -bloadmap 或 -bnoquiet 选项获取详细信息。
*/

/*  2, 中文标点的 引号/分号 会导致编译报错*/

#include <stdio.h>


int main()
{
    int iVar = 0;

    iVar = pow(2, 10);

    return 0;
}