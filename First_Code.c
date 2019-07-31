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

int main() {
int i;
int A[3];
int B[3];
int C[3];
  

  A[0] = array(2);
  A[1] = 3;
  A[2] = 7;
  B[0] = array(3);
  B[1] = 3;
  B[2] = 4;

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
