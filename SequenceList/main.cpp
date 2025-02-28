#include "SqList.h"

int main() {
    // Test `int` stroation
    SqList L;
    InitList_Sq(L);

    for(int i = 1; i <= 8; i++) {
        ListInsert_Sq(L, i, 2 * i);
    }
    ListTraverse(L);

    return 0;
}

