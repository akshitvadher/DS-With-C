#include<stdio.h>
#include<stdlib.h>

int f=-1;
int r=-1;
int a[5];

void insert();
void display();
void del();

void main()
{
   int ch;

   do
   {
    
    printf("\n 0 -> exit.\n");
    printf("1 -> insert.\n");
    printf("2 ->display.\n");
    printf("3 ->delete.\n");

    printf("Enter your Choice :\n");  scanf("%d",&ch);

    switch (ch)
    {
    case 0:
        exit(0);
    
    case 1:
        insert();
        break;
    
    case 2:
        display();
        break;
    
    case 3:
        del();
        break;
    }

   } while (ch != 0);
   
}

void insert()
{
    if (f == 0  && r >= 4)
    {
        printf("Queue is FULL.\n");
    }
    else if (r == f-1)
    {
        printf("Queue is FULL.\n");   
    }
    else
    {
        if (f == -1  &&  r == -1)
        {
            f++;
            r++;
        }
        else if (r == 4  && f > 0)
        {
            r=0;
        }
        else
        {
            r++;
        }

        printf("Enter element :\n");    scanf("%d",&a[r]); 
    }   
}

void display()
{
    if (f == -1  && r == -1)
    {
       printf("Queue is EMPTY.\n");  
    }
    else
    {
        if (f > r)
        {
           for (int i = 0; i <= r; i++)
           {
            printf("%d",a[i]);
           }

           for (int i = f; i <= 4 ; i++)
           {
            printf("%d",a[i]);
           }
        }
        else
        {
            for (int i = f; i <= r; i++)
            {
            printf("%d",a[i]);
            }
            
        }
        
    }
    
}

void del()
{
    if (f == -1  &&  r == -1)
    {
       printf("Queue is EMPTY.\n");       
    }
    else
    {
        if (f == r)
        {
            f=-1;
            r=-1;
        }
        else if (f == 4  &&  r >= 0)
        {
            f=0;
        }
        else
        {
           f++;
        }    
    }  
}