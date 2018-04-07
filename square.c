/* Xida Ren
 * CS304
 * This program computes squares using addition, subtraction, and xor
 * operations.
 */
#include <stdio.h>
int squareadd(int i){
    int j;
    int ret = 0;
    for(j = 0; j < i; j++){
        ret += i;
    }
    return ret;
}

int squarebit(int i){
    // first, get bits of i
    if(i < 0){
        return squarebit(-i);
    }
    int ret = 0;
    int bit = 1;
    int mult = i;
    while(bit <= i){
        if(bit & i){
            ret += mult;
        }
        bit += bit;
        mult += mult;
    }

    return ret;
}

int main(){
    int i = 1;
    printf("i\tsq_add\tsq_bit\n");
    for(i = 0; i < 21; i=i+1){
        printf("%d\t%d\t%d\n", i, squareadd(i), squarebit(i));
    }
}