/******************************************************
File implementation : my_string.h
Authors             : Platon-Nikolaos Kiorpelidis
Purpose             : my string management functions
Date                : 21 Mar 2016
Language            : C
*******************************************************/

//replaces char_unwanted character from given string with char_replacer character.
void replace_string_chars(char* string, char char_unwanted, char char_replacer);

//removes the garbageChar from the given string.
void remove_char(char* string, char garbageChar);

//removes the extra spaces from a string.
/*example:
   test  test test
would give:
test test test*/
void remove_extra_spaces(char* string);

//returns a string from stdin buffer until a \n character is encountered.
char* get_line();

//uncapitalizes the characters of the given string.
void uncapitalize(char* string);
