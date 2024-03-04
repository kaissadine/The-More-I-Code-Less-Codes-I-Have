#include <stdio.h>

int main()
{
   int i;
   int temp[5] = {21, 22, 23, 22, 20};

   for (int i=0; i<5; i++) {
      printf("pos %d – val %d\n",i,temp[i]);
   }
}
