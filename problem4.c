#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    int len1;
    if((n/4)%2==0)
    {
        len1=n/4;
    }
    else
    {
        len1=(n/4)-1;
    }
    int len2=len1-2;
//    int len3=len1-2;
    //int sum1=0;
    int sum2=0;
//    int sum3=0;
//    for(int i=len1; i<=len1+6; i+=2)
//    {
//        sum1=sum1+i;
//    }
    for(int i=len2; i<=len2+6; i+=2)
    {
        sum2=sum2+i;
    }
//    for(int i=len3; i<=len3+6; i+=2)
//    {
//        sum3=sum3+i;
//    }
//    printf("\nsum1= %d",sum1);
//    printf("\nsum2= %d",sum2);
//    printf("\nsum3= %d",sum3);
//    if(n==sum2)
//    {
//        printf("%d + %d + %d + %d = %d",len1,len1+2,len1+4,len1+6,sum1);
//    }
     if(n==sum2)
    {
        printf("%d + %d + %d + %d = %d",len2,len2+2,len2+4,len2+6,sum2);
    }
//    else if(n==sum3)
//    {
//        printf("%d + %d + %d + %d = %d",len3,len3+2,len3+4,len3+6,sum3);
//    }
    else
    {
        printf("soryy did not match!!");
    }
    return 0;
}
