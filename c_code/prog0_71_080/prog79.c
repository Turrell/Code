/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Problem 79 : Fun With Subtraction

                 The square pattern shown below was obtained by putting the numbers 37,
             28,
             1,
             and25 at the corners of a square.By joining the midpoints of its sides,
             a smaller square was drawn inside the first square.Each corner of this new square was allocated a number by finding the difference between the two numbers at the ends of the line(eg.37 -
                                                                                                                                                                                                    28 = 9;
                                                                                                                                                                                                28 - 1 = 27)
                 .This new square was then taken as the starting point and the process was repeated until the
             numbers in the corners were the same,
             in this case,
             6. The sign of the differences is to be ignored.

             Your program should read in the numbers at the corners of the initial,
             outermost square.The input will come from
             the standard input.They will be provided on one line starting with the value in the upper right hand corner of the
             square and continuing clockwise.You are to print out the values at the corners of all the squares,
             including the initial
             square,
             until all the corners are all the same.You may assume that the maximum number of squares will be 20. The
                 original four numbers will integers between 0 and
                 100 inclusive.

                 Sample Input :

                 37 28 1 25

                 Sample Output :

                 37 28 1 25 9 27 24 12 18 3 12 3 15 9 9 15 6 0 6 0 6 6 6 6

/*                               */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

                 // Begin Main
                 int main(int argc, char *argv[])
{
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
