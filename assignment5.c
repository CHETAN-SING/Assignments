//1. Write a program to print MySirG N times on the screen

/*#include<stdio.h>
 int main ()
 {  int i=1;
    int n;
 printf("Enter how many times  you want to print MySirG ");
 scanf("%d",&n);

      

 while( i<=n)
 {
    printf("MySirG\n");
    
    i++;
 }
    return 0;
 }
 */

 
 //2. Write a program to print the first N natural numbers.
  /* #include<stdio.h>
   int main()
   {  int a;
      int i=1;
       printf("Enter a number");
       scanf("%d",&a);
        while (i<=a)
        {
            printf(" %d",i++);
        }
        
       
    return 0;
   }
*/
//3. Write a program to print the first N natural numbers in reverse order
/*#include<stdio.h>
   int main()
   {  int a;
      int i=1;
       printf("Enter a number");
       scanf("%d",&a);
      
        while (a>=i)
        {
            printf(" %d",a--);
        }
        
       
    return 0;
   }
*/

//4. Write a program to print the first N odd natural numbers

 /*#include<stdio.h>
 int main()
 {
    int a;
    printf("Enter a number");
    scanf("%d",&a);
     
     for(int i=1; i<=a; i++)
     {
      printf("%d ",i++);
     }



    return 0;
 }
 */
 
//5. Write a program to print the first N odd natural numbers in reverse order.
/*#include<stdio.h>
 int main()
 {   int a;

    printf("Enter a number");
    scanf("%d",&a);

   
     
     while (a)
     {
        printf("%d ",2*a-1);
        a--;
     
     }
     
    
    return 0;
 }*/


//6. Write a program to print the first N even natural numbers


/*#include<stdio.h>
int main()
{  int a;
int i=1;
   printf("Enter a number"); 
   scanf(" %d",&a);

   while(i<=a)
   {

      printf("%d ",2*i);
      i++;
   }





   return 0;
}
*/

 //7. Write a program to print the first N even natural numbers in reverse order


 
/*#include<stdio.h>
int main()
{  int a;

   printf("Enter a number"); 
   scanf(" %d",&a);

   while(a)
   {

      printf("%d ",2*a);
      a--;
   }
   return 0;
}*/

//8. Write a program to print squares of the first N natural numbers

/*#include<stdio.h>
int main()
{
   int i;
   int a=1;
   printf("Enter the number");
   scanf("%d",&i);

   while(a<=i)
   {
      printf("%d ",a*a);
    a++; 
   }

   return 0;
}
*/

//9. Write a program to print cubes of the first N natural numbers

/*#include<stdio.h>
int main()
{
   int i;
   int a=1;
   printf("Enter the number");
   scanf("%d",&i);

   while(a<=i)
   {
      printf("%d ",a*a*a);
    a++; 
   }

   return 0;
}
*/
//10. Write a program to print a table of N



/*#include<stdio.h>

int main()
{  int i;

   printf("Enter the number");
   scanf("%d",&i);

 for(int a=1; a<=10; a++)
 {
   printf(" %d ",i*a);
 }

   return 0;
}
*/