#include <stdio.h>
int main(void)
{ 
  int sum;
  float  L1,L2,SumL,Area,height;
  printf("Enter L1 = ");
  scanf("%f",&L1);
  printf("Enter L2 = ");
  scanf("%f",&L2);
  printf("Enter Height :");
  scanf("%f",&height);
  SumL = L1+L2;
  sum=(L2/L1)*100;
  printf("L2 = %d % \n", sum);
    if(sum>=40)
    {
    Area = 0.5*height*SumL;
    printf("Area is : %f",Area);
    }
  return 0;
}
