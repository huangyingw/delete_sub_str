// delete_sub_str.cpp : Defines the entry point for the console application.
#include"stdio.h"
#include"stdlib.h"
#include<iostream>
using namespace std;
int delete_sub_str(const char *str, const char *sub_str, char *result_str) {  
  int count=0;
  int i=0,j=0;
  while ( str[i]!=sub_str[j]) i++;
  for ( int k=0;k<i;k++) {
    *result_str++=str[k];
  }
  while ( '\0' != str[i]) {
    while ( str[i++]==sub_str[j++] && '\0' != sub_str[j]); 
    j=0;
    while ( str[i] != sub_str[j] && '\0' != str[i]) {
      *result_str++=str[i];
      i++;
    }

  }
  *result_str='\0';
  return count;  
}  

int main() {
  char *  str = "";  
  char *sub = "fuck";  
  char res[50] ="";  

  str = "12fuck345";  
  delete_sub_str(str, sub, res);  
  cout<<res<<endl;

  str = "12fuck";  
  delete_sub_str(str, sub, res);  
  cout<<res<<endl;

  str = "12fuck345fuck678fuck9";  
  delete_sub_str(str, sub, res);  
  cout<<res<<endl;

  return 0;  
}

