# INTRODUCTION PRINTF FUNCTION
This is a a custom version of the printf fuction, which have the most basic functionalities such as printing a string, a character and also printing an integer number.
# DESCRIPTION
The printf function is a powerful device for printing variety of numbers and characters stored in variables.
Then and return the number of characters it is going to print, in case of athe char will be just one.
![image](https://user-images.githubusercontent.com/113900693/201482531-2929075e-c47d-4481-ad34-5d370a423f12.png)

# Printf working principle
![printf working principle](https://user-images.githubusercontent.com/113900693/201482353-2107ceb5-5c61-4148-8aed-e676c34bfb46.png)        
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
| `a%` | `A % followed by another % character will write a single % to the stream` |% |

## image 

Using a composite data type such as struct which will contain the declaration of a char pointer *fmt and a pointer to a function called *func, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (fmt) and the format.
![redme printf](https://user-images.githubusercontent.com/113900693/201482478-54ec4188-87c4-4a59-89f6-c8cd9dd491dc.PNG)

So the format is a string which characters will be printed without modification (literally), until the string found the format specifiers which start with the % character, and when there is a match between the specifier in the struct and in the format it will indicate the location to the function and this function will print out the string, character or Number, depends the function.
So this is an example of a struct that will call different functions for printing: char, string and numbers depending on the match.
![image](https://user-images.githubusercontent.com/113900693/201482762-b7d2d5b7-82e5-429c-96ea-79cc31583787.png)
This is example of the string format with the specifiers and the arguments as well.

Len is going to be the the number of characters the function _printf is going to print out.
![image](https://user-images.githubusercontent.com/113900693/201483512-e3df2f0e-566f-40eb-9d40-77fc3ab71304.png)
This will be the output:
![image](https://user-images.githubusercontent.com/113900693/201483572-06b7ea14-9e16-4e9f-a3ac-6789c213dd9c.png)



