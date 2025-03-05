#include "LinkList.h"
#include <iostream>

void TestLinkList() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    LinkList L;
    InitList(L); // create a head node with 0 and next pointer
    ListDisplay(L);
    for (int i = 1; i < n; i++) {
        ListInsert(L, i, i * 10);
    }
    ListDisplay(L);

    // Test insert
    int local_i;
    ElemType e;
    std::cout << "Input local_i and e: ";
    std::cin >> local_i >> e;
    ListInsert(L, local_i, e);
    std::cout << "List after insertion: ";
    ListDisplay(L);

    // Test delete
    std::cout << "Input position to delete: ";
    std::cin >> local_i;
    ListDelete(L, local_i, e);
    std::cout << "List after delete: ";
    ListDisplay(L);

    // Test Get element by value
    e = 40;
    std::cout << LocateElem(L, e)->data << std::endl;
}

int main() {

    // test
    TestLinkList();

    return 0;
}