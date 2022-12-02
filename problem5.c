#include<stdio.h>
int sumxyz(int a[],int len);
int main()
{
    int ar[105];
    int n;
    int i;
    printf("HOW MANY INT U WANNA TAKE IN UR ARRAY>>");
    scanf("%d",&n);
    ar[0]=0;
    for(i=1; i<=n; i++)
    {
        printf("THE %dth INDEX OF ARRAY>>",i);
        scanf("%d",&ar[i]);
    }
    printf("the total= %d",sumxyz(ar,n));
    return 0;
}
int sumxyz(int a[],int len)
{
    int i;
    int sum=0;
    for(i=1; i<=len; i++)
    {
        if(i%2==0 &&a[i]%2==0)
            sum=sum+i+a[i];
        else if(i%2!=0 &&a[i]%2!=0)
            sum=sum+i+a[i];
    }
    return sum;
}


