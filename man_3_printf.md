% _printf(3)
% Adaeze Nwaturuocha, Temitope Aiyebogan
% April 2022

# NAME
_printf - this function is a remake of the popular printf function.
It works exactly like the printf function by printing whatever is passed
into it to the standard output stream.

# SYNOPSIS
**int _printf(const char *format, ...);**\

# DESCRIPTION
**int _printf(const char *format, ...);** takes a format string that has
all the specified identifiers for printing diffferent datatypes.
(...) means the function can accept as many inputs as possible, 
these inputs are the data types to be printed which have a corresponding
identifier in the formant string.

# OPTIONS
**"%c"**
: Identifier for character

**"%s"**
: identifier for string

**"%d"**
: identifier for integer

**"%i"**
: identifier to print an integer in base 10

# EXAMPLES
**_print("This is a character %c and this is an integer %d.", 'H', 98);
: Output [This is a character H and this is an integer 98.]

# COPYRIGHT
Copyright C 2022. Alx-Holberton Software Engineering School.
