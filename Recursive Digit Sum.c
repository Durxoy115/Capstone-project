#include<stdio.h>
int sum(int n)
{   int x;
    if(n==0)
        return 0;
x=n%10 + sum(n/10);
return x;

}
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n>=10){
        x=sum(n);
        n=x;
    }
    printf("%d",sum(n));

}
