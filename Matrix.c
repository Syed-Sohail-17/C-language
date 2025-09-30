#include<stdio.h>
void main()
{
    int key;
    //ELEMENTS OF OPTION 1 
    int a[100],b[100],c[100];
    int m,n;
    //ELEMENTS OF OPTION 2 
    int x[100][100],y[100][100],z[100][100];
    int p,q,r,s;
    int sum=0;
    int k;
    //LOOPS
    int i,j;
    printf("MATRIX CALCULATOR ");
    printf("\nCHOOSE AN OPTION \n1.MATRIX CALCULATOR FOR 1-DIMENSION \n2.MATRIX CALCULATOR FOR MULTI-DIMENSION \n");
    scanf("%d",&key);
    if(key==1)
    {
                   printf("\nMATRIX CALCULATOR FOR 1-DIMENSION  ");
                    printf("\nENTER THE SIZE OF 1ST ARRAY  ");
                    scanf("%d",&m);
                    printf("\nENTER THE ELEMNETS OF 1ST ARRAY  ");
                    for(i=0;i<m;i++)
                        {
                            scanf("\n%d",&a[i]);
                        }
                    printf("\nENTER THE SIZE OF 2ND ARRAY  ");
                    scanf("%d",&n);
                     printf("\nENTER THE ELEMNETS OF 2ND ARRAY  ");
                    for(i=0;i<n;i++)
                        {
                            scanf("\n%d",&b[i]);
                        }
                        
                    printf("\n THE ELEMNETS OF 1ST ARRAY are   ");
                    for(i=0;i<m;i++)
                        {
                            printf("\n%d",a[i]);
                        }
                    printf("\n THE ELEMNETS OF 2ND ARRAY are   ");
                    for(i=0;i<n;i++)
                        {
                            printf("\n%d",b[i]);
                        }
                    
                    if(n==m)
                    {   printf("\n THE ADDITION OF TWO MATRIX IS ");
                       for(i=0;i<m;i++)
                       {
                           c[i]=a[i]+b[i];
                           printf("\n%d",c[i]);
                       }
                        printf("\n THE SUBTRACTION OF TWO MATRIX IS ");
                       for(i=0;i<m;i++)
                       {
                           c[i]=a[i]-b[i];
                           printf("\n%d",c[i]);
                       }
                        printf("\n THE MULTIPLICATION OF TWO MATRIX IS ");
                       for(i=0;i<m;i++)
                       {
                           c[i]=a[i]*b[i];
                           printf("\n%d",c[i]);
                       }
                        printf("\n THE DIVISON  OF TWO MATRIX IS ");
                       for(i=0;i<m;i++)
                       {
                           c[i]=a[i]/b[i];
                           printf("\n%d",c[i]);
                       }
                    }
                    else 
                    {
                       printf("\nTHE OPERATIONS ARE NOT POSSIBLE BECAUSE THEY'RE UNEQUAL DIMENSION ");
                    }
        
        
    }
    else if(key==2)
    {
              printf("\nMATRIX CALCULATOR FOR MULTI-DIMENSION ");
            printf("\nENTER THE ROW SIZE OF 1ST MATRIX ");
            scanf("%d",&p);
            printf("\nENTER THE COLOUMN SIZE OF 1ST MATRIX ");
            scanf("%d",&q);
            printf("\nENTER THE ELEMENTS  OF 1ST MATRIX ");
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    scanf("\t%d",&x[i][j]);
                }
            }
            printf("\nENTER THE ROW SIZE OF 2ND MATRIX ");
            scanf("%d",&r);
            printf("\nENTER THE COLOUMN SIZE OF 2ND MATRIX ");
            scanf("%d",&s);
            printf("\nENTER THE ELEMENTS  OF 2ND MATRIX ");
            for(i=0;i<r;i++)
            {
                for(j=0;j<s;j++)
                {
                    scanf("\t%d",&y[i][j]);
                }
            }
            printf("\n THE ELEMENTS  OF 1ST MATRIX ARE ");
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("\t%d",x[i][j]);
                }
                printf("\n");
            }
            printf("\n THE ELEMENTS  OF 2ND MATRIX ARE ");
            for(i=0;i<r;i++)
            {
                for(j=0;j<s;j++)
                {
                    printf("\t%d",y[i][j]);
                }
                printf("\n");
            }
            if(p==r && q==s)
            {
                printf("THE ADDITION OF TWO MATRIX ARE ");
                for(i=0;i<r;i++)
                 {
                     for(j=0;j<s;j++)
                        {
                           z[i][j]=x[i][j]+y[i][j];
                           printf("\t%d",z[i][j]);
                         }
                        printf("\n");
                 }
                printf("THE SUBTRACTION OF TWO MATRIX ARE ");
                for(i=0;i<r;i++)
                 {
                     for(j=0;j<s;j++)
                        {
                           z[i][j]=x[i][j]-y[i][j];
                           printf("\t%d",z[i][j]);
                         }
                        printf("\n");
                 }
                 printf("THE MULTIPLICATION OF TWO MATRIX ARE ");
                if(q==r)
                {
                    //no.of rows of first MATRIX
                    //no.of coloums of second MATRIX
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<s;j++)
                        {
                            for(k=0;k<p;k++)
                            {
                                sum=sum+x[i][k]*y[k][j];
                                z[i][j]=sum;
                                
                            }
                        }
                    }
                    
                    for(i=0;i<r;i++)
                     {
                         for(j=0;j<s;j++)
                            {
                               
                               printf("\t%d",z[i][j]);
                             }
                            printf("\n");
                     }
                }
                
                else
                {
                    printf("MULTIPLICATION ISN'T POSSIBLE ");
                }
                 printf("THE DIVISION OF TWO MATRIX ARE ");
                for(i=0;i<r;i++)
                 {
                     for(j=0;j<s;j++)
                        {
                           z[i][j]=x[i][j]/y[i][j];
                           printf("\t%d",z[i][j]);
                         }
                        printf("\n");
                 }
            }
            else
            {
               printf("\nTHE OPERATIONS ARE NOT POSSIBLE BECAUSE THEY'RE UNEQUAL DIMENSION ");
                if(q==r)
                {
                    //no.of rows of first MATRIX
                    //no.of coloums of second MATRIX
                    printf("\n ONLY MULTIPLICATION IS POSSIBLE ");
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<s;j++)
                        {
                            for(k=0;k<p;k++)
                            {
                                sum=sum+x[i][k]*y[k][j];
                                z[i][j]=sum;
                                
                            }
                        }
                    }
                    
                    for(i=0;i<r;i++)
                     {
                         for(j=0;j<s;j++)
                            {
                               
                               printf("\t%d",z[i][j]);
                             }
                            printf("\n");
                     }
                }
                
                else
                {
                    printf("\nTHE OPERATIONS ARE NOT POSSIBLE BECAUSE THEY'RE UNEQUAL DIMENSION ");
                }
            }
        
        
    }
    else
    {
       printf("\n ENTER AN VALID OPTION ONLY ");
    }
    
    
    
    
}
