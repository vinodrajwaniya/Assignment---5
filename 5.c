#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=(n-1);i>=0;i--)
    {   
        printf("%d\n",(i*2)+1);
    }
    return 0;
}