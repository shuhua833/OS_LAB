#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,SeekTime=0,initial;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    for(i=0;i<n;i++)
    {
        SeekTime=SeekTime+abs(a[i]-initial);
        initial=a[i];
    }
    
    printf("Total head moment is %d",SeekTime);
    return 0;
    
}
