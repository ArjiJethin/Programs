/*
#include <stdio.h>
void main()
{
    int a,b;

    //taking user input for the values a & b 
    printf("Enter a Value for a: ");
    scanf("%d", &a);
    printf("Enter a Value for b: ");
    scanf("%d", &b);

    //printing the taken values
    printf("The value of 'a' is %d \n", a);
    printf("The value of 'b' is %d \n", b);

    //Logic for swapping numbers without 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;

    //printing the swapped values
    printf("Now the swapped values of a & b are %d & %d respectively", a, b);

}

*/


/*

#include <stdio.h>
void main()
{

    float P,T,R,PTR,SI;

    //Taking user input for the values to be used
    printf("Enter the priciple amount: ");
    scanf("%f", &P);
    printf("Enter the Interest Rate: ");
    scanf("%f", &R);
    printf("Enter the Time Period in Years: ");
    scanf("%f", &T);

    //Logic for calculating interest
    PTR = P * T * R;
    SI = PTR / 100;

    //Printing the value of SI
    printf("The Simple Interest amount is %f", SI);

}

*/


/*
#include <stdio.h>
void main()
{
    int n,i,fact = 1;

    //Taking user input for the value to which the factorial is to be calculated
    printf("Enter a value: ");
    scanf("%d", &n);

    //Logic for finding factorial 
    for(i = 1; i <= n; i++)
    {
        fact *= i;  // fact = fact * i
    }

    // Printing the value of factorial for the given number
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

   // Taking user input for the coefficients for the equation
   printf("Enter a value for the coefficient of a: ");
   scanf("%f", &a);
   printf("Enter a value for the coefficient of b: ");
   scanf("%f", &b);   
   printf("Enter a value for the coefficient of c: ");
   scanf("%f", &c);
   
   //Logic for finiding the Nature of the roots of the given equation
   D = b*b - 4*a*c;

   if (D == 0)
   {

      printf("The solutions of the given qudratic eqautions is real anf equal\n");

      //Logic for finding the roots
      R1 = R2 = -b / 2*a;

      printf("The roots of the equation are %f and %f ",R1,R2);

   }
   
   else if (D > 0)
   {
      printf("The solutions of the given quadratic equation is real and unique\n");

      //Logic for finding the roots
      R1 = (-b + sqrt(D)) / 2*a;
      R2 = (-b - sqrt(D)) / 2*a;

      printf("The roots of the quadratic equations are resectively %f & %f",R1,R2);
   }

   else
   {

      printf("The solutins of the given quadratic equation is imaginary\n");

      //Logic for finding the roots
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
    
    //Taking user input for the number
    printf("\nEnter a number to check if it is a palindrome or not: ");
    scanf("%d", &a);

    og = a;   //storing the original value

    //Loop to reverse the given number
    while (a != 0)
    {
        //Logic to reverse the number by one digit each time
        rem = a % 10;
        rev = rev * 10 + rem; 

        a /= 10;
        
    }
    
    //Conditional statement to check if the no. is palindrome
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

    //Taking user input for the number and the power to raise it with
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Choose a power to raise the number with: ");
    scanf("%d", &n);

    //Storing the value of original value
    og = a;

    //Logic to raise the number by a certain power
    for (i = 1; i < n; i++)
    { 
        a *= og;
    }
    
    //Printing the result
    printf("The given number %d raised to the power of %d is %d",og,n,a);

}

*/