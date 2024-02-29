/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 101 : Simple Encryption

                  Your program is to open and read a textfile character by character via the getc library function and convert all
                      alphabetic characters to lower case and then left rotate the alphabetic character by 13. For example,

              {A, a}
              ? n{B, b}
              ? o{M, m}
              ? z{N, n}
              ? a

                        etc�

                            The name of the input file is given to the program on the command line as argv[1]
                                .Your program should write the
                                    encrypted characters to the standard output device(screen) via the library routine putchar.All non
                    - alphabetic
                      characters which are read in are to be written to the output unchanged.

/*                               */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h> //for input/output

                      // Begin Main
                      int main(int argc, char *argv[])
{

    printf("\n\nHello World\n\n");

    return 0;

} // End Main
