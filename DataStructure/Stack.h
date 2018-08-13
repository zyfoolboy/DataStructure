//
//  Stack.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/13.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>


/**
 入栈caozuo

 @param a 数组
 @param top 栈顶计数
 @param elem 值
 @return 栈顶计数
 */
int push(char *a, int top, char elem);


/**
 出栈

 @param a 数组
 @param top 栈顶
 @return 栈顶
 */
int pop(char *a, int top);

#endif /* Stack_h */
