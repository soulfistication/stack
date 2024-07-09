//
//  Node.c
//  LSStack
//
//  Created by Ivan Almada on 7/8/24.
//  Copyright © 2024 Ivan Almada. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

Node * node_init(int element)
{
    Node *result = (Node *)malloc(sizeof(Node));
    result->data = element;
    result->next = NULL;
    return result;
}

void node_delete(Node *node)
{
    if (node == NULL) {
        return;
    }
    node->data = 0;
    node->next = NULL;
    free(node);
}
