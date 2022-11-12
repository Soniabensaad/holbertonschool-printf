# INTRODUCTION PRINTF FUNCTION
This is a a custom version of the printf fuction, which have the most basic functionalities such as printing a string, a character and also printing an integer number.
# DESCRIPTION
The printf function is a powerful device for printing variety of numbers and characters stored in variables.
Then and return the number of characters it is going to print, in case of athe char will be just one.
# Printf working principle
printf or print function in C takes a formatting string and couple of optional variables as input and outputs strings to console while converting input variables to strings.
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
| `a%` | `A % followed by another % character will write a single % to the stream` |% |

## image 

Using a composite data type such as struct which will contain the declaration of a char pointer *fmt and a pointer to a function called *func, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (fmt) and the format.

So the format is a string which characters will be printed without modification (literally), until the string found the format specifiers which start with the % character, and when there is a match between the specifier in the struct and in the format it will indicate the location to the function and this function will print out the string, character or Number, depends the function.
