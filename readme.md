
# Reverse String in C

Reverse String in C Standart Libs.



## API Functions

#### Reverse String with Pointer
```c
char* reversePointer(char *array);
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `array` | `char*` | Input and Output Array |

#### Reverse String with Index of Array
```c
char* reverseArray(char *array);
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `array` | `char*` | Input and Output Array |


#### Example Code
```c
#include "stringReverse.h"

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
```







## Download Code

Clone Project

```bash
  git clone https://github.com/seff34/String-Reverser
```


  
