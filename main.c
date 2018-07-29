#include <stdio.h>
#include "stacksarray.h"

int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
    pop();
    print();
    pop();
    print();
    printf("%d ", Top());
    if (!isEmpty()){

        printf("stack empty !!");
    }
    return 0;
}