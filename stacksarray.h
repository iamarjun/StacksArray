//
// Created by arjun on 3/6/18.
//

#include <stdio.h>

#ifndef STACKSARRAY_STACKSARRAY_H
#define STACKSARRAY_STACKSARRAY_H

#endif //STACKSARRAY_STACKSARRAY_H

#define MAX_SIZE 100

int stack[MAX_SIZE];

int top = -1;

void push(int x){

    if (top == MAX_SIZE -1){

        printf("stack overflow !!");
        return;
    }

    stack[++top] = x;
}

void pop(){

    if (top == -1){

        printf("stack empty !!");
        return;
    }

    top += -1;
}

void print(){

    for (int i = 0; i <= top ; ++i) {

        printf("%d ", stack[i]);

    }

    printf("\n");
}

int isEmpty(){


    if (top == -1)

        return 0;

    else
        return 1;

}

int Top(){

    return stack[top];
}