//
// Created by wyc on 2023/10/1.
//
#include "qingkongbinarysearch.h"

int search(int *nums, int numsSize, int target){
    int sign1 = 0;//查找区间左下标
    int sign2 = numsSize;//查找区间右下标
    for (int i = 0; i < numsSize; ++i) {
        if (nums[(sign1 + sign2) / 2] == target) {
            return (sign1 + sign2) / 2;
        }
        if (nums[(sign1 + sign2) / 2] > target) {
            if (sign2 == (sign1 + sign2) / 2) {
                return -1;
            } else {
                sign2 = (sign1 + sign2) / 2;

            }
            continue;
        }
        if (nums[(sign1 + sign2) / 2] < target) {
            if (sign1 == (sign1 + sign2) / 2) {
                return -1;
            } else {
                sign1 = (sign1 + sign2) / 2;
            }
            continue;
        }
        if (sign1 >= sign2) {
            return -1;
        }
    }

}
