//1. Write a program to print Hello Students on the screen.

//Answer 1

 /*#include<stdio.h>
int main()
{

    printf("Hello students");
    return 0;

}*/


//2. Write a program to print Hello in the first line and Students in the second line.

//Answer 2


/*#include<stdio.h>
int main()
{
    printf("Hello\nstudents");

    return 0;

}*/


//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes).

//Answer 3

/*#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}
*/


//4. WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area
//& R with radius.

// Answer 4

/*#include<stdio.h>
 int main()
 {   
    float r,c;
    float b=3.14;
    printf("Enter the radius:");
    scanf("%f", &r);
    c=b*r*r;
    printf("Area of the circle is %f having the radius %f",c,r);
   return 0;
 }
*/


//5. WAP to calculate the length of String using printf function.

// Answer 5


/*  #include<stdio.h>
    #include<string.h>
    int main()
{     int b;
    char a[100]= "Welcome to inueron"; //  inserting " Welcome to inueron" as a string 
    b=strlen(a);                       // assinging the string length of char a[100] to b.   (important)
    
    printf("The length of the string is %d",b);  // print command to print the length of the string.
    return 0;
}
*/


//6.WAP to print the name of the user in double quotes.
//Expected output format – “Hello , Amit Kumar”

//Answer 6

/*  #include<stdio.h>
    #include<string.h>

    int main()
{ 
   char a [15];
   char b [10];
   printf("Enter the name");
   scanf("%s%s",&a,&b);
   printf("\"Hello, %s %s\"",a,b);
    
    return 0;

}
*/

//7. WAP to print “%d” on the screen.

//Answer 7

/*#include<stdio.h>
int main()
{
    printf("%%d");

    return 0 ;
}
*/

//8. WAP to print “\n” on the screen.

 // Answer 8

 
 /* #include<stdio.h>
   
   int main()
   {
     printf("\\n");
     
     return 0;
   }
*/


//9. WAP to print “\\” on the screen.

//Answer 9

/*#include<stdio.h>
 
 int main()
 {
    printf("\\\\");
    return 0;
 }
*/

//10. WAP to take date as an input in below given format and convert the date format and
//display the result as given below.

//User Input date format – “DD/MM/YYYY” (27/11/2022)
//Output format –
//“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

// Answer 10

/*#include<stdio.h> 
 int main() 
 {
    int a,b,c;

    printf("Enter the date in the format DD/MM/YYYY"); 
    scanf("%d%d%d",&a,&b,&c);
    printf("Day-%d,Month-%d,Year-%d",a,b,c);
    return 0;

 }
*/


//11. WAP to take time as an input in below given format and convert the time format and 
//display the result as given below.
//User Input date format – “HH:MM”
//Output format – “HH hour and MM Minute”
//Example –
//“11:25” converted to “11 Hour and 25 Minute”

// Answer11

/*# include<stdio.h>

int main()
{
   int a,b;
printf("Enter the time in form \"HH:MM\"");
scanf("%d%d",&a,&b);
printf("%d Hour and %d Minute",a,b);

return 0;

}
*/

//*12. Find output of below code:
/*#include<stdio.h>
int main()
{ 
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;

}
*/
// Answer 12
Output: Error











