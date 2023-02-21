/******************************************************
File implementation : my_string.c
Authors             : Platon-Nikolaos Kiorpelidis
Purpose             : my string management functions
Date                : 21 Mar 2016
Language:           : C
*******************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void replace_string_chars(char* string, char char_unwanted, char char_replacer)
{
  unsigned string_length = strlen(string);
  unsigned string_counter = 0;

  for(string_counter = 0; string_counter < string_length; string_counter++)
  {
    if(string[string_counter] == char_unwanted)
    {
      string[string_counter] = char_replacer;
    }
  }
  string[string_length] = '\0';
}

void remove_char(char* string, char garbageChar)
{
  char* src;
  char* dst;
  for(src = dst = string; *src != '\0'; src++)
  {
    *dst = *src;
    if(*dst != garbageChar)
    {
      dst++;  //so the garbageChar char gets overwriten.
    }
  }
  *dst = '\0';
}

void remove_extra_spaces(char* string)
{
  char* src = string;
  char* dst = string;
  while (isspace(*src)) src++;
  for(; *src != '\0'; src++)
  {
    *dst = *src;
    if(*src != '\0')
    {
      if(*dst != *(src + 1) || *dst != ' ')
      {
        dst++;
      }
    }
  }
  if(dst[-1] == ' ')
  {
    dst[-1] = '\0';
  }
  else
  {
    *dst = '\0';
  }
}

char* get_line()
{
  char c;
  unsigned int no_chars = 1;
  char* input_command = malloc(no_chars * sizeof(char));

  while((c = getchar()) == '\n');
  while(c != '\n' && c != EOF)
  {
    input_command[no_chars - 1] = c;
    no_chars++;
    input_command = realloc(input_command, no_chars * sizeof(char));
    c = getchar();
  }
  input_command[no_chars - 1] = '\0';
  return input_command;
}

void uncapitalize(char* string)
{
  unsigned index = 0;
  while(string[index] != '\0')
  {
    if(string[index] >= 'A' && string[index] <= 'Z')
    {
      string[index] += 32;
    }
    index++;
  }
}
