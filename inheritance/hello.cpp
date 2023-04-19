#include<stdio.h>
int fib(int);
int main()
{
    int n,i;
    printf("Enter the value: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
}
int fib(int i)   
{
    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return (fib(i-1)+fib(i-2));
}


// #include<stdio.h>
// int main()
// {
//     int n,m,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         m=n%10;
//         sum=sum+m;
//         n=n/10;
//     }
//     printf("Sum is: %d",sum);
//     return 0;
// }