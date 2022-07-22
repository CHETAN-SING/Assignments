
                                        //ASSIGNMENT 2





//1. Write a program to print unit digit of a given number
/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    printf("The last digit of %d is %d",a,a%10);
    return 0;

}
*/


//2. Write a program to print a given number without its last digit.

/*#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("The number %d without its last digt is %d",a,a/10);
    return 0;
}
*/

//3. Write a program to swap values of two int variables.

/*#include<stdio.h>
int main()
{ int a=5, b=6, c=0;
printf("The value before swapping is a=%d and b=%d",a,b);
printf("\n");
c=a;
a=b;
b=c;
printf("The value before swapping is a=%d and b=%d",a,b);

return 0;

}
*/

//4. Write a program to swap values of two int variables without using a third variable.

/*#include<stdio.h>

int main()
{   
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    printf("Value before swapping is %d and %d",a,b);
    printf("\n");
  a=a+b;
  b=a-b;
  a=a-b;
  printf("The value after swaping is %d and %d",a,b);
  return 0;
}
*/

//5. Write a program to input a three-digit number and display the sum of the digits.

/*#include<stdio.h>

int main()
{
int a;
printf("Enter the 3 digit number");
scanf("%d", &a);
printf("\n");
printf("The sum of the digits of %d is %d ", a, a/100+a/10%10+a%10);
return 0; 
}
*/

//6. Write a program which takes a character as an input and displays its ASCII code.

  
/*#include<stdio.h>

int main()
{ char a;
  printf("Enter a character");
  scanf("%c",&a);
  
  printf("The ASCII code for %c =%d",a,a);


    return 0;

}
 */

//7. Write a program to find the position of first 1 in LSB.
/*#include<stdio.h>

int main()
{
    int a,  result=0, count=0;
    
    printf("Enter the number");
    scanf("%d",&a);

  while(a!=0)
{   
    result=a&1;
    count++;

    if(result==1)
    {
        printf("The position is %d",count);
    break;
    }

     a=a>>1;
}

return 0;

}
*/

//8. Write a program to check whether the given number is even or odd using a bitwise 
//operator.
       
        

      /* #include<stdio.h>

       int main()
       {
            int a;
            printf("Enter the number");
            scanf("%d",&a );

            a=a&1;

            if(a==1)
            {
                printf("It is a odd number");
            }
             else
             {
                printf(  " It is an even number");
             }
       return 0;

       }
       */


//9. Write a program to print size of an int, a float, a char and a double type variable
 
  /*  #include<stdio.h>

    int main()
    { 
       int a=5;
       float b=6.6f;
       char c= 'w';
       double d=6.76;
       printf("The size of an int is %d",sizeof(a));
       printf("\n");
       printf("The size of an float is %d",sizeof(b));
       printf("\n");
       printf("The size of char is %d", sizeof(c));
       printf("\n");
       printf("The size of double is %d",sizeof(d));
       printf("\n");

          return 0;
    }

    */


//10. Write a program to make the last digit of a number stored in a variable as zero. 
//(Example - if x=2345 then make it x=2340)


/* #include<stdio.h>
 int main()
 {
    int a ;
    int b=0;
    printf("Enter the number");
    scanf("%d",&a);
    b=a%10;
    printf("The required number is %d",a-b);
    

    return 0;


 }
*/


//11. Write a program to input a number from the user and also input a digit. Append a 
//digit in the number and print the resulting number. (Example - number=234 and 
//digit=9 then the resulting number is 2349)

/*#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter a number");
   scanf("%d",&a);
   printf("Enter a digit");
   scanf("%d",&b);
   printf(" The entered number is %d \n The entered digit is %d \n The resulting number is %d",a,b,a*10+b);


    return 0;
}
*/


//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD.

/*   #include<stdio.h>
     int main()
{
    float a;
    printf("Enter the amount in INR");
    scanf("%f",&a);
    printf("The amount in USD is %f", a/76.23);
    return 0;



    return 0;
}
*/

//13. Write a program to take a three-digit number from the user and rotate its digits by 
//one position towards the right

/* #include<stdio.h>
int main()
{
    int a, b,c;
    printf("Enter the 3 digit number");
    scanf("%d",&a);
    c= a/10;
    b=a%10;
    printf("The required numbber after the rotation is %d",b*100+c);

    return 0;
}
*/







   