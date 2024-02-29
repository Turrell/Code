/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 75: Malloc Up A Two Dimensional Array

The purpose of the program is for you to practice referencing a two dimensional array, but the space for that two
dimensional array was created at run-time via a call to malloc. Realize that C�s [] operator (index operator) cannot be
used in a double subscripting context unless you do a work-around. In this problem you will malloc up enough
space to hold r x c integer values via a single call to malloc where r is the number of rows and c represents the
number of columns.

				         malloc (  r * c * sizeof (int) ) ;

You should read in the values of r and c via the keyboard using scanf.

In this problem, I am not asking you to create r pointers to integers. I am asking you to create space to hold r * c
integers � all of which are consecutively laid out in memory. You need to visualize this.

I want you to then fill the space. I want you to use a nested for loop to fill the array. Each cell should be assigned
the number 6. Thus, you need to keep track of you own offset via i*c + j  within a single subscript. After you have
done this, you should walk the entire array and then add up each element to form the sum. You should output the
sum.

I want you to discover that you need to use a single [  ]. I do not want you to use a [][]. In fact can you? Remember,
when you compile your code you should not have any warnings.

/*                               */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

// Begin Main
int main( int argc, char *argv[ ] )
{
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
