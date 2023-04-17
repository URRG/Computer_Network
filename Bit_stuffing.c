#include <stdio.h>

int main()
{
    int n,i=0,j,x,pos;
    printf("Enter the size of bit strip\n");
    scanf("%d",&n);
    int a[n];
    for(;i<=n;i++){
        printf("enter the value 0 or 1 - ");
        scanf("%d",&j);
        a[i]=j;
    }
    
    for(i=0;i<=n;i++){
        printf("[%d]",a[i]);
    }
   
