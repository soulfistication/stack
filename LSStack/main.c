//
//  main.c
//  LSStack
//
//  Created by Ivan Almada on 14/04/20.
//  Copyright © 2020 Ivan Almada. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include "LSStack.h"

int main(int argc, const char * argv[]) {

    Node *first = node_init(5);
    Stack *myStack = stack_init(first);

    int data = myStack->first->data;
    printf("the data in the first element of the stack is: %d\n", data);

    int count = myStack->count;
    printf("count of the stack is: %d\n", count);

    bool isEmpty = stack_is_empty(myStack);
    char *empty = isEmpty? "YES" : "NO";
    printf("stack is empty? %s\n", empty);

    stack_push(myStack, 4);
    printf("pushed element: %d\n", 4);

    stack_push(myStack, 3);
    printf("pushed element: %d\n", 3);

    stack_push(myStack, 2);
    printf("pushed element: %d\n", 2);

    stack_push(myStack, 1);
    printf("pushed element %d\n", 1);

    while (!stack_is_empty(myStack)) {
        stack_pop(myStack);
        printf("popped one element\n");
    }

    return 0;
}
