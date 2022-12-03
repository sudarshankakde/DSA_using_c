#include <stdio.h>
#include <stdbool.h>
#define size 10
int top = -1, queue[size],head = 0;
void push();
void pop();
void show();
int main()
{
    bool loop = true;
    while (loop == true)
    {
        int choice;
        printf("\nPlese select any one.");
        printf("\n1.push\n2.pop\n3.show\n4.exit\n:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("\nClosing process.....\n");
            loop = false;
            break;
        default:
            printf("\nplease enter valid input.");
            break;
        }
    }
    return 0;
}
void push()
{
    if (top < size)
    {
        int val;
        printf("\nEnter value to add at %d position\n:-",top+2);
        scanf("%d", &val);
        top++;
        queue[top] = val;
        printf("\nelement added.\n");
    }
    else
    {
        printf("\nQueue Overflow\n");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        printf("\nvalue %d of  index %d deleted successfuly", queue[head], head+1);
        head++;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {   
        for (int i = head; i <= top; i++)
        {
            printf("\t%d:%d",i,queue[i]);
        }
    }
}