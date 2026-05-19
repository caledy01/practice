// src/linked_list.c
// 单向链表具体实现

#include <stdio.h>
#include <stdlib.h>
#include "../include/linked_list.h"

// 创建新节点
Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("内存分配失败！\n");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// 在链表头部插入节点
void insert_at_beginning(Node** head, int data) {
    Node* new_node = create_node(data);
    if (new_node == NULL) return;
    
    new_node->next = *head;
    *head = new_node;
}

// 打印整个链表
void print_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 释放链表内存
void free_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}
