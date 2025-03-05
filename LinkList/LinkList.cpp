//
// Created by Akatsuki on 25-3-5.
//

#include "LinkList.h"
#include <cstdlib>
#include <iostream>

bool InitList(LinkList &L) {
    L = (LNode *)(malloc(sizeof(LNode))); // 创建头节点
    if (L == NULL) {
        return false; // overflow
    }
    L->data = 0;
    L->next = NULL;
    return true;
}

int Length(LinkList &L) {
    int len = 0;
    LNode *p = L;
    while (p->next != NULL) {
        p = p->next;
        len++;
    } // 遍历增加链表长度
    return len;
} // O(n)

LNode* GetElem(LinkList& L, int i) {
    LNode *p = L; // 指向当前扫描到的节点
    int j = 0;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    } // 遍历找到第 i 个节点
    return p; // 返回第 i 个节点的指针
} // O(n)

LNode* LocateElem(LinkList& L, ElemType e) {
    LNode *p = L->next;
    while (p != NULL && p->data != e) {
        p = p->next;
    } // 遍历找到数据为 e 的节点
    return p; // 返回节点指针
} // O(n)

bool ListInsert(LinkList& L, int i, ElemType e) {
    LNode *p = L;
    int j = 0;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    } // 找到 j
    if (p == NULL) {
        return false;
    } // 不合法
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool ListDelete(LinkList& L, int i, ElemType &e) {
    LNode *p = L; // 当前扫描到的节点
    int j = 0;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL || p->next == NULL) {
        return false;
    }
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

void ListDisplay(LinkList &L) {
    LNode *p = L;
    while (p != NULL) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

