#include<stdio.h>
#include<string.h>
void swap(char* x,char* y);
int main()
{
    char a1[1000];
    scanf("%s",a1);
    int len=strlen(a1);
    for(int i=1; i<=len; i++)
    {
        for(int j=0; j<len-i; j++)
        {
            if(a1[j]<a1[j+1])
            {
                swap(&a1[j],&a1[j+1]);
            }
        }
    }
    puts(a1);
    return 0;
}
void swap(char* x,char* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
