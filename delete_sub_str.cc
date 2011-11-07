#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

//s=a+aa+aaa+aaaa+aa...a
int num_of_a(int a,int num)
{
  int current_a=0,sum=0;

  for (int i=1;i<= num;i++)
  {
    current_a=0;
    for (int j=0;j<i;j++)
    {
      current_a*=10;
      current_a+=a;
    }
    sum+=current_a;
  }
  return sum;
}

int main() 
{
  cout<<num_of_a(3,5)<<endl;//37035
  cout<<num_of_a(4,5)<<endl;//49380
  return 0;
}
