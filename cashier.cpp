/* 
 *
 * # Cashier Program 
 * # Description: Project 1 Small Cashier simulated program
 * # Author: Michael Martin
 * # Class: COMPSCI 1
 *
 */


// Includes
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

char username [50];       // Global Variables
char item1 [50];          // String variables
char item2 [50];
char item3 [50];

int item1Quant;          // Quantity Variables
int item2Quant;
int item3Quant;

double item1Price;       // Price Variables
double item2Price;
double item3Price;

double tax;              

/*
int dollars = 1;
int fives = 5;
int tens = 10;
int twenties = 20;
int fifties = 50;
int hundreds = 100;
double quarters = 0.25;
double dimes = 0.1;
double nickle = 0.5;
double pennies = 0.01;
*/

double hundreds, twenties, fives, ones;
double quarters, dimes, nickles, pennies;

double total;

double money;
double pretax;

// Prompt Variables
char pricePrompt [50] = "Please enter a price for %s\n";
char priceConfirm [50] = "The price of %s is $%f\n\n";
char itemSelection [50] = "Choose a item:  \n";
char itemConfirm [50] = "The item you chose was %s\n\n";

// Formatting Functions
void spacing()
{ 
  cout << "\n\n";
}

void interface1()     
{
  cout << "------------ Panther Express Cashier Interface ---------------\n";
}

void interface2()
{
  cout << "--------------------------------------------------------------\n";
}

void costSum()
{
  cout << "$--------------Cost Summary ----------------------------------$\n";
}


void costPreTax()
{
  cout << "$--------------Cost Pretax ----------------------------------$\n";
}
void costTax()
{
  cout << "$--------------Cost w/ Tax ----------------------------------$\n";
}

void change()
{
  cout << "$--------------Change ---------------------------------------$\n";
}

void changePrompt()
{
   cout << "Denominations ....\n";
   cout << "$100 bills: " << hundreds << endl;
   cout << "$20 bills: " << twenties << endl;
   cout << "$5 bills: " << fives << endl;
   cout << "$1 bills: " << ones << endl;
   cout << "Quarters: " << quarters << endl;
   cout << "Dimes: " << dimes << endl;
   cout << "Nickles: " << nickles << endl;
   cout << "Pennies: " << pennies << endl;
}

void prompt()
{
  char greeting [100] = "Hello Welcome to Panther Express\n";
  cout << greeting << "\n";
  cout << "My name is Panny Panther What is yours ...\n"<< "Please enter your name\
n\n";
  cin >> username;
  cout << "\nAHA, " << username << " we've been waiting for you\n";

}


void itemSelect_1()
{
  interface1();
  prompt();

  printf(itemSelection);
  cin >> item1;
  printf(itemConfirm, item1);
  cout << itemSelection;
  cin >> item2;
  printf(itemConfirm, item2);
  cout << itemSelection;
  cin >> item3;
  printf(itemConfirm, item3);

  printf(pricePrompt, item1);
  cin >> item1Price;
  printf(priceConfirm, item1, item1Price);
  printf(pricePrompt, item2);
  cin >> item2Price;
  printf(priceConfirm, item2, item2Price);
  printf(pricePrompt, item3);
  cin >> item3Price;
  printf(priceConfirm, item3, item3Price);

  char quantPrompt [30] = "How many units of %s? \n";
  printf(quantPrompt, item1);
  cin >> item1Quant;
  printf(quantPrompt, item2);
  cin >> item2Quant;
  printf(quantPrompt, item3);
  cin >> item3Quant;

  printf("What is the tax rate:  \n");
  cin >> tax;
}



void charge()
{
  cout << "How much money do you have? \n";
  cin >> money;
  cout << "You gave me "<< money << "\n\n";
  change();
}


void printout_1()
{
  char prompt1 [50] = "Unit name: %s\n";
  char prompt2 [50] = "Unit price for: %f\n";
  char prompt3 [50] = "Unit quantity for: %d\n";

  interface1();
  printf(prompt1, item1);
  printf(prompt2, item1Price);
  printf(prompt3, item1Quant);
  spacing();

  printf(prompt1, item2);
  printf(prompt2, item2Price);
  printf(prompt3, item2Quant);
  spacing();

  printf(prompt1, item3);
  printf(prompt2, item3Price);
  printf(prompt3, item3Quant);
  spacing();

  printf("The tax rate is %f", tax);
  spacing();

  interface2();
}

void moneyReturn()
{
  if (total >=100) 
  {
    total -= 100;
    hundreds += 1;
  }
  
  else if (total >=20)

  {
    total -= 20;
    twenties += 1;
  }
  
  else if (total >= 5)
  {
    total -= 5;
    fives += 1;
  }
  
  else if (total >= 1)
  {
    total -= 1;
    ones += 1;
  }

                       
  else if (total >= 0.25)
  {
    total -= 0.25;
    quarters += 1;
  }
  
  else if (total >= 0.10)
  {
    total -= 0.1;
    dimes += 1;
  }
  
  else if (total >= 0.05)
  {
    total -= 0.05;
    nickles += 1;
  }
  
  else if (total >= 0.01)
  {
    total -= 0.05;
    pennies += 0.01;
  }
  
}

void preTax()
{
  costPreTax();
  pretax = ((item1Price*item1Quant)+(item2Price*item2Quant)+(item3Price+item3Quant));
}


int main()
{
  itemSelect_1();
  printout_1();
   

  return (0);
}

	







