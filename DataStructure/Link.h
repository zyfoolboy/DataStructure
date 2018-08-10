//
//  Link.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/9.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef Link_h
#define Link_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Link {
    char elem;
    struct Link *next;
}link;

/**
 初始化链表

 @return 返回链表头指针
 */
link *initLink(void);

/**
 查找链表某个节点

 @param p 链表头指针
 @param elem 要查找的元素
 @return 返回链表节点
 */
int selectElem(link *p, int elem);

/**
 修改链表中某节点的数据域

 @param p 链表头节点
 @param add 更改节点在链表位置
 @param newElem 新的数据域的值
 @return 链表头节点
 */
link *amendElem(link *p, int add, int newElem);


/**
 向链表中插入节点

 @param p 链表头指针
 @param elem 要插入的元素
 @param add 要插入的位置
 @return 链表头指针
 */
link *insertElem(link *p, int elem, int add);


/**
 删除链表的某一个节点

 @param p 链表头指针
 @param add 要删除的位置
 @return 删除节点后的链表头指针
 */
link *delElem(link *p, int add);


/**
 展示链表

 @param p 链表头节点
 */
void display(link *p);

#endif /* Link_h */
