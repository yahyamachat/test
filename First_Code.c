#include <stdio.h>
/*This comment is created for testing a new branch called "Array" for this file*/
int array (int a)
{
return a*2;
}

int mul (int a , int b)
{
return a*b;
}

int add (int a , int b)
{
return a+b;
}

int main() {
int i;
int A[3];
int B[3];
int C[3];
  

  A[0] = array(2);
  A[1] = mul(3,4);
  A[2] = add(7,2);
  B[0] = array(3);
  B[1] = mul(3,8);
  B[2] = add(4,3);
/*The goal of this code is to multiplay 2 set of array*/
 for (i = 0; i < 3; i++) {
 C[i]= mul(A[i],B[i]);
 if (C[i] > 15) 
    {
	printf("%d\n", C[i]-15);
	}
	else
	{
	printf("%d\n", C[i]);
	}
}


  return 0;
}
