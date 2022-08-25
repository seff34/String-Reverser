/**
 * @file      stringReverse.h
 * @author    Sefa Eren AKDOGAN
 * @brief     String Reverser
 * @version   1.0
 * @date      2022-07-20
 * @copyright Copyright (c) 2022
 */
#include "stringReverse.c"


char* reversePointer(char *array)
{
    char temp ; 
    size_t len = strlen(array);

    for ( int i = 0 ; i < len/2 ; i++)
    {
        temp = *(array + i) ;
        *(array + i) = *(array+len-1-i);
        *(array+len-1-i) = temp ; 
    }
    return array;
}


char* reverseArray(char *array)
{
    char temp ; 
    size_t len = strlen(array);

    for ( int i = 0 ; i < len/2 ; i++)
    {
        temp = array[i];
        array[i] = array[len-1-i];
        array[len-1 -i] = temp ; 
    }
    return array;
}