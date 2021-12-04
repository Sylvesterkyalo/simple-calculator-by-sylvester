#include <stdio.h>
#include <stdlib.h>
INPUTS:
     -num1, num2
OUTPUTS:
    -sum
    -difference
    -pro
    -quo
    -mod
*/
int main()
{
   // variable declaration
  Float quot;
  Int num1,num2,sum,diff,pro,mod;

  //Assignment
  Num1 = 200;
  Num2 = 56;

  //Computations
  Sum = num1 + num2;
  Diff = num1 – num2;
  Pro = num1 * num2;
  Quot = (float)num1 / num2;
  Mod = num1 % num2;
  //Output
  //sum: result
  // 3 +5 = 8
  Printf(“%d + %d = %d\n”,num1,num2,sum);
  Printf(“%d - %d = %d\n”,num1,num2,diff);
  Printf(“%d / %d = %f\n”,num1,num2,quot);
  Printf(“%d * %d = %d\n”,num1,num2,pro);
  Printf(“%d mod %d = %d\n”,num1,num2,mod);



    return 0;
}
