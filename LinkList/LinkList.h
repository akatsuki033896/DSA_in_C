//
// Created by Akatsuki on 25-3-5.
//

#ifndef LINKLIST_LINKLIST_H
#define LINKLIST_LINKLIST_H

typedef int ElemType;

// 单链表节点
typedef struct LNode{
    ElemType data; // 数据
    struct LNode* next; // next指针
} LNode;

// 指向单链表结点的指针
typedef LNode* LinkList;

bool InitList(LinkList& L); // 带头节点的单链表初始化
int Length(LinkList& L); // 求表长
LNode* GetElem(LinkList& L, int i); // 按序号查找
LNode* LocateElem(LinkList& L, ElemType e); // 按元素值查找
bool ListInsert(LinkList& L, int i, ElemType e); // 插入
bool ListDelete(LinkList& L, int i, ElemType &e); // 删除
LinkList HeadInsert(LinkList& L); // 头插法
void ListDisplay(LinkList& L);

#endif //LINKLIST_LINKLIST_H
