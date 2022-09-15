Assignment =9
Q=1
/*
#include <stdio.h>
void printNumberOfDays(int N)
{

    switch (N) {
    // Cases for 31 Days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days.");
        break;

    // Cases for 30 Days
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days.");
        break;

    // Case for 28/29 Days
    case 2:
        printf("28/29 Days.");
        break;

    default:
        printf("Invalid Month.");
        break;
    }
}

// Driver Code
int main()
{
    // Input Month
    int N = 4;

    // Function Call
    printNumberOfDays(N);

    return 0;
}
*\
Q=2
/*
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f,ch;
printf("Enter 1st no\n");
scanf("%d",&a);
printf("Enter 2nd no\n");
scanf("%d",&b);
printf("Enter choice 1.add 2.sub 3.mul 4.div\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
d=a-b;
printf("%d",d);
break;
case 3:
e=a*b;
printf("%d",e);
break;
case 4:
f=a/b;
printf("%d",f);
break;
}
return 0;
}
*\
Q=3
/*
#include <stdio.h>

int main() {
    int day;
    /*
     * Take the Day number as input form user
     */
    printf("Enter Day Number (1 = Monday ..... 7 = Sunday)\n");
    scanf("%d", &day);  _

    switch(day){
        case 1 : printf("Monday\n");
            break;
        case 2 : printf("Tuesday\n");
            break;
        case 3 : printf("Wednesday\n");
            break;
        case 4 : printf("Thursday\n");
            break;
        case 5 : printf("Friday\n");
            break;
        case 6 : printf("Saturday\n");
            break;
        case 7 : printf("Sunday\n");
            break;
        default: printf("Invalid Input !!!!\n");
    }

    return 0;
}
*\
Q=4
/*
#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral\n");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles\n");
   else
      printf("The given Triangle is scalene\n");
   return 0;
}
*\
Q=6
/*
#include<stdio.h>
void main()
{
   int year;
   printf("Enter The Year\n");
   scanf("%d",&year);

  if(year%100==0)
   {   if(year%400==0)
        printf("Leap year");
       else
        printf("Not a Leap year");
   }
  else
   { if(year%4==0)
       printf("Leap year");
    else
        printf("Not a Leap year");
   }
}
*\
Q=7
/*

2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
#include<iostream>
using namespace std;
int main()
{
	int unit;
	float amount,total_amount,s_charge;
	cout<<"enter the number of units you consumed"<<endl;
	cin>>unit;
	switch(unit<=50)
	{
		case 1:
			amount=unit*0.50;
			break;
			case 0:
				switch(unit<=150)
				{
					case 1:
						amount=25+(unit-50)*0.75;
						break;
						case 0:
							switch(unit<=250)
							{
								case 1:
								amount=100+(unit-150)*1.20	;
								break;
								case 0:
								amount=220+(unit-250)*1.50;
								break;
							}
						break;
				}
			break;
	}
	s_charge=amount*0.20;
	total_amount=amount+s_charge;
	cout<<"your total bill is Rs"<<total_amount;
}
*\
Q=8
/*
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", num);
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1:
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}

*\
Q=9
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=450;
    //int num2=561;
switch(num1%2){//this will return either 0 or 1
case 0:
    printf("%d is a even number",num1);
    break;
case 1:
    printf("%d is a odd number",num2);
}
getch();
    return 0;
}
*\
Q=10
/*
#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    /* Calculate discriminant */
    discriminant = (b * b) - (4 * a * c);


    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch(discriminant > 0)
    {
        case 1:
            /* If discriminant is positive */
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f",
                    root1, root2);
            break;

        case 0:
            /* If discriminant is not positive */
            switch(discriminant < 0)
            {
                case 1:
                    /* If discriminant is negative */
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                            root1, imaginary, root2, imaginary);
                    break;

                case 0:
                    /* If discriminant is zero */
                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

                    break;
            }
    }

    return 0;
}
*\
