/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 86: Shell Sort

A file contains at most 100,000 integer numbers. The name of the file is given on the command line as argv[1]. Sort
these numbers into ascending order using the Shell Sort strategy discussed in class. You should remember that
selection sort is an order n-squared algorithm and it will generally outperform insertion sort. After you have sorted
the numbers, your program should output the first 5 numbers. It should also output the last five numbers too.

Program 87: Ackermann�s Function

Go to http://mathworld.wolfram.com/AckermannFunction.html and read about Ackermann�s function. Here is the
function:

A(x,y) =     y + 1,            if  x is 0
             A(x-1,1)          if  y is 0
             A(x-1,A(x,y-1))   otherwise

Your job is to pass in a hardcopy solution to Ackerman�s Function for small positive values for x and y. Attach to
your code a nice looking table. The rows of the table represent x input values and the columns of the table represent
y input values. Lable your table.

Fill in each cell of the table with two values. The first value is the value of the Ackermann function for a given x, y
pair. The second value is the user time it took to compute the function using the time utility. Use the user time
value. Make yoru x  and y values have unsigned long type. Let your patience and/or machine size to represent an
unsigned long determine how big of a table you will fill.

Start with values for x = 0, 1, 2, 3, �
Start with values of  y = 0, 1, 2, 3, �

Note: There is no electronic submission for this problem, just a hardcopy submission.

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
