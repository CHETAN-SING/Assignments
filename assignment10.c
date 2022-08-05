    //  Assignment - 10 A Job Ready Bootcamp in C++, DSA and IOT MySirG
                  //Functions in C Language
//1. Write a function to calculate the area of a circle. (TSRS)

 /*#include<stdio.h>
 float Area(float);
 int main()
 {   float x;
   printf("Enter the radius of the circle");
   scanf("%f",&x);
   x= Area(x);
   printf("The area of the circle is %f",x);

return 0;

 }

     float Area(float a)
     {

       float c;
       c=3.14*a*a;
       return c;
     }*/

     //2. Write a function to calculate simple interest. (TSRS)

/*#include<stdio.h>

float SI(float,float,float);
  int main()
{
    float x,y,z,w;
    printf("Enter the Principle, Time and Rate");
    scanf("%f%f%f", &x,&y,&z);

    w= SI(x,y,z);
    printf("The Simple interest of the given data is %f",w);

    return 0;
}

     float SI (float a, float b, float c)
     {
        float d;
        d= (a*b*c)/100;

       return d;
     }*/

     //3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
/*#include<stdio.h>
int EO (int);
int main()
{
     int x,y;
     printf("Enter the number");
     scanf("%d",&x);
     y= EO(x);
     
    return 0;
}

int EO (int a)
{
    if(a%2!=0)
    {
        printf("0");
    }
        else
        {
        printf("1");
        }
  return 0;
}*/

//4. Write a function to print first N natural numbers (TSRN)
/*#include<stdio.h>

 void Natural (int);
int main()
{
   int n,x;
   printf("Enter the number");
    scanf("%d",&n);
   Natural(n);

return 0;
}

void Natural(int a)
{  int i;
    for( i=1; i<=a; i++){
    printf("%d ",i);
   
    }
}
*/


// 5. Write a function to print first N odd natural numbers. (TSRN)
/*#include<stdio.h>
void Natural (int);
int main()
{
   int x,y;
   printf("Enter the number");
   scanf("%d",&x);
     Natural(x);
return 0;
}

void Natural(int a){
    int i;
    for(i=1; i<=a; i=i+2)
    printf("%d ", i);
   
}*/


//6. Write a function to calculate the factorial of a number. (TSRS)

/*#include<stdio.h>
int factorial(int);

int main()
{   int x, y;
    printf("Enter the number");
    scanf("%d",&x);
    y= factorial(x);

    return 0;
}

int factorial( int a)
{
    int i; int fact=1;

 for(int i=1; i<=a; i++)
 {
     fact= fact*i;
     
 }
printf("%d ",fact);
return 0;
}
*/

//7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)

/*#include<stdio.h>
float combination (float, float);
float fact(float);
float main()
{   float n,r,z;
printf("Enter no of items  ");
scanf("%f",&n);
printf("Enter the no selected items( should be less than items)");
scanf("%f",&r);
z= combination(n,r);
 

printf("%f",z);

    return 0;    
}


float fact (float a){

    float f=1;
    for(float i=1; i<=a; i++)
    {
        f=f*i;
    }
    return f;
}

float combination(float n, float r)
{  float c;
    c= (fact(n))/ ((fact(r)) * (fact(n-r)));
   return c;
}
*/


//8. Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)


/*#include<stdio.h>
float combination (float, float);
float fact(float);
float main()
{   float n,r,z;
printf("Enter no of items  ");
scanf("%f",&n);
printf("Enter the no selected items( should be less than items)");
scanf("%f",&r);
z= combination(n,r);
 

printf("%f",z);

    return 0;    
}


float fact (float a){

    float f=1;
    for(float i=1; i<=a; i++)
    {
        f=f*i;
    }
    return f;
}

float combination(float n, float r)
{  float c;
    c= (fact(n))/(fact(n-r));
   return c;
}
*/


//9. Write a function to check whether a given number contains a given digit or not.
//(TSRS)

/*#include<stdio.h>
int check(int, int);
int main()
{    int x;
	int num, digit;
    printf("Enter the number and digit");
	scanf("%d %d",&num,&digit);
     x= check (num,digit);
     return 0;
}
    int check( int num, int dig)
    {
	 int n=num; int rem=0;
	while(num!=0)
	{
		rem=num%10;
		if(rem==dig)
		{
			printf("%d is occured in %d",dig,n);
			return 0;
		}
		num/=10;
	}
	printf("%d is not occured in %d",dig,n);
    
    return 0;
}
*/

//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)


/*# include <stdio.h> 
# include <math.h> 
void primeFactors(int) ;
int main() 
{  int x, y;
 printf("Enter the number");
 scanf("%d",&x);
 
 primeFactors(x); 



return 0;
}
void primeFactors(int n) 
{ 
    
    while (n%2 == 0) 
    { 
        printf("%d ", 2); 
        n = n/2; 
    } 
     
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        
        while (n%i == 0) 
        { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
     
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
        printf ("%d ", n); 
} 
 */    













  
  



