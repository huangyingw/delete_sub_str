#include"stdio.h"
#include"stdlib.h"
#include<iostream>
using namespace std;
int delete_sub_str(const char *str, const char *sub_str, char *result_str)  
{  
  int count=0;
  int i=0,j=0,temp=0;
  char * origin_result=result_str;
  while ( str[i]!=sub_str[j]) i++;
  while ( '\0' != str[i])
  {
    temp=i;
    while ( str[i++]==sub_str[j++] && '\0' != sub_str[j]); 
    for ( int k=0;k<temp;k++)
    {
      *result_str++=str[k];
      cout<<k<<","<<str[k]<<endl;
    }
    cout<<"result->"<<origin_result<<endl;
  }
  return count;  
}  

int main()  
{  
  char *str = "12fuck345";  
  //char *str = "12fuck345fuck678fuck9";  
  //char *str = "12fuck";  
  char *sub = "fuck";  
  char res[50] ="";  
  int count = delete_sub_str(str, sub, res);  
  cout<<res<<endl;
  return 0;  
}  
