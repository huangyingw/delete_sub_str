#include"stdio.h"
#include"stdlib.h"
#include<iostream>
using namespace std;
int delete_sub_str(const char *str, const char *sub_str, char *result_str)  
{  
  int count=0;
  int i=0,j=0,temp=0;
  while ( str[i]!=sub_str[j]) i++;
  temp=i;
  while ( str[i++]==sub_str[j++] && '\0' != sub_str[j]); 
  if ( '\0' == str[i])
  {
    for ( int k=0;k<temp;k++)
    {
      result_str[k]=str[k];
    }
  }
  else
  {
    for ( int k=0;k<temp;k++)
    {
      result_str[k]=str[k];
    }
  }
  return count;  
}  

int main()  
{  
  char *str = "12fuck345fuck678fuck9";  
  //char *str = "12fuck";  
  char *sub = "fuck";  
  char res[50] ="";  
  int count = delete_sub_str(str, sub, res);  
  printf("子字符串的个数是：%d\n", count);  
  printf("删除子字符串后：\n%s\n", res);  
  return 0;  
}  


