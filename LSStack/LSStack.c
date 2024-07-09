//
//  LSStack.c
//  LSStack
//
//  Created by Ivan Almada on 14/04/20.
//  Copyright © 2020 Ivan Almada. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LSStack.h"

Stack * stack_init(Node *first)
{
    Stack *result = (Stack *)malloc(sizeof(Stack));
    result->first = first;
    result->count = 1;
    return result;
}

bool stack_is_empty(Stack *stack)
{
    return (stack->count == 0);
}

void stack_push(Stack *stack, int entry)
{
    Node *new = node_init(entry);
    Node *current = stack->first;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new;
    stack->count++;
}

void stack_pop(Stack *stack)
{
    if (stack_is_empty(stack)) {
        return;
    }

    if (stack->count == 1) {
        node_delete(stack->first);
        stack->first = NULL;
        stack->count = 0;
        return;
    }

    Node *current = stack->first;
    Node *next = current->next;

    while (next->next != NULL) {
        current = next;
        next = current->next;
    }

    node_delete(next);

    current->next = NULL;
    stack->count--;
}
