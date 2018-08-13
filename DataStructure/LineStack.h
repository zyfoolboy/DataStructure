//
//  LineStack.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/13.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef LineStack_h
#define LineStack_h

#include <stdio.h>
#include <stdlib.h>

typedef struct LineStack {
    char data;
    struct LineStack *next;
}lineStack;

lineStack *lineStackPush(lineStack *stack, char data);

lineStack *lineStackPop(lineStack *stack);
#endif /* LineStack_h */
