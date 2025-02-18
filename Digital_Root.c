#include <stdio.h>
#include <math.h>
int DigitalRoot(int UGV, int size)
{
  int InsertValue ;
  int sum = 0 ;
  while(UGV > 0)
  {
    int InsertValue = UGV % 10;
    sum += InsertValue;
    UGV = UGV / 10;
  }
  int NewSize = floor(log10(abs(sum))) + 1;
  if(NewSize == 1)
  {
    return sum;
  }
  else
  {
    return DigitalRoot(sum, NewSize);
  }
}
int main()
{
  int UGV = 998;
  int size = floor(log10(abs(UGV))) + 1;
  printf("The Digital Root of %d is : ", UGV);
  printf("%d ",DigitalRoot(UGV,size));
}
