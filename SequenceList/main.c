#include "SqList.h"
#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

Status compare_eq(ElemType e1, ElemType e2) {
    return e1 == e2 ? TRUE : FALSE;
}

Status compare_neq(ElemType e1, ElemType e2) {
    return e1 != e2 ? TRUE : FALSE;
}

void printElem(ElemType e) {
    printf("%c ", e);
}

void intersection(SqList A, SqList B, SqList* C) {
    C->listsize = C->length = min(A.length, B.length);
    ElemType* pc = C->elem = (ElemType*)malloc(C->listsize * sizeof(ElemType));
    if (!C->elem) {
        exit(OVERFLOW);
    } // 存储分配失败

    int k = 0;
    for (int i = 0; i < A.length; i++) {
        for (int j = 0; j < B.length; j++) {
            if (A.elem[i] == B.elem[j]) {
                C->elem[k++] = A.elem[i];
            }
        }
    }
    C->length = k;
}

int isIn(SqList B, ElemType e) {
    for (int i = 0; i < B.length; i++) {
        if (B.elem[i] == e) {
            return 1;  // 元素在集合 B 中
        }
    }
    return 0;  // 元素不在集合 B 中
}

void except(SqList A, SqList B, SqList* C) {
    C->listsize = A.listsize;
    C->length = A.length;
    ElemType* pc = C->elem = (ElemType*)malloc(A.listsize * sizeof(ElemType));
    if (!C->elem) {
        exit(OVERFLOW);
    } // 存储分配失败

    int j = 0;
    for (int i = 0; i < A.length; i++) {
        if (!isIn(B, A.elem[i])) {
            C->elem[j++] = A.elem[i];
        }
    }
    C->length = j;
}

int main() {
    // Test `int` stroation
    SqList L;
    InitList_Sq(&L);

    for(int i = 1; i <= 8; i++) {
        ListInsert_Sq(&L, i, 2 * i);
    }
    ListTraverse(L, printElem);


    // Test Intersection & Except

    // SqList A, B, C, D;
    // InitList_Sq(&A), InitList_Sq(&B), InitList_Sq(&C), InitList_Sq(&D);
    // ListInsert_Sq(&A, 1, 'a'),ListInsert_Sq(&A, 2, 'b'), ListInsert_Sq(&A, 3, 'c');
    // ListInsert_Sq(&B, 1, 'b'),ListInsert_Sq(&B, 2, 'c'), ListInsert_Sq(&B, 3, 'd');

    // intersection(A, B, &C);
    // ListTraverse(C, printElem);
    //
    // except(A, B, &D);
    // ListTraverse(D, printElem);

    // Test Delete Duplicate

    // ListInsert_Sq(&A, 4, 'a'); // {'a', 'b', 'c', 'a'}
    // ListTraverse(A, printElem);
    // DeleteDuplicate(&A);
    // ListTraverse(A, printElem); // {'a', 'b', 'c'}

    // Test Reversal
    // Reversal(&A);
    // ListTraverse(A, printElem); // {'c', 'b', 'a'}


    return 0;
}

