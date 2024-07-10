//
//  LinkedList.h
//  LSStack
//
//  Created by Ivan Almada on 7/8/24.
//  Copyright © 2024 Ivan Almada. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

typedef struct LinkedList {
    struct Node *element;
    int count;
} LinkedList;

LinkedList *list_init(Node *first);
void list_add(LinkedList *list, int entry);
bool list_is_empty(LinkedList *list);

void printElement(Node *element);
void printList(LinkedList *list);
void deleteList(LinkedList *list);

void list_reverse(LinkedList *list);

#endif /* LinkedList_h */
