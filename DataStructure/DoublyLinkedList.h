//
//  DoublyLinkedList.h
//  DataStructure
//
//  Created by zhengyong on 2018/8/10.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    struct ListNode *prev;
    int data;
    struct ListNode *next;
} doubly_node;


/**
 初始化双向链表

 @return 双向链表头节点
 */
doubly_node *initDoublyList(void);

/**
 更改双向链表

 @param head 双向链表头节点
 @param index 要更改的节点位置
 @param data 要更改的值
 */
void amendDoublyList(doubly_node *head, int index, int data);


/**
 向链表插入值

 @param head 双向链表头节点
 @param index 要插入的位置
 @param data 要插入的值
 */
void insertDoublyNode(doubly_node *head, int index, int data);

/**
 删除双向链表的元素

 @param head 双向链表头节点
 @param data 要删除的值
 */
void deleteDoublyNode(doubly_node *head, int data);

/**
 打印双向链表

 @param head 双向链表头节点
 */
void displayDoublyList(doubly_node *head);

#endif /* DoublyLinkedList_h */
