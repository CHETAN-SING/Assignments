                /*Assignment - 12 A Job Ready Bootcamp in C++, DSA and IOT MySirG
                                 Recursion in C Language*/

            //1. Write a recursive function to print first N natural numbers


           /* #include<stdio.h>
            void Natural(int );


            int main()
            {
                int n;
                printf("Enter the natural number");
                scanf("%d",&n);
                Natural(n);

            }
            void Natural(int n)
            {
                if(n==0)
                  return;
                 Natural(n-1);
                printf("%d ",n);

            }
            */


// 2. Write a recursive function to print first N natural numbers in reverse order
/*#include<stdio.h>

void NaturalReverse(int);

int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   NaturalReverse(n);
return 0;
}

void NaturalReverse(int n)
{
  if(n==0)
  return;
    printf("%d ",n);
  NaturalReverse(n-1);

}*/


//3. Write a recursive function to print first N odd natural numbers
/*#include<stdio.h>
void Naturalodd(int);


int main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  Naturalodd(n);
  return 0;

}
void Naturalodd(int n)
{
  if(n==0 || n==-1)
  return;

  Naturalodd(n-2);
   printf("%d ",n);

}*/

//4. Write a recursive function to print first N odd natural numbers in reverse order


/*#include<stdio.h>
void NaturalReverse(int);

int main()
{
 int n;
 printf("Enter the number");
 scanf("%d",&n);

NaturalReverse(n);
return 0;

}

void NaturalReverse(int n)
{

 if( n==-1 || n%2==0) // we only want to print odd number so much such condition where number will run only for odd not for even.
 return ; 

 printf("%d ",n);
NaturalReverse(n-2);

}
*/

//5. Write a recursive function to print first N even natural numbers

/*#include<stdio.h>
void Naturaleven(int);

int main()
{
   int a;
   printf("Bhai enter kardo koi number");
   scanf("%d",&a);
  Naturaleven(a);
}
void Naturaleven(int n)
{
   if(n==0 || n%2!=0)
   return;
   Naturaleven(n-2);
   printf("%d ",n);

}
*/


//6. Write a recursive function to print first N even natural numbers in reverse order


/*#include<stdio.h>
void Naturalreverseeven(int);

int main()
{  int n;
   
    printf("Enter the number");
    scanf("%d",&n);

     Naturalreverseeven(n);
return 0;
}

void Naturalreverseeven( int n)
{
   if( n==0 || n%2!=0)
    return;
     printf("%d ",n);
    Naturalreverseeven(n-2);

}
*/


//7. Write a recursive function to print squares of first N natural numbers

/*#include<stdio.h>
void Naturalnumbersquare(int);

int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   
   Naturalnumbersquare(n);

}

void Naturalnumbersquare( int n)

{
   if(n==0)
    return;

  Naturalnumbersquare(n-1);
  printf("%d ", n*n);


}
*/
//8. Write a recursive function to print binary of a given decimal number

/*#include<stdio.h>
 void binary(int);

int main()
{
    int n;
   printf("Enter the number");
   scanf("%d",&n);
    binary(n);
}

void binary(int n)
{

 if(n==0)
  return;
binary(n>>1);
printf("%d", n&1);
}
*/




//9. Write a recursive function to print octal of a given decimal number

/*#include<stdio.h>
 void octal(int);

int main()
{
    int n;
   printf("Enter the number");
   scanf("%d",&n);
    octal(n);
return 0;
}

void octal(int n)
{

 if(n==0)
  return;
octal(n/8);
printf("%d", n%8);
}
*/


//10. Write a recursive function to print reverse of a given number

#include<stdio.h>
int Reverse(int);
 
int main()
{   int num, r;
    printf("Enter the number");
    scanf("%d",& num);
     Reverse(num);
     r=Reverse(num);
     printf("\n Reverse of Number: %d",r);
  return 0;
}
int Reverse(int num)
{
  int  sum=0;
  int r=0;
 if (num)
  {
    r= num%10;
    sum=(sum*10)+r;
    Reverse(num/10);
  }
  else{
  return 0;
  }
 return sum;
}
