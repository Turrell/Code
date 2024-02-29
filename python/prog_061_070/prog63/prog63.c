/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Program 63: Knight Moves                                                  */
/*                                                                           */
/* This is a challenging problem for 91.101 students. It was taken from a    */
/* programming competition held a number of years ago. You should first      */
/* understand the backtracking solution to the Knight�s Tour.               */
/*                                                                           */
/* There are appearing some very strange phone pads that contain digit       */
/* buttons(�0� through �9�) and other special buttons represented by �.�.*/
/* A phone pad consists of a set of horizontal rows, each containing         */
/* characters representing the digit and other non-digit buttons. For        */
/* example, the following is the existing phone pad:                         */
/*                                                                           */
/* 123                                                                       */                                                                       */
/* 456                                                                       */
/* 789                                                                       */
/* .0                                                                        */
/*                                                                           */
/* For a given phone pad, you are to determine the total number of           */
/* seven-digit phone numbers one can dial without repeating a digit by       */
/* moving between digits using only Knight moves as in chess. No seven-digit */
/* phone number can start with the zero digit; also the phone number must    */
/* only contain digits.Recall that a Knight moves in an L - shape, 1 space   */
/* horizontal then 2 vertical, or 1space vertical then 2 horizontal :        */
/*                                                                           */
/* If the input phone pad is incorrect(because of missing digits, duplicate  */
/* digits, or rows of uneven length) the program should output on a single   */
/* line ERROR and then exit.The program first reads an integer between one   */
/* and ten that specifies the number of horizontal rows in the phone pad;    */
/* thereafter, each line contains a row of the phone pad.There will never be */
/* more than 10 characters per input line.                                   */
/*                                                                           */
/* Examples                                                                  */
/*                                                                           */
/*              Input                                                        */
/*              Output 4 123 456 789 .0. 32 3 1.034 56.9. .782. 15           */
/*                                                                           */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

            // Begin Main
            int
            main(int argc, char *argv[])
{
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
