#include<stdio.h>
void main()
{
     int i,j,n,m,a[100][100],sum,b[100];
     int x;
     printf("TO CALCULATE SUM OF ALL ELEMENTS IN ARRAYS ");
     printf("\nCHOOSE AN OPTION \n1.1-DIMENSION \n2.MULTI-DIMENSION ");
     scanf("\n%d",&x);
     if(x==1)
     {
         printf("ENTER ARRAY SIZE  ");
        scanf("%d",&m);
        printf("ENTER ARRAY ELEMENTS  ");
        for(i=0;i<m;i++)
        {
            scanf("\n%d",&b[i]);
            
        }
        printf("THE ELEMENTS ARE ");
        for(i=0;i<m;i++)
        {
            printf("\n%d",b[i]);
            
        }
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+b[i];
            
        }
        printf("\nTHE SUM OF ALL ELEMNETS ARE %d",sum);
     }
     else if(x==2)
     {
          printf("ENTER TOTAL NUMBER FOR ROWS");
            scanf("%d",&m);
            printf("ENTER TOTAL NUMBER FOR COLOUMNS ");
            scanf("%d",&n);
            printf("ENTER ARRAY ELEMENTS  ");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("\n%d",&a[i][j]);    
                    
                }
                
                
            }
            printf(" ARRAY ELEMENTS  ARE \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                   printf("\t%d",a[i][j]);    
                    
                }
                
                printf("\n");
                
            }
            
            
            sum=0;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    sum=sum+a[i][j];
                    
                }
                
                
            }
            printf("\nTHE SUM OF ALL ELEMNETS ARE %d",sum);
            
     }
     else
     {
         printf("ENTER AN VALID OPTION ONLY ");
     }
}
