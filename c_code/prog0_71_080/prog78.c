/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Problem 78: State Transition Machine

Consider the following state transition diagram/table:


0
1
2
3
4
A
B
C
D
E
A
B
C
D
E
A
B
C
D
E
A
B
C
D
E
A
B
C
D
E
A
B
C
D
E

The digits 0 through 4 are the input values and the letters A through E are the state values. Given an input I and a
state s, the next state is located at row s, column i. For example, if I = 2 and s = c, then the next state is A.

Given a start state s1 and an input sequence i1, i2, i3, �, in, the final state for the sequence is calculated by locating
the next state (s2) for s1, then locating the next state for (s3) for s2 and i2, then locating the next state (s4) for s3
and I3, etc. The state sn+1 is the final state.

For example, if D is the start state and the input sequence is 2, 1, 0, 4, then the final state is E.

Your task is to write a program that reads the start state, reads the input sequence, and displays the final state.

The start state and each value of the input sequence will be on a separate line. A negative number will mark the end
of the input. You may assume that the input is valid.

For example, if the input to the program is:
B
12
-1
The final state is: 	B


If the input to the program is:

A
4
2
0
-1

The final state is:	E

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
