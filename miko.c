//iferati22
#include <stdio.h>
#include <stdlib.h>

void read(int n,int arr1[]);
int max(int n,int arr1[]);
int min(int n,int arr1[]);
int main()
{
    int n,maximum,minimum,sum=0;
    scanf("%d", &n);
    int arr1[10000];
    read(n,arr1);
    maximum=max(n,arr1);
    minimum=min(n,arr1);
    sum=maximum-minimum;
    if(sum<0)
    {
        sum=sum*(-1);
    }
        printf("%d", sum);
    return 0;
}
void read(int n,int arr1[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
}
int max(int n,int arr1[])
{
    int max=-10000;
    for(int i=0; i<n; i++)
    {

        if(arr1[i]>max)
        {
            max=arr1[i];
        }

    }
    return max;
}

int min(int n,int arr1[])
{
    int min=10000;
    for(int i=0; i<n; i++)
    {
        if(arr1[i]<min)
        {
            min=arr1[i];
        }

    }
    return min;
}