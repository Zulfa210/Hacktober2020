#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("1. Addition of two matrices\n");
    printf("2. Multiplication of two matrices\n");
	printf("Choose any one option listed above!\n");
	scanf("%d",&choice);
	switch(choice)
	{
	    	case 1:
            {

                int a[3][3] , b[3][3] , i , j , c[3][3];
                printf("Enter 9 elements of 1st matrix\n");
                for(i=0;i<=2;i++)
                for(j=0;j<=2;j++)
                scanf("%d",&a[i][j]);
                printf("Enter 9 elements of 2nd matrix\n");
                for(i=0;i<=2;i++)
                for(j=0;j<=2;j++)
                scanf("%d",&b[i][j]);
                printf("Required matrix is = \n");
                for(i=0;i<=2;i++)
                {
                for(j=0;j<=2;j++)
            {
                c[i][j]=a[i][j] + b[i][j];
                printf("%d ",c[i][j]);
            }
        printf("\n");
                }
return 0;
            }


            case 2:
                {
                 int a[3][3] , b[3][3] , i , j , k , sum , c[3][3];
                printf("Enter 9 elements of 1st matrix for multiplication\n");
                for(i=0;i<=2;i++)
                {
                    for(j=0;j<=2;j++)
                    scanf("%d",&a[i][j]);
                }
                 printf("Enter 9 elements of 2nd matrix for multiplication\n");
                for(i=0;i<=2;i++)
                {
                    for(j=0;j<=2;j++)
                    scanf("%d",&b[i][j]);
                }
                for(i=0;i<=2;i++)
                {
                   for(j=0;j<=2;j++)
                   {
                       sum=0;
                       for(k=0;k<=2;k++)
                       {
                        sum=sum+a[i][k]*b[k][j];
                        c[i][j]=sum;
                       }
                   }
                }
                printf("The product of entered matrix is : \n",a[i][j],b[i][j]);
                 for(i=0;i<=2;i++)
                {
                   for(j=0;j<=2;j++)
                   {
                       printf("%d ",c[i][j]);
                   } printf("\n");
                }

                    return 0;
                }


	}
}

