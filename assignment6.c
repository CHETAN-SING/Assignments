// 1. Write a program to calculate sum of first N natural numbers



/*#include<stdio.h>
int main()
{
    int a;
     int i;
 int sum=0;
    printf("enter a number");
    scanf("%d",&a);
    for(int i=0; i<=a; i++)
    { 
        sum=sum+i; 
    }
        printf("%d ",sum);
        

    return 0;
}
/*






   //2. Write a program to calculate sum of first N even natural numbers

 /*#include<stdio.h>
 int main()
 {
     int i; 
     int a;
     int sum=0;
     printf("Enter the number");
     scanf("%d",&a);

     for(int i=0; i<=a; i++)
     {
        { if(i%2==0)
        sum=sum+i;
        }
         
       }
        printf("%d",sum);
       

    return 0;
 }*/

//3. Write a program to calculate sum of first N odd natural numbers.

/*#include<stdio.h>
int main()
{   
    int i;
    int a;
    int sum=0;

    printf("Enter the number");
    scanf("%d",&a);
     
    for(int i=0; i<=a; i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }


    printf("%d",sum);

    return 0;
}

*/

//4. Write a program to calculate sum of squares of first N natural numbers
/*#include<stdio.h>
int main()
  
     {
    
       int i;
       int a;
       int sum=0;
       printf("Enter a number");
       scanf("%d",&a);

      for(int i=0; i<=a; i++)
      {  
        sum=sum+i*i;

      }

     printf("%d",sum);

    return 0;
}
*/
//5. Write a program to calculate sum of cubes of first N natural numbers
/*#include<stdio.h>
int main()
{  int i;
   int a;
   int sum=0;
    printf(" Enter a number");
    scanf("%d",&a);

    for(int i=0; i<=a; i++)
    {
      sum=sum+i*i*i;

    }

      printf("%d", sum);


    return 0;
}
*/
//6. Write a program to calculate factorial of a number
/*#include<stdio.h>

int main()
{
   int i;
   int a;
   int fact=1;
    printf("Enter the number");
    scanf("%d",&a);
   
     for(int i=1; i<=a; i++)
        
        {
            fact= (fact*i);
        }
    
         printf("%d",fact);

    return 0;
}
*/

//7. Write a program to count digits in a given number

/*#include <stdio.h>  
int main()  
{  
   int n;   
   int count=0;   
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d",count);  
    return 0;  
}  
*/
// 8. Write a program to check whether a given number is a Prime number or
// not
 
 /*#include<stdio.h>
 int main()

{ 
    int i;
    int a;
    int count=0;
    printf("Enter the number");
    scanf("%d",&i);

 for(int a=2; a<=(i/2); a++)
   
   if(i%a==0)
   {
    count++;
    break; 

   }
     if (count==1)
     {
        printf("The entered no is not prime number");
     }

     else
     {
        printf("The entered no is a prime number");
     }
    return 0;
}

*/


//9. Write a program to calculate LCM of two numbers


/*#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}*/
//10. Write a program to reverse a given number*/


/*#include<stdio.h>
int main()
{
   int i;
   int rev=0;
   int rem=0;
   printf("Enter a number");
   scanf(" %d",&i);

   while(i!=0)
   {
     rem= i%10;
   rev = rev*10 +rem;
      i= i/10;
   }

   printf("The reverse number is %d",rev);



    return 0;
}*/
