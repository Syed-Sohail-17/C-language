#include<stdio.h>
void main()
{
    int n,m,i,x[100];
    float y,z;
    printf("To calculate the marks ");
    printf("\n Enter total number of subjects ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("\nenter marks in subject(%d) out of 100 ",i);
        scanf("\n%d",&x[i]);
        
    }
    for(i=1;i<=m;i++)
    {
        printf("\n the entered marks are %d",x[i]);
    }
    n=0;
    for(i=1;i<=m;i++)
    {
        n=n+x[i];
    }
    printf(" \n the total marks of all subjects are %d ,out of %d",n,m*100);
    y=n/m;
    printf("\n THE AVERAGE IS %f",y);
    
        for(i=1;i<=m;i++)
        {
           if(x[i]>=25) 
           {
                printf("\npaas");
           } 
           else {
               printf("\nFAIL");
           }
        }
    
    
}
