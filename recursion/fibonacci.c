/******************************************************
File implementation : fibonacci.c
Authors             : P. N. Kiorpelidis
Purpose             : Quicksort implementation
Date                : 17 March 2016
*******************************************************/

#include <stdio.h>
#include <stdint.h>

int fibonacci(int32_t);

int main()
{
  int32_t first_fibonacci_numbers;
  int32_t fibonacci_number = 0;
  int32_t counter;

  printf("Enter how many fibonacci numbers to show: ");
  scanf("%d", &first_fibonacci_numbers);

  for(counter = 1; counter <= first_fibonacci_numbers ; counter++ )
  {
    printf("%d\n", fibonacci(fibonacci_number));
    fibonacci_number++;
  }

  return 0;
}

int32_t fibonacci(int32_t fibonacci_number)
{
   if(fibonacci_number == 0)
      return 0;
   else if(fibonacci_number == 1)
      return 1;
   else
      return(fibonacci(fibonacci_number - 1) + fibonacci(fibonacci_number - 2));
}
