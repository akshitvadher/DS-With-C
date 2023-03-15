#include <stdio.h>
#include <stdlib.h>

int f = -1;
int r = -1;
int a[5];

void insert();
void display();
void del();

void main()
{
    int ch;

    do
    {
        printf("\n 0 -> exit.");
        printf("\n 1 -> insert.");
        printf("\n 2 -> display.");
        printf("\n 3 -> del.");

        printf("\n Enter choice :");
        scanf("%d", &ch);

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
    if (r >= 4)
    {
        printf("\n Queue is FULL");
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f++;
            r++;
        }
        else
        {
            r++;
        }

        printf("\n Enter Elemenet :");
        scanf("%d", &a[r]);
    }
}

void display()
{
    if (f == -1 && r == -1)
    {
        printf("\n Queue is EMPTY");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("\n %d", a[i]);
        }
    }
}

void del()
{
    if (f == -1 && r == -1)
    {
        printf("\n Queue is EMPTY ");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}