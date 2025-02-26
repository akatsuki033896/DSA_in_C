//
// Created by Akatsuki on 25-2-26.
//

#include "SqList.h"
#include <stdlib.h>
#include <stdio.h>

Status InitList_Sq(SqList* L) {
    L->elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem) {
        exit(OVERFLOW);
    } // 存储分配失败
    L->length = 0; // 空表长度为0
    L->listsize = LIST_INIT_SIZE; // 初始存储容量
    return OK;
}

Status ListInsert_Sq(SqList* L, int i, ElemType e) {
    ElemType* newbase;
    ElemType* p, * q;
    // 确保顺序表结构存在
    if(L == NULL || L->elem == NULL) {
        return ERROR;
    }
    // i值越界
    if(i < 1 || i > L->length + 1) {
        return ERROR;
    }
    // 若存储空间已满，则增加新空间
    if(L->length >= L->listsize) {
        // 基于现有空间扩容
        newbase = (ElemType*) realloc(L->elem, (L->listsize + LISTINCREMENT) * sizeof(ElemType));
        if(newbase == NULL) {
            // 存储内存失败
            exit(OVERFLOW);
        }

        // 新基址
        L->elem = newbase;
        // 存的存储空间
        L->listsize += LISTINCREMENT;
    }
    // q为插入位置
    q = &L->elem[i - 1];
    // 右移元素，腾出位置
    for(p = &L->elem[L->length - 1]; p >= q; --p) {
        *(p + 1) = *p;
    }
    // 插入e
    *q = e;
    // 表长增1
    L->length++;
    return OK;
}
// 1 <= i <= ListLength_Sq(L) + 1

Status ListDelete_Sq(SqList *L, int i, ElemType *e) {
    if (L == NULL || L->elem == NULL) {
        return ERROR;
    } // 顺序表结构不存在
    if (i > L->length || i < 1) {
        return ERROR;
    } // i 越界
    ElemType* p = &(L->elem[i - 1]); // p 为被删除元素的位置
    *e = *p; // 获取被删除的元素
    ElemType* q = L->elem + L->length - 1; // 表尾元素位置
    for (++p; p <= q; ++p) {
        *(p - 1) = *p;
    } // 左移元素，被删除元素的位置上会有新元素进来
    L->length--; // 表长-1
    return OK;
}

int LocateElem_Sq(SqList L, ElemType e, Status(Compare)(ElemType, ElemType)) {
    if (L.elem == NULL) {
        return ERROR;
    }
    int i = 1;
    ElemType* p = L.elem;
    while (i <= L.length && !(Compare)(*p++, e)) {
        ++i;
    }
    if (i <= L.length) {
        return i;
    }
    else {
        return 0;
    }
} // 返回顺序表中首个与e满足Compare关系的元素位序

void MergeList_Sq(SqList La, SqList Lb, SqList* Lc) {
    ElemType* pa = La.elem;
    ElemType* pb = Lb.elem;
    Lc->listsize = Lc->length = La.length + Lb.length;
    ElemType* pc = Lc->elem = (ElemType*)malloc(Lc->listsize * sizeof(ElemType));

    if (!Lc->elem) {
        exit(OVERFLOW);
    } // 存储分配失败
    ElemType* pa_last = La.elem + La.length - 1; // La 最后一个元素
    ElemType* pb_last = Lb.elem + Lb.length - 1; // Lb 最后一个元素
    while (pa <= pa_last && pb <= pb_last) {
        if (*pa <= *pb) {
            *pc++ = *pa++;
        }
        else {
            *pc++ = *pb++;
        }
    } // 归并
    while (pa <= pa_last) {
        *pc++ = *pa++;
    }
    while (pb <= pb_last) {
        *pc++ = *pb++;
    }
}

void ListTraverse(SqList L, void(Visit)(ElemType)) {
    for(int i = 0; i < L.length; i++) {
        Visit(L.elem[i]);
    }
    printf("\n");
}

void DeleteDuplicate(SqList* L) {
    int org_length = L->length;
    int cnt = 0;
    for (int i = 0; i < L->length; i++) {
        for (int j = i + 1; j < L->length; j++) {
            if (L->elem[i] == L->elem[j]) {
                ListDelete_Sq(L, j + 1, L->elem);
                printf("%d\n", L->length);
            }
        }
    }
}

void Reversal(SqList* L) {
    for (int i = 0, j = L->length - 1; i < j; i++, j--) {
        ElemType tmp = L->elem[i];
        L->elem[i] = L->elem[j];
        L->elem[j] = tmp;
    }
}
