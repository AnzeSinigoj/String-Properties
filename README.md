# strprop Program Documentation

## Overview

The `strprop` program checks various properties of a given string, such as its length, size in memory, whether all characters are valid ASCII, and the memory address where the string is stored.

## Usage

To use the `strprop` program, provide a string as an argument: `strprop [string]`

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

Indexes:
--------
H  e  l  l  o  
0  1  2  3  4  

Other properties:
-----------------
Length: 5
Size: 6 Bytes
Is ASCII: True
Memory address: 0x7fffd8e5a5a0
```
