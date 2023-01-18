#include <stdio.h>
#include <string.h>
char* my_strcat(char* dst,const char*src)
{
    char* ret = dst;
    while(*dst)//找到原字符串的'\0'
    {
        dst++;
    }
    while (*dst++ = *src++)//追加原字符串包含'\0'
    {;}
    return ret; //返回目标空间起始地址  
}
int main() 
{
    char arr1[20] = "hello ";
    char arr2[] = "world";
    printf("%s\n",my_strcat(arr1,arr2));
    return 0;
}