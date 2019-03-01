/*
 * # Project 1 Pointers
 * # Author: Ghoul
 *
 * #  Simplifying Code with printf() string formatting
 *
 *
 *    Simplyfying code is a great skill for a programmer to acquire. Writing cleans
 *    readable, and reusable code regardless of the language is a must for most
 *    software developer positions. 
 *
 *    Here I will give an example that can be tailored for use in Project one. In
 *    project 1 there are several printouts that need to be reused. This occurs 
 *    when the user will be inputing data for 3 seperate items. 
 *
 *    In the example below I will be asking a user to input information about two 
 *    seperate employees. The data will include firstName, lastName, and thier
 *    salary, bonus. We will also want to be able to calculate yearPay by adding 
 *    the salary and bonus.
 *
 *    Due to time constraints the example is limited to one employee however the 
 *    logic can easily be scaled to handle many employees. 
 */

//// EMPLOYEE EXAMPLE

// First we need to declare the variables needed to store user input and the 
// calculated yearly pay. We need to declare the variables before we can use them
// in later code. They will be assigned a value later.

#include <iostream>
#include <stdio.h>             // stdio.h contains printf() 
			       // we will use printf() to format strings later.

using namespace std;


char firstName_EMP1 [50];      // We use a character array to hold the input
char lastName_EMP1 [50];       // for First and Last name. To declare a character
char firstName_EMP2 [50];      // array first you declare char for character. Next
char lastName_EMP2 [50];       // declare the name of the variable. Lastly you 
			       // declare MAX size of the character array inside
			       // brackets  []. 

int salary_EMP1;               // We declare the salary and bonus as an int value
int bonus_EMP1;  	       // in this example. Note in project 1 you will need
int salary_EMP2;	       // to use double. 
int bouns_EMP2;	       
int salarywBonus_EMP1;   
int salarywBonus_EMP2;
			       
int main()
{
			       // Now we can begin the main funtion

			       // This is were we will begin to use reusable 
			       // prompts. We will do this by declaring
			       // them as a char array and use printf() formating
			       // to insert the variable names into the string.
			       // printf will be used in the following manner.
			       // printf(promptVariable, firstName)
			       // The promptVariable will be a character array
			       // containing %s where we want to insert the 
			       // firstName variable. %s is used to insert strings
			       // We will use %d to insert numerical data
			       // prompt variable declaration

// Prompt Variables
  char getFirstName [50] = "What is the employees first name: \n";
  char getLastName [50] = "What is the employees last name: \n";
  char getSalary [50] = "What is the employees yearly salary: \n";
  char getBonus [50] = "What is the employees bonus: \n";

  char promptFullName [50] = "Employee Full Name: %s %s\n";
  char promptSalary [50] = "Employee Salary: %d\n";
  char promptBonus [50] = "Employees bonus: %d\n";
  char promptSalarywB [50] = "Employees yearly salary w/bonus: %d\n";

                             
// Now we use printf() to printout our prompts dynamically a

  printf(getFirstName);
  cin >> firstName_EMP1;
  printf(getLastName);
  cin >> lastName_EMP1;
  printf(promptFullName, firstName_EMP1, lastName_EMP1); // Here is where we use
							 // printf() to print
							 // promptFullName to 
							 // screen and dynamcally
							 // insert the variables
							 // input by the user.
  printf(getSalary);
  cin >> salary_EMP1;
  printf(promptSalary, salary_EMP1);
  printf(getBonus);
  cin >> bonus_EMP1;
  printf(promptBonus, bonus_EMP1);

// Aritmetic for Yearly salary with bonus
  salarywBonus_EMP1 = salary_EMP1+ bonus_EMP1;
  printf(promptSalarywB, salarywBonus_EMP1);

  return (0);
}
  



























































