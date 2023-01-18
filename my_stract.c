#include <stdio.h>
#include <string.h>
char* my_strcat(char* dst,const char*src)
{
    char* ret = dst;
    while(*dst)
    {
        dst++;
    }
    while (*dst++ = *src++)
    {;}
    return ret;   
}
int main() 
{
    char arr1[20] = "hello ";
    char arr2[] = "world";
    printf("%s\n",my_strcat(arr1,arr2));
    return 0;
}