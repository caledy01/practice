// tests/test_linked_list.c
// 单向链表测试程序

#include <stdio.h>
#include "../include/linked_list.h"

int main() {
    Node* head = NULL;   // 空链表

    printf("开始测试单向链表...\n");
    
    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    insert_at_beginning(&head, 40);

    printf("链表内容: ");
    print_list(head);

    free_list(head);   // 释放内存
    printf("内存已释放，测试完成！\n");

    return 0;
}
