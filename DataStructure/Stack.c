//
//  Stack.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/13.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "Stack.h"

int push(char *a, int top, char elem) {
    a[++top] = elem;
    return top;
}

int pop(char *a, int top) {
    if (top == -1) {
        printf("空栈\n");
        return -1;
    }
    printf("弹栈元素：%c\n", a[top]);
    top--;
    return top;
}
