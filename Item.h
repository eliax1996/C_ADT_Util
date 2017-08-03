//
//  Item.c
//  ADT_APA
//
//  Created by Elia Migliore on 03/08/17.
//  Copyright © 2017 Elia Migliore. All rights reserved.
//

/*
 
 This module is an abstraction of an Data that can be also Complex,
 for more long program this module can be used like a base for other
 module that can specify better the data that this module can contain,
 but at the same time this module offer the opportunity of a low common level
 of the complex data structure for example for building algoritm for sorting
 or order or display the elements even if the implementation are different
 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Item* Item;
typedef void* Key;

/*
 TODO: you can override this and the other function
 that are needed to make working this code;
 an example of use of this code can be:
 
 
 #include <stdio.h>
 #include "Item.h"
 
 struct Item {
 int key;
 char* value;
 };
 
 Item new_item(char* name,int key){
 Item it = (void*) malloc(sizeof(struct Item));
 it.key = key;
 it.value = name;
 
 return it;
 }
 
 void destroy_item(Item item){
 free(item);
 return;
 }
 
 char* get_item_value(Item item){
 return (((struct Item)(*item)).value);
 }
 
 int get_item_key(Item item){
 return (((struct Item)(*item)).key);
 }
 
 int function_comparer_item(Item arg1,Item arg2){
 return get_item_key(arg1)-get_item_key(arg2);
 }
 
 void item_show(Item item){
 print("%d %s",get_item_key(item),get_item_value(item));
 }
 
 int main(int argc,char* argv[]){
 
 
 }
 
 */

struct Item {
    int key;
    char* value;
};

Item new_item(char* name,int key){
    Item it = (void*) malloc(sizeof(struct Item));
    it.key = key;
    it.value = name;
    
    return it;
}

void destroy_item(Item item){
    free(item);
    return;
}

char* get_item_value(Item item){
    return (((struct Item)(*item)).value);
}

int get_item_key(Item item){
    return (((struct Item)(*item)).key);
}

int function_comparer_item(Item arg1,Item arg2){
    return get_item_key(arg1)-get_item_key(arg2);
}

void item_show(Item item){
    print("%d %s",get_item_key(item),get_item_value(item));
}
