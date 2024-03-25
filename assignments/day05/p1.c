#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);

int main()
{
  int v1,v2;
  int result=0;
  
  printf("\nEnter the two values: ");
  scanf("%d%d", &v1, &v2);

  result=add(v1,v2);
  printf("\nAddition of %d+%d=%d",v1,v2,result);

  printf("\n\n");
  return 0;

}


int add(int val1,int val2)
{
  int res=0;
  res=val1+val2;
  return res;
}

int sub(int val1,int val2)
{
  int res=0;
  res=val1-val2;
  return res;
}

int mul(int val1,int val2)
{
  int res=0;
  res=val1*val2;
  return res;
}



