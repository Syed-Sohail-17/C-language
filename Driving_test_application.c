#include<stdio.h>
void main()
{
    char a[35],b[35],c[35],e[35];
   
    int j,k,l;
    long int i;
    printf("ENTER YOUr NAME ");
    scanf("%s",&a);
    printf("\nENTER YOUr FATHERS NAME ");
    scanf("\n%s",&b);
    printf("\nENTER YOUr  MOTHER'S NAME ");
    scanf("\n%s",&c);
    printf("\nENTER YOUr ADHAAR NUMBER ");
    scanf("\n%ld",&i);
    printf("\nENTER YOUr Date of birth,month,year ");
    scanf("\n%d \t%s \t%d \n",&j,&e,&k);
    
    if(k<=2003)
    {
        printf("\nYou are eligible to apply ");
        printf("\nCHECK UR DETAILS \n%s,\n%s,\n%s,\n%d,\n%d\t%s\t%d",a,b,c,i,j,e,k);
    }
    else{
         printf("\nYou are  not eligible to apply ");
    }
}
