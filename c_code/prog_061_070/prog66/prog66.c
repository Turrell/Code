/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/*                                                                           */
/* Program 66 : Tromino Tiling                                               */
/*                                                                           */
/* Some of you are ready to take up the challenge that this problem offers.  */
/* Some of you are not .If you cannot do this problem right now, do not get  */
/* overly discourage.You just need to solve a bunch of smaller problems      */
/* first.If you cannot solve this problem, then let it go.Solve the ones you */
/* can solve.Perhaps you can come back to this one later.                    */
/*                                                                           */
/* An N x N(where N is a power of two) chessboard can be tiled with L -      */
/* shaped tiles that cover three squares so that any given square and only   */
/* that square is left uncovered.Assume that the rows of the board are       */
/* numbered from one to N from the top down, and the columns of the board    */
/* are numbered from one to N from left to right.The input will be three     */
/* integers.N(a power of two, will be no more than sixteen), the row number  */
/* of the square that should not be covered, and the column number of the    */
/* square that should not be covered.The output should be an N x N array with*/
/* the square not covered indicated with a blank and three squares covered   */
/* by each tile indicated by a distinct ASCII character starting with !,     */
/* which is 33 in decimal, and continuing with successive ASCII characters.  */
/*                                                                           */
/* Example : For input of 8 3 6,                                             */
/* the output could(solution not unique) be :                                */
/*                                                                           */
/*                      # #$ $(())                                           */ 
/*                      #� � $(� �)                                       */
/*                           %                                               */
/*                        � &&*�                                           */
/*                            +                                              */
/*                   % % &!**++--.!!2 3 3 -                                  */
/*         , ..2 2 1 2 /, , 0 4 1 1 5 / / 0 0 4 4 5 5                        */
/*                                                                           */
/* If may help to think about the blank cell as being �tiled with a blank   */
/* character�.                                                              */
/*                                                                           */
/* This is a classic divide and conquer.For the most part, the solution to   */
/* this problem is in your textbook, but the output here is different and    */
/* looks nicer.                                                              */
/*                                                                           */
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
