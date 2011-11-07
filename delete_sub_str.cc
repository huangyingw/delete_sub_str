#include"stdio.h"
#include"stdlib.h"
#include<iostream>
int delete_sub_str(const char *str, const char *sub_str, char *result_str)  
{  
  int count = 0;  
  int k = 0;  
  char *p3 = result_str;  
  for(int i = 0; str[i] != '\0'; i++)  
  {  
    int tem = i; //tem保留主串中的起始判断下标位置   
    int j = 0;  
    while((str[i] != '\0') && (sub_str[j] != '\0') && (str[i] == sub_str[j]))  
    {  
      i++;  
      j++;  
    }  
    if(sub_str[j] != '\0')  
    {  
      i = tem;  
      p3[k] = str[i];   
      k++;  
    }  
    else  
    {  
      count += 1;  
      i--;  
    }         
  }  
  return count;  
}  

int main()  
{  
  char *str = "12fuck345fuck678fuck9";  
  char *sub = "fuck";  
  char res[50] ="";  
  int count = delete_sub_str(str, sub, res);  
  printf("子字符串的个数是：%d\n", count);  
  printf("删除子字符串后：\n%s\n", res);  
  return 0;  
}  


