//
//  Node.h
//  LSStack
//
//  Created by Ivan Almada on 7/8/24.
//  Copyright © 2024 Ivan Almada. All rights reserved.
//

#ifndef Node_h
#define Node_h

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

/* Node functions */
Node * node_init(int element);
void node_delete(Node *node);

#endif /* Node_h */
