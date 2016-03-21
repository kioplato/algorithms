/******************************************************
File implementation : tower_of_hanoi.c
Authors             : Platon-Nikolaos Kiorpelidis
Purpose             : tower_of_hanoi implementation
Date                : 19 March 2016
*******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//n_disks denotes the number of disks.
//beg is the initial peg.
//aux is the auxiliary peg.
//end is the final peg.
void hanoi(uint32_t n_disks, uint32_t beg, uint32_t aux, uint32_t end)
{
  if(n_disks > 0)
  {
    hanoi(n_disks - 1, beg, end, aux);
    printf("Move %c to %c\n", beg, end);
    hanoi(n_disks - 1, aux, beg, end);
  }
}

int main(int argc, const char *argv[])
{
  uint8_t peg_A = 'A';
  uint8_t peg_B = 'B';
  uint8_t peg_C = 'C';

  uint32_t n_disks;
  printf("How many disks do you want: \n");
  scanf("%d", &n_disks);

  hanoi(n_disks, peg_A, peg_B, peg_C);

  return 0;
}
