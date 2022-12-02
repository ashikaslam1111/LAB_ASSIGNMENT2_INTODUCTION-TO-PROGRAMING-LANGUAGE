#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    int* ptrx=&x;
    int* ptry=&y;
    printf("\n%d",*ptrx);
    printf("\n%d\n",*ptry);
    return 0;
}
