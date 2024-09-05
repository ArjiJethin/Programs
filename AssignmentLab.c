/*
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter a Value for a: ");
    scanf("%d", &a);
    printf("Enter a Value for b: ");
    scanf("%d", &b);
    printf("The value of 'a' is %d \n", a);
    printf("The value of 'b' is %d \n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Now the swapped values of a & b are %d & %d respectively", a, b);
}

*/


/*

#include <stdio.h>
void main()
{

    float P,T,R,PTR,SI;
    printf("Enter the priciple amount: ");
    scanf("%f", &P);
    printf("Enter the Interest Rate: ");
    scanf("%f", &R);
    printf("Enter the Time Period in Years: ");
    scanf("%f", &T);
    PTR = P * T * R;
    SI = PTR / 100;
    printf("The Simple Interest amount is %f", SI);

}

*/


/*
#include <stdio.h>
void main()
{
    int n,i,fact = 1;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial for the given value is %d", fact);

}

*/


/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
   float a, b, c, D, R1, R2, Real, Img;
   printf("Enter a value for the coefficient of a: ");
   scanf("%f", &a);
   printf("Enter a value for the coefficient of b: ");
   scanf("%f", &b);   
   printf("Enter a value for the coefficient of c: ");
   scanf("%f", &c);

   D = b*b - 4*a*c;

   if (D == 0)
   {

      printf("The solutions of the given qudratic eqautions is real anf equal\n");
      R1 = R2 = -b / 2*a;
      printf("The roots of the equation are %f and %f ",R1,R2);

   }
   
   else if (D > 0)
   {
      printf("The solutions of the given quadratic equation is real and unique\n");
      R1 = (-b + sqrt(D)) / 2*a;
      R2 = (-b - sqrt(D)) / 2*a;
      printf("The roots of the quadratic equations are resectively %f & %f",R1,R2);
   }

   else
   {

      printf("The solutins of the given quadratic equation is imaginary\n");
      Real = -b / (2*a);
      Img = sqrt(-D)/ (2*a);
      printf("The roots of the given quadratic equation are %f+%fi & %f-%fi respectively",Real,Img,Real,Img);

   }

}

*/

/*

#include <stdio.h>
void main()
{
    int a, rem, og, rev = 0;
    
    printf("\nEnter a number to check if it is a palindrome or not: ");
    scanf("%d", &a);
    og = a;

    while (a != 0)
    {
        rem = a % 10;
        rev = rev * 10 + rem; 
        a /= 10;
        
    }
    
    if ( og == rev)
    {
        printf("The given number %d is a palindrome\n", og);
    }
    else
    {
        printf("The given number %d is not a palindrome\n", og);
    }
}

*/


/*

#include <stdio.h>
void main()
{
    int a,n,i,og;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Choose a power to raise the number with: ");
    scanf("%d", &n);
    og = a;

    for (i = 1; i < n; i++)
    { 
        a *= og;
    }

    printf("The given number %d raised to the power of %d is %d",og,n,a);

}

*/