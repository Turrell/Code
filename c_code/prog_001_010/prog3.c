/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/* Problem 3: The Character P                                                */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/*  Write a C program that prints out the single character P. I want you to  */
/*  use the %c format code.                                                  */
/*                                                                           */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

// Begin Main
int main( int argc, char *argv[ ] )
{
  char *str =  "P";

  printf("\n\nThe character is %c\n\n", *str);

  
  return 0;


} // End Main
