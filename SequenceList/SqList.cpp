//
// Created by Akatsuki on 25-2-26.
//

#include "SqList.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>

bool InitList_Sq(SqList& L) {
    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem) {
        return false;  // 存储分配失败
    }
    L.length = 0; // 空表长度为0
    L.listsize = LIST_INIT_SIZE; // 初始存储容量
    return true;
}

bool ListInsert_Sq(SqList& L, int i, ElemType e) {
    if (L.length >= MAXSIZE) {
        return false;
    }
    // i值越界
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.elem[j] = L.elem[j - 1];
    } // 后移
    L.elem[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete_Sq(SqList& L, int i, ElemType& e) {
    if (i > L.length || i < 1) {
        return false;  // i 越界
    }
    e = L.elem[i - 1]; // 将被删除的元素赋值给 e
    for (int j = i; j < L.length; j++) {
        L.elem[j - 1] = L.elem[j];
    } // 前移
    L.length--; // 表长-1
    return true;
}

int LocateElem_Sq(SqList& L, ElemType e) {
    for (int i = 0; i < L.length; i++) {
        if (L.elem[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

void ListTraverse(SqList L) {
    for (int i = 0; i < L.length; i++) {
        std::cout << L.elem[i] << " ";
    }
    printf("\n");
}
