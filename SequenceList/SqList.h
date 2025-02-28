//
// Created by Akatsuki on 25-2-26.
//

#ifndef SQLIST_H
#define SQLIST_H

#define LIST_INIT_SIZE 100
#define MAXSIZE 50
typedef int ElemType;

typedef struct{
    ElemType *elem; // 存储空间基址（指向顺序表所占内存的起始位置）
    int length; // 当前长度
    int listsize; // 当前分配的存储容量
} SqList;

bool InitList_Sq(SqList& L);// 构造空的线性表L
bool ListInsert_Sq(SqList& L, int i, ElemType e);// 在顺序线性表L中第i个位置之前插入新的元素e
bool ListDelete_Sq(SqList& L, int i, ElemType& e); // 删除指定元素
int LocateElem_Sq(SqList L, ElemType e, bool(Compare)(ElemType, ElemType)); // 返回顺序表中首个与e满足Compare关系的元素位序
void ListTraverse(SqList L); // 遍历

#endif //SQLIST_H
