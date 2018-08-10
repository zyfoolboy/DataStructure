//
//  Link.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/9.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "Link.h"

link * initLink() {
    link *p = (link*)malloc(sizeof(link));
    link *temp = p;
    for (int i = 1; i < 5; i++) {
        link *a = (link*)malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}

int selectElem(link *p, int elem) {
    link *t = p;
    int i = 1;
    while (t->next) {
        t = t->next;
        if (t->elem == elem) {
            return i;
        }
        i++;
    }
    return -1;
}

link *amendElem(link *p, int add, int newElem) {
    link *temp = p;
    temp = temp->next;
    for (int i = 1; i < add; i++) {
        temp = temp->next;
    }
    temp->elem = newElem;
    return p;
}

link *insertElem(link *p, int elem, int add) {
    if (add < 1) {
        printf("插入位置有误");
        return p;
    }
    link *temp = p;
    for (int i = 1; i < add; i++) {
        if (temp == NULL) {
            printf("插入位置有误");
            return p;
        }
        temp = temp->next;
    }
    link *c = (link*)malloc(sizeof(link));
    c->elem = elem;
    c->next = temp->next;
    temp->next = c;
    return p;
}

link *delElem(link *p, int add) {
    if (add < 1) {
        printf("插入位置有误");
        return p;
    }
    link *temp = p;
    for (int i = 1; i < add; i++) {
        temp = temp->next;
    }
    link *del = temp->next;
    temp->next = temp->next->next;
    free(del);
    return p;
}

void display(link *p) {
    link *temp = p;
    while (temp->next) {
        temp = temp->next;
        printf("%d", temp->elem);
    }
    printf("\n");
}
