
#include <stdio.h>
#include <stdlib.h>
int stk[30];
int top=-1;
int main()
{
    while(1){
    int ch,n;
    system("cls");
    printf("\n1.PUSH \n2.POP \n3.DISPLAY\n4.EXIT\n");
    printf("\n*********************************************************\n");
    printf("enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\n\nenter number to be pushed onto the stack");
        scanf("%d",&n);
        push(n);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\ninvalid input.......Try again");
        break;
    }
        getch();

    }
getch();
}
void push(int  n)
{
    if(top==29)
    {
        printf("\nstack over flow");
        return;
    }
    top++;
    stk[top]=n;

}
void display(void)
{
        if(top==-1){
            printf("\nno element to display");
            return;
        }
    int count;
        for(count=top;count>=0;count--)
        printf("%d ",stk[count]);

}
void pop(void)
{
    if(top==-1){
        printf("\nno element to be popped");
        return;
    }
    top--;
}

