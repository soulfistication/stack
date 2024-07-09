//
//  LinkedList.c
//  LSStack
//
//  Created by Ivan Almada on 7/8/24.
//  Copyright © 2024 Ivan Almada. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkedList *list_init(Node *first) {
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    list->element = first;
    list->element->next = NULL;
    list->count = 1;
    return list;
}

void list_add(LinkedList *list, int entry) {
    Node *next = node_init(entry);
    next->next = NULL;

    if (list->count == 1) {
        list->element->next = next;
        list->count = 2;
        return;
    }

    Node *last = list->element->next;

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = next;
}

void printList(LinkedList *list) {
    printElement(list->element);

    Node *next = list->element->next;

    while (next != NULL) {
        printElement(next);
        next = next->next;
    }
}

void printElement(Node *element) {
    printf("%d\n", element->data);
}