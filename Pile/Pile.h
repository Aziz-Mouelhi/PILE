#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
#define Max 100 /* longueur maximale d'une pile */

typedef struct pile{
int top;
int arr_stack[Max];
int Size;

}pile;


/////creare functoin////
pile *CreatePile(){
        pile *pointer;
        pointer = malloc(sizeof(pile));
        pointer->top = -1 ;
        pointer->Size = 0 ;
        return pointer;
}
///////push function////:
void Push(pile *Pointer,int value){
        if(Pointer->Size == Max)
            {
                printf("insufficient space");
            }
        else
        {
            Pointer->top++;
            Pointer->arr_stack[Pointer->top]=value;
            Pointer->Size++;
        }
}
/////pop function////////////
int pop(pile *Pointer){
    if(Pointer->Size == 0){
        printf("The Stack Already Epmty");
    }else{
        int val ;
        val = Pointer->arr_stack[Pointer->top];
        Pointer->arr_stack[Pointer->top]=0;
        Pointer->top--;
        Pointer->Size--;
        return val;
    }
}
void Print(pile *Pointer){
    if(IsFull(*Pointer)){
        printf("Pile is empty :\n");
    }else{
        int i;
        for(i=Pointer->top;i>=0 ;i--){
            printf("Element :%d\n",Pointer->arr_stack[i]);
        }
    }
}
    int IsFull(pile *pointer){
        return pointer->Size==Max;
    }
#endif // PILE_H_INCLUDED
