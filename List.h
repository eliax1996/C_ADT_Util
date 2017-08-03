//
//  List.h
//  ADT_APA
//
//  Created by Elia Migliore on 03/08/17.
//  Copyright © 2017 Elia Migliore. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
#include "Item.h"

typedef struct Node* HeadList;
typedef struct Node* ElementNodeList;

Item key;


struct ComplexDataList {
    /* puntatore alla funzione di comparazione dell'item */
    int (*function_comparer)(Item arg1,Item arg2);
    
};

#endif /* List_h */
