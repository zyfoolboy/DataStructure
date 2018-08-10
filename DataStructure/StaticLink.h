//
//  StaticLink.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/9.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef StaticLink_h
#define StaticLink_h

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct StaticLink {
    int data;
    int cur;
}static_link;

/**
 初始化静态链表

 @param array 静态链表空间数组
 @return 静态链表头节点
 */
int initStaticLink(static_link *array);

/**
 查找某个值在静态链表中的位置

 @param array 静态链表
 @param body 静态链表头节点
 @param elem 要查找的值
 @return 要查找的值在静态链表的位置
 */
int selectStaticElem(static_link *array, int body, char elem);

/**
 更改静态链表的值

 @param array 静态链表
 @param body 静态链表头节点
 @param oldElem 要修改的值
 @param newElem 更改后的值
 */
void amendStaticElem(static_link *array, int body, char oldElem, char newElem);

/**
 向静态链表插节点

 @param array 静态链表
 @param body 静态链表头节点位置
 @param add 要插入的位置
 @param a 要插入的值
 */
void insertStaticElem(static_link *array, int body, int add, char a);

/**
 展示静态链表

 @param array 静态链表
 @param body 静态链表头节点
 */
void displayStaticList(static_link *array, int body);

/**
 删除静态链表某一个元素

 @param array 静态链表
 @param body 静态链表的头节点
 @param a 要删除的值
 */
void delStaticElem(static_link *array, int body, char a);

#endif /* StaticLink_h */
