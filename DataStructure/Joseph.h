//
//  Joseph.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/10.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef Joseph_h
#define Joseph_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int number;
    struct Node *next;
}node;


/**
 初始化循环链表

 @param n 节点总个数
 @return 链表
 */
node *initCycle(int n);

/**
 找到最后一个节点

 @param head 循环链表
 @param k 从第几个节点开始
 @param m 步长
 @return 最后的节点
 */
int findLastNode(node *head, int k, int m);

#endif /* Joseph_h */
