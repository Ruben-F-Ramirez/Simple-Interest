/************************************************************************
* Programmer: Ruben Ramirez
*
* Course:  CSCI 1320.01
*
* Date:
*
* Assignment Number | Keyword : 6 | simple interest
*
* Point Value :  100
*
* Environment:  Visual Studio 2013
*
* Files Included: none
*
* Purpose:  To write functions with more than one input values.  To write a void return function.
*
* Input: none
*
* Preconditions: none
*
* Output: simple interest 
*
* Postconditions: none
*
* Algorithm:  a simple formula for simple interest
*
*
* Errors:  none
*
***********************************************************************/

#include <stdio.h> 

/* function prototypes (function declarations go above main) */

void title(void);
double multiply(double principle, double interest_rate, double time);


int main(void)
{
	// main function code and function call go here

	// identify the author of the program in the output
	printf("54_simple_interest_Ruben_Ramirez\n");

	// local declarations

	double interest;
	double rate;
	double principle;
	double time;

	// local statements

	// part d

	title();


	//  part a.

	// values for interest formula
	principle = 1000;
	rate = .06;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula
	principle = 1000;
	rate = .07;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula

	principle = 1000;
	rate = .08;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// part b

	// values for interest formula

	principle = 1000;
	rate = .06;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula

	principle = 1000;
	rate = .06;
	time = .5;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula

	principle = 1000;
	rate = .06;
	time = 3;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// part c

	// values for interest formula

	principle = 1000;
	rate = .08;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula

	principle = 2000;
	rate = .08;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	// values for interest formula

	principle = 3000;
	rate = .08;
	time = 1;

	// interest output
	interest = multiply(principle, rate, time);

	// output for table
	printf("\n$%.2f\t%.2f\t%.2f\t$%.2f\t\t\n", principle, rate, time, interest);

	return 0;
}   // end of main





/************************************************************************
* Purpose: to print the title of a table
*
* Parameters:none
*
* Action:  prints title of table
*
***********************************************************************/
void title(void)
{
	// title for a table

	printf("\nPrincipal\tRate\tTime\tInterest\n");

	return;

}

/************************************************************************
* Purpose: calculate simple interest

* Parameters:three doubles
*
* Action: multiply principle * interest rate * time
*
***********************************************************************/

double multiply(double principle, double interest_rate, double time)
{
	// simple interest formula function
	return (principle*interest_rate*time);
}