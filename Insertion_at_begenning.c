#include<stdio.h>
int main()
{
    int arr[10],size,data,i;
    printf("Enter the siize of array :");
    scanf("%d",&size);
    printf("Enter the data you want to insert :");
    scanf("%d",&data);
    printf("Enter the array\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    for(i=size-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=data;
    printf("The new array is below\n");
    printf("The array becomes\n");
    for(i=0;i<=size;i++)
    printf("%d\t",arr[i]);
}
