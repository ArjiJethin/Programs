#include<stdio.h>


int add(int A, int B)
{
    /*int A, B;
    printf("Enter value for A:"); 
    scanf("%d",&A);
    printf("Enter value for B:");
    scanf("%d",&B);*/
    return A+B;
}


int sub(int A,int B)
{
    /*int A, B;
    printf("Enter value for A:"); 
    scanf("%d",&A);
    printf("Enter value for B:");
    scanf("%d",&B);*/
    return A-B;
}



int mul(int A, int B)
{
    /*int A, B;
    printf("Enter value for A:"); 
    scanf("%d",&A);
    printf("Enter value for B:");
    scanf("%d",&B);*/
    return A*B;
}


int div(int A, int B)
{
    /*int A, B;
    printf("Enter value for A:"); 
    scanf("%d",&A);
    printf("Enter value for B:");
    scanf("%d",&B);*/
    return A/B;
}

void main()
{
    int A,B,Op;
    printf("Enter value for A: ");
    scanf("%d",&A);
    printf("Enter value for B: ");
    scanf("%d",&B);
    printf("Enter operation Number \n1)Additon\n2)Subtraction\n3)Multiplication\n4)Division\n Operation Number: ");
    scanf("%d",&Op);
    switch(Op)
    {
        case 1:
            printf("Addition: %d\n",add(A,B));
            break;
        case 2:
            printf("Subtraction: %d\n",sub(A,B));
            break;
        case 3:
            printf("Multiplication: %d\n",mul(A,B));
            break;
        case 4:
            printf("Division: %d\n",div(A,B));
            break;
        default:
            printf("Invalid operation\n");
            break;
    }


}