/******************************************************
File implementation : quicksort.c
Authors             : P. N. Kiorpelidis
Purpose             : Quicksort implementation
Date                : 17 March 2016
*******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void quicksort(int32_t *array, int32_t, int32_t);

int main(int argc, const char *argv[])
{
  int32_t *array = NULL;
  uint32_t n_cols;

  printf("How many numbers do you want to enter?: ");
  scanf("%d", &n_cols);
  array = malloc(n_cols * sizeof(int32_t));

  printf("Enter numbers to sort with quicksort:\n");
  for(uint32_t i = 0; i < n_cols; i++)
    scanf("%d", &array[i]);

  printf("Array before:\n");
  for(uint32_t i = 0; i < n_cols; i++)
    printf("%d ", array[i]);
  printf("\n");

  quicksort(array, 0, n_cols - 1);

  printf("Array after:\n");
  for(uint32_t i = 0; i < n_cols; i++)
    printf("%d ", array[i]);

  return 0;
}

void quicksort(int32_t *array, int32_t left, int32_t right)
{
  int32_t pivot;
  int32_t l;
  int32_t r;

  int32_t temp;

  if(left < right)
  {
    pivot = left;
    l = left;
    r = right;

    while(l < r)
    {
      while(array[l] <= array[pivot] && l < right)
        l++;
      while(array[r] > array[pivot])
        r--;
      if(l < r)
      {
        temp = array[l];
        array[l] = array[r];
        array[r] = temp;
      }
    }

    temp = array[pivot];
    array[pivot] = array[r];
    array[r] = temp;
    quicksort(array, left, r - 1);
    quicksort(array, r + 1, right);
  }
}
