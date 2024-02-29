/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Program 99 : Logical Sorting of Strings                                   */
/*                                                                           */
/* A file contains 20 words.One word per line.Each word has no more than 10  */
/* characters.Read all 20 words into an array.You may use the definition :   */
/* char words[20][11]                                                        */
/*                                                                           */ 
/* Note that each row should contain up to 11 cells since the null byte must */
/* be stored too.                                                            */
/*                                                                           */
/* Now create another array containing 20 pointers to characters.Something   */
/* like :                                                                    */
/*                                                                           */
/*    char *word_ptr[20]                                                     */
/*                                                                           */
/*    The array of words can be sorted without exchanging the individual     */
/*    elements of the words array.This is done by creating an array of       */
/*    pointers that initially point to the corresponding array of words,     */
/*    element by element.(initially, word_ptr[i] = &words[i]).               */
/*                                                                           */
/*    A sort function takes as arguments the pointer array and a size        */
/*    variable.The size variable in this case will be 20. The sort function  */
/*    will rearrange the pointers(not the words) such that the data is       */
/*    sorted if accessed indirectly by following the rearranged pointers.    */
/*                                                                           */
/*    Your program should first print out the words in sorted order.One per  */
/*    line.                                                                  */
/*                                                                           */
/*    Then your program should print out the words in their natural stored   */
/*    order.                                                                 */
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
