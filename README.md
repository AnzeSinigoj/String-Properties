# strprop Program Documentation

## Overview

The `strprop` program checks various properties of a given string, such as its length, size in memory, whether all characters are valid ASCII, and the memory address where the string is stored.

## Suggested installation

For easier usage in the terminal, it is recommended to add the `strprop` program to your system's executable path by placing it in the `/usr/bin` directory. This will allow you to run `strprop` from any location in the terminal without needing to specify its full path.

To do this, you can copy the compiled `strprop` binary to `/usr/bin`:

## Usage

To use the `strprop` program, provide a string as an argument: `strprop [string]`
For strings separated by spaces use double quotation marks: `strprop "Hello World!"`

### Command-line Options

- `-h`: Display the help message with usage instructions.

## Description

The program performs the following checks on the provided string:
- **Length**: The number of characters in the string.
- **Size**: The total memory size of the string (including the null terminator).
- **Is ASCII**: Whether the string consists only of ASCII characters (values between 0 and 127).
- **Memory Address**: The memory address where the string is stored.

## Example Usage

### Example 1: Checking the Properties of a String

To check the properties of the string `"Hello"`, run the following command:

`strprop Hello`
```
Properties for string "Hello":
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Indexes:
--------
H  e  l  l  o  
0  1  2  3  4  

Other propieties:
-----------------
Length: 5
Size: 6 Bytes
Is ASCII: True
Memory address: 0x7fff7c0612ab

```
