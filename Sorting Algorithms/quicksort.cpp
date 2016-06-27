/*
Author: Platon-Nikolaos Kiorpelidis
Purpose: Quicksort implementation
Date: 27-6-2016
Language: C++
*/

#include <iostream>
#include <cstdint>

using namespace std;

void swap_(uint32_t& x, uint32_t& y)
{
  uint32_t temp = x;
  x = y;
  y = temp;
}

uint32_t partition(uint32_t *array, int32_t left, int32_t right)
{
  uint32_t pivot = array[right];
  int32_t i = left - 1;

  for(size_t j = left; j <= right - 1; j++)
  {
    if(array[j] <= pivot)
    {
      i++;
      swap_(array[i], array[j]);
    }
  }
  swap_(array[i + 1], array[right]);
  return(i + 1);
}

void quicksort(uint32_t *array, int32_t start, int32_t end)
{
  if(start < end)
  {
    uint32_t sorted_element = partition(array, start, end);
    quicksort(array, start, sorted_element - 1);
    quicksort(array, sorted_element + 1, end);
  }
}

int main()
{
  uint32_t *array = NULL;
  array = new uint32_t[10];
  for(size_t i = 0; i < 10; i++)
    cin >> array[i];

  quicksort(array, 0, 10 - 1);
  cout << "In increasing order.." << endl;
  for(size_t i = 0; i < 10; i++)
    cout << array[i] << endl;
}
