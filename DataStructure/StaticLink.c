//
//  StaticLink.c
//  DataStructure
//
//  Created by zhengyong on 2018/8/9.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#include "StaticLink.h"

void reserveArr(static_link *array) {
    for (int i = 0; i < MAX_SIZE; i++) {
        array[i].cur = i + 1;
    }
    array[MAX_SIZE - 1].cur = 0;
}

int mallocArr(static_link *array) {
    int i = array[0].cur;
    if (array[0].cur) {
        array[0].cur = array[i].cur;
    }
    return i;
}

int initStaticLink(static_link *array) {
    reserveArr(array);
    int body = mallocArr(array);
    int tempBody = body;
    for (int i = 1; i < MAX_SIZE - 2; i++) {
        int j = mallocArr(array);
        array[tempBody].cur = j;
        array[j].data = 'a' + i - 1;
        tempBody = j;
    }
    array[tempBody].cur = 0;
    return body;
}

int selectStaticElem(static_link *array, int body, char elem) {
    int tempBody = body;
    while (array[tempBody].cur != 0) {
        if (array[tempBody].data == elem) {
            return tempBody;
        }
        tempBody = array[tempBody].cur;
    }
    return -1;
}

void amendStaticElem(static_link *array, int body, char oldElem, char newElem) {
    int add = selectStaticElem(array, body, oldElem);
    if (add == -1) {
        printf("没有查找到元素");
        return;
    }
    array[add].data = newElem;
}

void insertStaticElem(static_link *array, int body, int add, char a) {
    int tempBody = body;
    for (int i = 1; i < add; i++) {
        tempBody = array[tempBody].cur;
    }
    int newBody = mallocArr(array);
    array[newBody].data = a;
    array[newBody].cur = array[tempBody].cur;
    array[tempBody].cur = newBody;
}

void displayStaticList(static_link *array, int body) {
    int tempBody = body;
    while (array[tempBody].cur) {
        tempBody = array[tempBody].cur;
        printf("%c, ", array[tempBody].data);
    }
    printf("\n");
}

void freeStaticElem(static_link *array, int body) {
    if (array[0].cur == 0) {
        array[body].cur = 0;
        array[0].cur = body;
        return;
    }
    array[body].cur = array[0].cur;
    array[0].cur = body;
}

void delStaticElem(static_link *array, int body, char a) {
    int tempBody = body;
    int lastBody = 1;
    while (array[tempBody].data != a) {
        lastBody = tempBody;
        tempBody = array[tempBody].cur;
        if (array[tempBody].cur == 0) {
            printf("没有找到要删除的元素！\n");
            return;
        }
    }
    array[lastBody].cur = array[tempBody].cur;
    freeStaticElem(array, tempBody);
}
