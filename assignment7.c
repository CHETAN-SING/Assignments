/*Assignment - 7 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Iterative Control Statements (Part - 2)





/*1. Write a program to find the Nth term of the Fibonnaci series.


 #include<stdio.h>

 int main()
 {
    int i,c,n;
    int a=-1;
    int b=1;
   
    printf("Enter Nth term");
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
     
    c=a+b;
    a=b;
    b=c;


    }

      printf("%d",c);

    return 0;
 }

*/
//2.Write a program to print first N terms of Fibonacci series

/*#include<stdio.h>
 int main()
 {   
    int i ,N, c,  a=-1; 
  int  b=1;
    
    printf("Enter a number");
    scanf("%d",&N);

    for (i=1; i<=N; i++)

     { c=a+b;
     printf("%d ",c);
         a=b;
         b=c;
         
     }
     
    return 0;
 }*/
 

 //3. Write a program to check whether a given number is there in the Fibonacci
//series or not.


   /*#include<stdio.h>
   int main()
   {  
      int i,n;
      int a=-1;
      int b=1;
      int c=0;

      printf("kardo bhai number enter");
      scanf("%d",&n);
      int flag=0;
      while(a+b<=n)
      {
         c=a+b;
         if(c==n)
         {
               printf("Eureka Eureka i Have found it");
               flag==1;
               return 0;
         }
      
         a=b;
         b=c;
      }
        if (flag==0)
        {
          printf("Better luck next time bro");
          return 0;
        }

      return 0;
   }
  */
  
//4. Write a program to calculate HCF of two numbers

/*#include<stdio.h>

int main()
{
   int i, max,a,b;  
   printf("Enter number 1 and 2");
   scanf("%d%d",&a,&b);
    
    max=(a>b)? a:b;

   

     for(i=max; i>=1; i--)
     {
       if( a%i==0 && b%i==0)
        {
         printf("The HCf is %d",i);
         return 0;
        }

     }

   return 0;
}*/
/*5. Write a program to check whether two given numbers are co-prime
numbers or not*/

// co prime: those number are considered to be co prime which have 1 as their HCF. Or we can say that they dont have any other common factor than 1.
  
/*  #include<stdio.h>

  int main()
{
   int i, a, b, max;

   printf("Enter karde bhai 2 number");
   scanf("%d%d",&a,&b);
    max=(a>b)? a:b;

    for(i=max; i>=1; i--)
     {
       if( a%i==0 && b%i==0)
        {
         //printf("The HCf is %d ",i);
         if(i==1)
         printf("your number is co prime");
         else
         {
            printf("your number is not co prime");
         }
         return 0;
        }
     }

    return 0;
}*/


//6. Write a program to print all Prime numbers under 100

    /*#include<stdio.h>
     int main()
     {  int i, count;
     int num;
     for(num=2; num<=100; num++)
     { count=0;
      for (i=2; i<=num/2; i++)
        { 
        if( num%i==0)
        {
         count++;
         
        }
        
     } 
      if(count==0  )
      {
         printf("%d ",num);
      }
     }
   
      return 0;
     }*/

    // 7. Write a program to print all Prime numbers between two given numbers

    /*#include<stdio.h>
    int main()
    {   int i,num;
       int a,b;
      
       int count;
       printf("Enter the 2 numbers");
       scanf("%d%d",&a,&b);
       
       for(num=a; num<=b; num++)
       { count=0;    
         for(i=2; i<=num/2; i++ )
         {

         if( num%i==0 )
         {
         count++ ;
         }
         }
       
         if(count==0)
         {
            printf("%d ",num);
         }
       }
      return 0;
    }*/
    //8. Write a program to find next Prime number of a given number
    /*#include<stdio.h>
    int main()
    { int i;
       int num;
       int count;
       int n;
       printf("Enter the number");
       scanf("%d",&n);
       
       for(num=n; num<=2*n;num++ )
       {
         count=0;
         for(i=2; i<=num; i++)
         {
            if(num%i==0){
            count++;
         }
       }
         if(count==0)
        { printf("%d",num);
          continue;
        
        }
    }
      return 0;
       
      }*/
    
   // 9. Write a program to check whether a given number is an Armstrong number
//or not
/*#include<stdio.h>
int main()
{  int n;
   int s; 
   int sum=0;
   printf("Enter the number");
   scanf("%d",&n);
   int num=n;
   while(n!=0)
   {
     s=num%10;
     sum=sum+s*s*s;
     num=num/10;

     }
  
   if(sum==n)
     {
      printf("It is a armstrong number");
      return 0;
     }
     else
     {
      printf("It is not a armstrong number");
      return 0;
     } 
   return 0;
}*/
//10. Write a program to print all Armstrong numbers under 1000*/
/*#include<stdio.h>
int main()
{  int num, i, sum; int x; int s;
   printf("The armstrong number upto 1000 are\n");
      
      for(num=1; num<=1000; num++)
           {  x=num;
              sum=0;
            while(num!=0)
            {
               s=x%10;
               sum= sum+ s*s*s;
               x=x/10;
            }
           }
            if(sum==num)
            {
               printf("%d",num);
            }


   return 0;
}*/