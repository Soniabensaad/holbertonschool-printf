# INTRODUCTION PRINTF FUNCTION
This is a a custom version of the printf fuction, which have the most basic functionalities such as printing a string, a character and also printing an integer number.
# DESCRIPTION
The printf function is a powerful device for printing variety of numbers and characters stored in variables.
Then and return the number of characters it is going to print, in case of athe char will be just one.

![image](https://user-images.githubusercontent.com/113900693/201482531-2929075e-c47d-4481-ad34-5d370a423f12.png)

# Printf working principle

![printf working principle](https://user-images.githubusercontent.com/113900693/201485162-2d8232b0-a926-495f-9b0a-f88b333888c6.png)

printf or print function in C takes a formatting string and couple of optional variables as input and outputs strings to console while converting input variables to strings.

#Printf Flowchart

![image](https://user-images.githubusercontent.com/113900693/201482684-77f7b2a7-ec50-44cc-9422-76737c596cf5.png)

# Printf

## Prototype:

```bash
int printf ( const char * format, ... );
```
## Parameters
```bash
format
```
Printf contains embedded format specifiers that are replaced by the values specified in subsequent additional arguments and formatted as requested.

A format specifier follows this prototype:
```bash
%[flags][width][.precision][length]specifier
```
 The specifier character at the end is the most significant component, since it defines the type and the interpretation of its corresponding argument:

## Format specifier:

### Here some examples

| Specifier |        Output     | Example             |
| :-------- | :------- | :------------------------- |
| `d or i`  | `Signed decimal integer` | 316|
| `c` | `character` |	A |
| `S` | `string of characters` | Holberton |
| `u` | `	Unsigned decimal integer` | 1998 |
| `o` | `	Unsigned octal` | 610 |
| `x` | `Unsigned hexadecimal integer` | 7fa |
| `f` | `	Decimal floating point` | 231.45 |
| `%` | `A % followed by another % character will write a single % to the stream` |% |

## image 

Using a composite data type such as struct which will contain the declaration of a char pointer *fmt and a pointer to a function called *func, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (fmt) and the format.
![image](https://user-images.githubusercontent.com/113900693/201485357-5d374d9a-30cb-4d8c-a715-601f66ec621c.png)

So the format is a string which characters will be printed without modification (literally), until the string found the format specifiers which start with the % character, and when there is a match between the specifier in the struct and in the format it will indicate the location to the function and this function will print out the string, character or Number, depends the function.
So this is an example of a struct that will call different functions for printing: char, string and numbers depending on the match.

![image](https://user-images.githubusercontent.com/113900693/201486565-07a028bb-d93f-4c08-bbe6-f2b49578ffe3.png)

This is example of the string format with the specifiers and the arguments as well.

Len is going to be the the number of characters the function _printf is going to print out.
![image](https://user-images.githubusercontent.com/113900693/201483512-e3df2f0e-566f-40eb-9d40-77fc3ab71304.png)

This will be the output:
![image](https://user-images.githubusercontent.com/113900693/201483572-06b7ea14-9e16-4e9f-a3ac-6789c213dd9c.png)

## Examples of the function that match the characters

This is the function that finds the match between the char ("c","s","d","i", "%") in struct st_format and the format string. and also if there is not match it will print the % and the next character that is different to the ones in the struct

![image](https://user-images.githubusercontent.com/113900693/201484666-9bad4933-ea5f-4c4c-9514-84f48417c801.png)

# Compilation And example of running the function
our code is compiled this way:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
This is a main we used to tested out our _ptrintf function:

```bash
    #include <limits.h>
    #include <stdio.h>
    #include "holberton.h"

    /**
     * main - Entry point
     *
     * Return: Always 0
     */
    int main(void)
    {
        int len;
        int len2;
        unsigned int ui;
        void *addr;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        ui = (unsigned int)INT_MAX + 1024;
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        return (0);
    }
   ```
   compile and run the executable:
   
  ```bash
  user@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
    user@ubuntu:~/c/printf$ ./printf
    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]
    Character:[H]
    Character:[H]
    String:[I am a string !]
    String:[I am a string !]
    Percent:[%]
    Percent:[%]
    Len:[12]
    Len:[12]
    Unknown:[%r]
    Unknown:[%r]
    user@ubuntu:~/c/printf$
   

