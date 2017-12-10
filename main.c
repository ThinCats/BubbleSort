#include <stdio.h>

int * bubble(int * a);

void swap(int * a, int * b);

int main(void)
{
    int a[10];
    int out[10];

    while(scanf("%d", &a[0]) != EOF)
    {
        int i;
        for(i=1;i<10;i++)
            scanf("%d", &a[i]);

        bubble(a);

        for(i=0;i<10;i++)
        {
            printf("%d", a[i]);

            if(i != 9)
                printf("->");

        }

        putchar('\n');
    }
}

int * bubble(int * a)
{
    int i, j;

    //int * head = a;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(*(a+j) > *(a+j + 1))
                swap(a+j, a+j+1);
        }
    }

    return a;
}

void swap(int *a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
