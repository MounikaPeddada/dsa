#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        int num=1;
        for(j=0;j<=i;j++)
        {    
            printf("%d ",num);
            num=num*(i-j/j+1);
            //ncr+1=ncr*(n-r)/(r+1)  yaha pe n=i,r=j ek iteration of ts for loop will give a row
        }
        printf("\n");
        //next row ke liye num firse 1 se start hoga
    }
    return 0;
}
