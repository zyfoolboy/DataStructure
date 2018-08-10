//
//  Joseph.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/10.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "Joseph.h"

node *initCycle(int n) {
    node *head = (node *)malloc(sizeof(node));
    head->number = 1;
    node *temp = head;
    for (int i = 1; i < n; i++) {
        node *person = (node *)malloc(sizeof(node));
        temp->next = person;
        person->number = i + 1;
        temp = person;
    }
    temp->next = head;
    return head;
}

int findLastNode(node *head, int k, int m) {
    node *start = head;
    
    while (start->number != k) {
        start = start->next;
    }
    
    node *temp = start;
    while (temp->next != temp) {
        node *del = temp;
        node *last = temp;
        for (int i = 1; i < m; i++) {
            last = del;
            del = del->next;
        }
        temp = del->next;
        last->next = del->next;
        printf("第 %d 出列\n", del->number);
        free(del);
    }
    
    return temp->number;
}
