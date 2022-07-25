//1. Write a program to check whether a given number is positive or non-positive.
/* #include<stdio.h>
int main()
{
    int a; 
    printf("Enter a number");
    scanf("%d",&a);


if(a>0)
{
    printf(" positive number ");
}

  else
   {
     printf(" non positive number");
   }

printf("\n");

   return 0;
    
}*/


// 2. Write a program to check whether a given number is divisible by 5 or not

/* #include<stdio.h>

int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    
    if(a%5==0)
    {
        printf("The number is divisible by 5");
    }

     else
     {
        printf( "The number is not divisble by 5");
     }



    return 0;
}
*/

//3. Write a program to check whether a given number is an even number or an odd
//number.
   /*
    #include<stdio.h>
    int main()
    {
        int a;
        printf("Enter a number");
        scanf("%d",&a);

        if(a%2==0)
        {
            printf("The entered no is even");

        }

        else
        {
            printf("The entered no is odd");
        }

        return 0;
    }
*/


//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.

/*   #include<stdio.h>
int main()
{
    int a;
    printf("Enter the no ");
    scanf("%d",&a);

    if(a&1==1)      // not using % operator
    {
        printf( "It is a odd number");
    }
     
     else
     {
        printf("  It is an even number ");
     }



    return 0;
}
*/

//5. Write a program to check whether a given number is a three-digit number or not.

/*  #include<stdio.h>
    int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
     
     if(a/100>=1)
     {
        printf("The number is 3 digit number");
 
     }
      
      else
      { 
        printf("The number is not a 3 digit number");
      }

      return 0;

}
*/


//6. Write a program to print greater between two numbers. Print one number of both are
//the same.

/*#include<stdio.h>

int  main()
{
  int a, b;
  printf("Enter two number");
  scanf("%d %d",&a, &b);
   
   if (a>b)
   {
    printf("%d is greater than %d",a,b);
   }
    
    if(b>a)
    {
        printf("%d is greater than %d",b,a);
    }

    if(a==b)
    {
        printf("%d",a);    // choosing one number out of two when both are same
    }


    return 0;
}
*/


//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots


/*#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
*/


//8.Write a program to check whether a given year is a leap year or not.

/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
     
     if(a%400==0)
     {
        printf("The year is the leap year");
     }

     else if (a%100==0)
     {
        printf("The year is not a leap year");
     }
      
      else if (a%4==0)
      {
        printf("The year is a leap year");
      }
      
       else 
       {
        printf("The year is not a leap year");
       }

 
       return 0;
}
*/
    
 // 9. Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times.


/* #include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d",a);
    }
    
     if(b>c && b>a)
     {
        printf("%d",b);
     }

      if (c>a && c>b) 
     {
        printf("%d",c);
     }
      
     if( a==b && b==c && c==a)
     {
        printf("%d",a);
     }

     
      else if(b==a || b==c)
     {
        printf( " %d",a  );
     }

     return 0;
}
  */



//10. Write a program which takes the cost price and selling price of a product from the 
//user. Now calculate and print profit or loss percentage

/* #include<stdio.h>
 int main()
 {
    float cp, sp, pr, ls;
   



    printf("Enter the cost price and selling price");
    scanf("%f%f",&cp,&sp);
    


    if(sp>cp)
    {
        pr=sp-cp;
        printf("The profit percentange is %f",pr/cp*100);
    }
    
    else
    { 
        ls=cp-sp;
        printf("The loss percentage is %f", ls/cp*100);
    }  



    return 0;
 }
*/



//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
//out of 100 and passing marks is 33. Now display whether the candidate passed the 
//examination or failed


/*#include<stdio.h>
int main()
{
    float maths, science, english, sst, hindi;
    printf("Enter the marks out of 100 for  maths science  english  sst  hindi ");
    scanf("%f%f%f%f%f",&maths, &science,&english,&sst,&hindi);

    if( maths>=33.0 && science>=33.0 && english >=33.0 && sst>=33.0 &&hindi>=33.0 )
       {
        printf("you are pass");
       }

     else
    
{
    printf("you are fail");
}
    return 0;
}*/


//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

/*#include<stdio.h>
 int main()
 {
     char a;
     printf("Enter an alphabet");
     scanf("%c",&a);

      if (a>='A'  && a<='Z')
      {printf("The no. is uppercase");
      
      }
       else
       {
        printf("The no. is lowercase");
       }


    return 0;
 }
 */

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*#include<stdio.h>

int main()
{  int a;
  printf("Enter a number");
  scanf("%d",&a);

if(a%3==0 && a%2==0)
{
    printf("The number is divisible by 2 and 3");
}
else
   printf("The number is not divisible by 2 and 3");

    return 0;
}
*/



//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

/*#include<stdio.h>

int main()

{  int a;
printf("Enter a number");
scanf("%d",&a);

if(a%7==0 && a%3==0)
{
    printf("The number is divisible by 7 and 3");
}
else 
printf("It is not divisible by 7 and 3");


    return 0;
}
*/

//15. Write a program to check whether a given number is positive, negative or zero.
    /*  #include<stdio.h>

       int main()
       {  int a;
           printf("enter a number");
           scanf("%d",&a);

           if (a>0)
            {
                printf("the number is positive number");
            }
           else if(a==0)
            {
                printf("The number is zero");
            }
             
           else
           {
            printf("The number is negative");
           }


        return 0;
       }
       */


//16. Write a program to check whether a given character is an alphabet (uppercase), an 
//alphabet (lower case), a digit or a special character.


/*#include<stdio.h>

int main()
{   char a;
   printf("Enter a character");
   scanf("%c",&a);

    if (a>=65  &&  a<90)
    {
        printf("the character is upper case");
    }
      else if(a>=97 && a<=122)
      {
        printf("The character is lower case");
      }
      
      else if(a>=48 && a<=57)
      {
        printf("It is a digit");
      }
       

      else
      {
        printf("It is symbol");
      }



    return 0;
}
*/


//17. Write a program which takes the length of the sides of a triangle as an input. Display 
//whether the triangle is valid or not. 


/*#include<stdio.h>

int main()
{ int a,b,c;
printf("Enter the sides of the trangle");
scanf("%d%d%d",&a,&b,&c);
   
   if (a+b<=c   &&  a+c<=b && b+c<=a)
   {
    printf("it is not triangle");
   }

else if 

 {
    printf("It is a trainle");
 }






    return 0;
}
*/
//18.Write a program which takes the month number as an input and display number of 
//days in that month
/*#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number");

    scanf("%d",&a);

    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("The month has 31 days");
    }
    

else if (a==4 || a==6 || a==9 ||a==11)
{
    printf("the month has 30 days");
} 

else if (a==2)
{
    printf("The month has 28/29 days");
}
    return 0;
}
*/