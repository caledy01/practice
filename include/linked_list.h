// include/linked_list.h
// 单向链表头文件
#pragma once

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create_node(int data);
void insert_at_beginning(Node** head, int data);
void print_list(Node* head);
void free_list(Node* head);
