//
//  LineStack.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/13.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "LineStack.h"

lineStack *lineStackPush(lineStack *stack, char data) {
    lineStack *top = (lineStack *)malloc(sizeof(lineStack));
    top->data = data;
    top->next = stack;
    return top;
}

lineStack *lineStackPop(lineStack *stack) {
    if (stack) {
        lineStack *p = stack;
        stack = stack->next;
        printf("弹栈元素：%c\n", p->data);
        free(p);
    } else {
        printf("没有元素\n");
    }
    
    return stack;
}

