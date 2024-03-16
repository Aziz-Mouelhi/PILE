#include <stdio.h>
#include <stdlib.h>
#include"pile.h"



int main()
{
    pile *mypile;
    int popval;

mypile = CreatePile();
Push(mypile,3);
Push(mypile,23);
Push(mypile,31);
Push(mypile,10);

printf("the first element in stack :%d\n",mypile->arr_stack[mypile->top]);
printf(" the size of stack :%d\n",mypile->Size);
    popval= pop(mypile);
    printf("element %d has removed :\n",popval);
    printf(" the size of stack :%d\n",mypile->Size);
    printf("print pile\n");
    Print(mypile);
}
