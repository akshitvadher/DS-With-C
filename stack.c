#include<stdio.h>

int top=-1;
int a[5];
void push();
void pop();
void disply();

void main()
{
    int ch;

    printf("\n 0 for exit.");
    printf("\n 1 for push.");
    printf("\n 2 for pop.");
    printf("\n 3 for display.");
    
    do
    {
        switch (ch)
        {
        case 0:
            exit();
        case 1:
            push();
            break;
        case 2:
           pop();
           break;
        case 3:
           disply();
           break;
        }
    } while (ch!=0);
    
}

void push()
{
    if (top >= 4)
    {
        printf("\n Stack is Full.");
    }
    else
    {
        top++;
        printf("\n Enter element ");
        scanf("%d",a[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\n Stack is Empty");
    }
    else
    {
        for ( i = top; i > -1; i--)
        {
            printf("%d",a[i]);
        }
        
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
       top--;
    }
    
}
