//
//  Table.c
//  test
//
//  Created by zhengyong on 2018/8/8.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "Table.h"

table initTable() {
    table t;
    t.head = (int*)malloc(SIZE*sizeof(int*));
    if (!t.head) {
        printf("初始化失败");
        exit(0);
    }
    t.length = 0;
    t.size = SIZE;
    
    return t;
}

int selectTable(table t, int elem) {
    for (int i = 0; i < t.length; i++) {
        if (t.head[i] == elem) {
            return i + 1;
        }
    }
    return -1;
}

table amendTable(table t, int elem, int newElem) {
    int add = selectTable(t, elem);
    t.head[add - 1] = newElem;
    return t;
}

table insertTable(table t, int elem, int insert) {
    if (insert > t.length + 1 || insert < 1) {
        printf("插入位置错误！");
        return t;
    }
    if (t.length == t.size) {
        t.head = (int*)realloc(t.head, (t.size + 1)*sizeof(int));
        if (!t.head) {
            printf("存储分配失败！");
            return t;
        }
        t.size += 1;
    }
    for (int i = t.length - 1; i >= insert - 1; i--) {
        t.head[i + 1] = t.head[i];
    }
    t.head[insert - 1] = elem;
    t.length++;
    return t;
}

table delTable(table t, int del) {
    if (del > t.length || del < 1) {
        printf("删除位置错误");
        return t;
    }
    for (int i = del; i < t.length; i++) {
        t.head[i - 1] = t.head[i];
    }
    t.length--;
    return t;
}

void displayTable(table t) {
    for (int i = 0; i < t.length; i++) {
        printf("%d", t.head[i]);
    }
    printf("\n");
}
