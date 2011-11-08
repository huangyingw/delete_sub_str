// delete_sub_str.cpp : Defines the entry point for the console application.
#include"stdio.h"
#include"stdlib.h"
#include<iostream>
using namespace std;
int delete_sub_str(const char *str, const char *sub_str, char *result_str)
{
  int count=0;
  int i=0,j=0;
  while ( str[i]!=sub_str[j]) i++;
  for ( int k=0;k<i;k++)
  {
    *result_str++=str[k];
  }

  while ( '\0' != str[i])
  {
    while ( str[i++]==sub_str[j++] && '\0' != sub_str[j]);
    if (str[i]!='\0')
      count++;
    j=0;
    while ( str[i] != sub_str[j] && '\0' != str[i])
    {
      *result_str++=str[i];
      i++;
    }

  }
  *result_str='\0';
  return count;
}

int delete_sub_str(char str[], const char *sub_str)
{
  int count=0;
  bool found=true;
  int i=0,j=0,p=0,nav=0;
  while(found)
  {
    i=0;
    j=0;
    found=false;
    while ( str[i]!=sub_str[j]) i++;
    p=i;

    while (sub_str[j]!='\0' && str[i++]==sub_str[j++]);
    if (sub_str[j] == '\0')
    {
      found=true;
      count++;
    }
    else
    {
      return count;
    }

    nav=i;
    while (str[nav])
    {
      str[p++]=str[nav++];
    }
    if (str[nav]=='\0')
      str[p]='\0';
  }

  return count;
}

int main()
{
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
  cout<<delete_sub_str(str, sub, res)<<",";
  cout<<res<<endl;

  char str1[] = "12fuck";
  delete_sub_str(str1, sub);
  cout<<str1<<endl;

  char str2[] = "12fuck345";
  delete_sub_str(str2, sub);
  cout<<str2<<endl;

  char str3[] = "12fuck345fuck678fuck9";
  cout<<delete_sub_str(str3, sub)<<",";
  cout<<str3<<endl;

  return 0;
}
