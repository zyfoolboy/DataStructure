//
//  Table.h
//  test
//
//  Created by zhengyong on 2018/8/8.
//  Copyright © 2018年 zhengyong. All rights reserved.
//

#ifndef Table_h
#define Table_h

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct Table {
    int * head;
    int length;
    int size;
}table;

/**
 初始化线性表
 
 @return table
 */
table initTable(void);

/**
 查找元素
 
 @param t 线性表
 @param elem 要查找的数据元素的值
 @return 要查找的元素所在的位置
 */
int selectTable(table t, int elem);

/**
 顺序表更改元素
 
 @param t 顺序表
 @param elem 元素的位置
 @param newElem 要修改的值
 @return 顺序表
 */
table amendTable(table t, int elem, int newElem);

/**
 插入元素到线性表
 
 @param t 线性表
 @param elem 要插入的元素
 @param insert 要插入的位置
 @return 返回插入后的线性表
 */
table insertTable(table t, int elem, int insert);

/**
 删除线性表元素
 
 @param t 要删除的线性表
 @param del 要删除的位置
 @return 返回删除后的线性表
 */
table delTable(table t, int del);


/**
 展示线性表内容

 @param t 要展示的线性表
 */
void displayTable(table t);

#endif /* Table_h */
