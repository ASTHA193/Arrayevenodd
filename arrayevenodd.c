#include<stdio.h>
void main()
{
    int a[10],i,n,en=0,k=0;
    printf( "\n enter the no in array\n");
    for(i=0;i<=9;i++)
        scanf("%d" ,&a[i]);

    printf("\n display elements of array\n");
    for(i=0;i<=9;i++)
        printf("%d  ",a[i]);
    printf("\n Even Elements\n");
    for(i=0;i<=9;i++)
    {
        if (a[i]%2==0){
            en++;
            printf("%d ",a[i]);
        }
    }
    printf("\n Odd Elements\n");
    for(i=0;i<=9;i++)
    {
        if (a[i]%2==1){
            k++;
            printf("%d ",a[i]);
        }
    }
    printf("\nTOtal number of even=%d",en);
    printf("\nTOtal number of odd=%d",k);

}
