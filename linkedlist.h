#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#ifndef NULL
#define NULL ((void*) 0)
#endif

struct ll_node {
    int val;
    struct ll_node* next;
};
typedef struct ll_node ll_node;

struct linked_list {
    void (*add_to_head) (struct linked_list*, int);
    void (*add_to_tail) (struct linked_list*, int);
    ll_node* head;
    ll_node* tail;
    int size;
};
typedef struct linked_list linked_list;

linked_list* new_linked_list(void);
void ll_init_add(linked_list* list, int val);
void ll_add_to_head(linked_list* list, int val);
void ll_add_to_tail(linked_list* list, int val);
void ll_print(linked_list* list);
void ll_delete(linked_list* list);
#endif