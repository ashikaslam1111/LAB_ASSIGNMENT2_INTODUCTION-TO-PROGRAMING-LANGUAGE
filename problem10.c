#include<stdio.h>
void favnum(int* arr,int n);
int main()
{
    int ar[105];
    int n;
    int i;
    int count=0;
    printf("HOW MANY INT U WANNA TAKE IN UR ARRAY>>");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("THE %dth INDEX OF ARRAY>>",i);
        scanf("%d",&ar[i]);
    }
    favnum(&ar,n);
    return 0;
}
void favnum(int* arr,int n)
{
    int sum = 0,count=0;
    for (int i = 0; i<n; i++)
    {
        while(arr[i]!=0)
        {
            int digit = arr[i]%10;
            if (digit==7)
            {
                count++;
                break;
            }
            arr[i]/=10;
        }
    }
    if(n%2!=0)
    {
        n=n+1;
    }
    if(count>=n/2)
    {
        printf("\nBEAUTIFUL");
    }
    else
    {
        printf("\nUGLY");
    }
}
