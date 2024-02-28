/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Problem 77: Taxi! Taxi! 					(Taking from a programming competition)

Background information: In the early part of this previous century and Indian bookkeeper named Ramanujan
traveled to England to work with the famous English mathematician Hardy. Hardy had been sent papers written by
the untrained Ramanujan, determined that the writer was a genius, and sent money so that Ramanujan could get to
Cambridge. The two men collaborated for many years. Once when Ramanujan was ill and in the hospital, Hardy
went to visit him . When Hardy walked into the room his first remark was, �I thought the number of my taxicab
was 1729. It seemed to me a rather dull number.� Ramanujan replied, �No, Hardy! It is a very interesting number. It
is the smallest number expressible as the sum of two cubes in two different ways.�

If you check, you will see that Ramanujan was correct.

1729 = 13 + 123  = 1 + 1728
1729 = 93 + 103 = 729 + 1000

The next positive integer with this property is 4104.

4104 = 23 + 163
4104 = 93 + 153

We call numbers like 1729 and 4104 Ramanujan Numbers.

You are to input from the keyboard a positive integer N less than or equal to 1,000,000.

You are to output to the screen a table of Ramanujan Numbers less than N with the corresponding pairs of cubes,
and the cube roots of these cubes. The table must have appropriate headings and also include the order of each
Ramanujan Number. The order of 1729 is 1 because it is the first such number.

Example: For input value N = 5000, the output should be:

Ramanujan    First    Second     First   Second    Order
Number       Cube      Cube      Root    Root
--------------------------------------------------------
 1729			1       1728        1       12        1
      729     1000		9	   10

4104           8       4096        2       16        2
               729     3375        9       15

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
