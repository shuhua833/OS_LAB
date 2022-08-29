#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,seektime=0,initial,count=0;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
   
    while(count!=n)
    {
        int min=1000,diff,index;
        for(i=0;i<n;i++)
        {
           diff=abs(a[i]-initial);
           if(min>diff)
           {
               min=diff;
               index=i;
           }
           
        }
        seektime=seektime+min;
        initial=a[index];
        a[index]=1000;
        count++;
    }
    
    printf("Total head movement is %d",seektime);
    return 0;
}
