#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief  Reverse String with Pointer
 * @param  [in out] array 
 * @return [char*] Reversed Array
 */
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

/**
 * @brief  Reverse String with Index of Array
 * @param  [in out] array 
 * @return [char*] Reversed Array
 */
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

int main(int argc, const char **argv)
{
    (void)argc;
    (void)argv;

    char array[] = "Reverse Me";

    printf("Input                 - > %s\n",array);
    reversePointer(array);
    printf("Reverse with Pointer  - > %s\n",array);
    reverseArray(array);
    printf("Reverse with Array    - > %s\n",array);


    return EXIT_SUCCESS;
}




