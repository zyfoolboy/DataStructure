//
//  DoublyLinkedList.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/10.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "DoublyLinkedList.h"

doubly_node *initDoublyList(void) {
    doubly_node *head = (doubly_node *)malloc(sizeof(doubly_node));
    head->prev = NULL;
    head->data = 1;
    doubly_node *temp = head;
    for (int i = 1; i < 5; i++) {
        doubly_node *node = (doubly_node *)malloc(sizeof(doubly_node));
        node->data = i + 1;
        node->next = NULL;
        node->prev = temp;
        temp->next = node;
        temp = node;
    }
    return head;
}

void insertDoublyNode(doubly_node *head, int index, int data) {
    doubly_node *temp = head;
    for (int i = 1; i < index; i++) {
        temp = temp->next;
    }
    doubly_node *insert = (doubly_node *)malloc(sizeof(doubly_node));
    doubly_node *last = temp->prev;
    last->next = insert;
    temp->prev = insert;
    insert->prev = last;
    insert->next = temp;
    insert->data = data;
}

void amendDoublyList(doubly_node *head, int index, int data) {
    doubly_node *temp = head;
    for (int i = 1; i < index; i++) {
        temp = temp->next;
    }
    temp->data = data;
}

void deleteDoublyNode(doubly_node *head, int data) {
    doubly_node *temp = head;
    while (temp->data != data) {
        if (!temp->data) {
            printf("没有找到要删除的节点");
            return;
        }
        temp = temp->next;
    }
    doubly_node *last = temp->prev;
    doubly_node *next = temp->next;
    last->next = next;
    next->prev = last;
    free(temp);
}

void displayDoublyList(doubly_node *head) {
    doubly_node *temp = head;
    while (temp) {
        printf("%p<=%p(%d)=>%p\n", temp->prev, temp, temp->data, temp->next);
        temp = temp->next;
    }
}
