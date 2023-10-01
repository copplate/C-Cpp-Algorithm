//
// Created by wyc on 2023/10/1.
//
//三个define语句的作用是防止头文件的重复包含。
#ifndef WUGE01_QINGKONGBINARYSEARCH_H //检查是否定义了宏 WUGE01_QINGKONGBINARYSEARCH_H，如果没有定义，则编译下面的代码，否则跳过下面的代码。
#define WUGE01_QINGKONGBINARYSEARCH_H //定义宏 WUGE01_QINGKONGBINARYSEARCH_H，防止重复包含。
#include <stdio.h>
int search(int *nums, int numsSize, int target);
#endif //结束条件编译的作用域。

