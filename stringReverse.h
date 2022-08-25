/**
 * @file      stringReverse.h
 * @author    Sefa Eren AKDOGAN
 * @brief     String Reverser
 * @version   1.0
 * @date      2022-07-20
 * @copyright Copyright (c) 2022
 */

#ifndef __STRING__REVERSE
#define __STRING__REVERSE


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * @brief  Reverse String with Pointer
 * @param  [in out] array 
 * @return [char*] Reversed Array
 */
char* reversePointer(char *array);

/**
 * @brief  Reverse String with Index of Array
 * @param  [in out] array 
 * @return [char*] Reversed Array
 */
char* reverseArray(char *array);

#endif