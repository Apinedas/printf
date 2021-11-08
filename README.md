# _printf Function:page_facing_up:

The `_printf` program is a pseudo- recreation of the C standard library function, `printf` as part of the low-level programming and algorithm track at Holberton School Colombia. 

## Dependencies

Our `_printf` function was coded on an Ubuntu [Pending] LTS machine with `gcc` version [Pending]

## Flowchart
[Pending] - In progress...


## Usage

Bassically to use the `_printf` function, *assuming the above `.c` dependencies have been installed,*
compile all `.c` files in the repository and include the header `main.h`in the entry point function.

### Example `main.c`:
```
#include "main.h"

int main()
{
    _printf("Hi, buddy from C16!");

    return (0);
}
```

### Compilation:
```
$ gcc *.c -o [File_name]
```

### Output:
```
$ ./[File_Name]
Hi, buddy from C16!
$
```

## Description :speech_balloon:

### Syntaxis

#### Prototype: 
`int _printf(const char *format, ...);`

The function `_printf` writes output to standard output. 

The function writes under the control of a `format` string that specifies how consecutive arguments (accessed via the variable-length facilities of `stdarg`) are converted for output.


### Return Value
- in progress...

### Format of the Argument String
- in progress... 

### Flag Characters

- in progress....

## Conversion Specifiers
- in progress...

## Authors
* Andrés Medina <[TheRealMedi](https://github.com/TheRealMedi)>
* Alejandro Pineda Sánchez <[Apinedas](https://github.com/Apinedas)> 


## Acknowledgements 

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).

<p align="center">
  <img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" alt="This is a secret;)">
</p>