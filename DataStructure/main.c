//
//  main.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/9.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include <stdio.h>
#include "Table.h"
#include "Link.h"
#include "StaticLink.h"
#include "Joseph.h"
#include "DoublyLinkedList.h"

void testTable(void);
void testLink(void);
void testStaticLink(void);
void testJoseph(void);
void testDoublyLink(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    testTable();
    testLink();
    testStaticLink();
    testJoseph();
    testDoublyLink();
    
    return 0;
}

void testDoublyLink(void) {
    doubly_node *head = initDoublyList();
    displayDoublyList(head);
    
    printf("在位置 3 插入 9 ：\n");
    insertDoublyNode(head, 3, 9);
    displayDoublyList(head);
    
    printf("在位置 4 的值改为 10 ：\n");
    amendDoublyList(head, 4, 10);
    displayDoublyList(head);
    
    printf("删除 2 ：\n");
    deleteDoublyNode(head, 2);
    displayDoublyList(head);
}

void testTable() {
    table t1 = initTable();
    for (int i = 1; i <= SIZE; i++) {
        t1.head[i - 1] = i;
        t1.length++;
    }
    printf("原顺序表：\n");
    displayTable(t1);
    
    printf("删除元素1:\n");
    t1 = delTable(t1, 1);
    displayTable(t1);
    
    printf("在第2的位置插入元素5:\n");
    t1 = insertTable(t1, 5, 2);
    displayTable(t1);
    
    printf("查找元素2的位置：");
    int index = selectTable(t1, 2);
    printf("%d\n", index);
    
    printf("将元素 3 改为 6 ：\n");
    t1 = amendTable(t1, 3, 6);
    displayTable(t1);
}

void testLink() {
    printf("初始化链表为：\n");
    link *p=initLink();
    display(p);
    
    printf("在第4的位置插入元素5：\n");
    p=insertElem(p, 5, 4);
    display(p);

    printf("删除元素3:\n");
    p=delElem(p, 3);
    display(p);

    printf("查找元素2的位置为：\n");
    int address=selectElem(p, 2);
    if (address==-1) {
        printf("没有该元素");
    }else{
        printf("元素2的位置为：%d\n",address);
    }
    printf("更改第3的位置的数据为7:\n");
    p=amendElem(p, 3, 7);
    display(p);
}

void testStaticLink() {
    static_link array[MAX_SIZE];
    int body = initStaticLink(array);
    printf("静态链表为:\n");
    displayStaticList(array, body);
    
    printf("c 在链表的 %d \n", selectStaticElem(array, body, 'c'));
    
    printf("更改静态链表的 c 为 z \n");
    amendStaticElem(array, body, 'c', 'z');
    displayStaticList(array, body);
    
    printf("插入 v 到链表 3 位置：\n");
    insertStaticElem(array, body, 3, 'v');
    displayStaticList(array, body);
    
    printf("删除 v :\n");
    delStaticElem(array, body, 'v');
    displayStaticList(array, body);
}

void testJoseph() {
    node *head = initCycle(5);
    
    int last = findLastNode(head, 3, 2);
    printf("%d 胜出\n", last);
}
