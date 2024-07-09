//
//  LSStack.h
//  LSStack
//
//  Created by Ivan Almada on 14/04/20.
//  Copyright © 2020 Ivan Almada. All rights reserved.
//

#ifndef LSStack_h
#define LSStack_h

#include <stdio.h>
#include "Node.h"

typedef struct Stack
{
    struct Node *first;
    int count;
} Stack;

/* Node functions */
Node * node_init(int element);
void node_delete(Node *node);
/* Stack functions */
Stack * stack_init(Node *first);
bool stack_is_empty(Stack *stack);
void stack_push(Stack *, int entry);
void stack_pop(Stack *);

#endif /* LSStack_h */
