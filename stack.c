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