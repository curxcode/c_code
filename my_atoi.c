#include <stdio.h>
#include <ctype.h>
#include <limits.h>
enum state{
    INVALID,
    VALID
};

//sta记录返回值是合法还是非法
enum state sta = INVALID;
int my_atoi(const char* s)
{
    int flag = 1;
    //空指针
    if(NULL == s)
    {
        return 0;
    }
    //空字符串
    if(*s == '\0')
    {
        return 0;
    }
    //跳过空白字符
    while(isspace(*s))
    {
        s++;
    }
    //处理正负号
    if(*s == '+')
    {
        flag = 1;
        s++;
    }
    else if(*s == '-')
    {
        flag = -1;
        s++;
    }
    //处理数字字符转换
    long long n = 0;
    while (isdigit(*s))
    {
        n = n*10 + (*s-'0')*flag;
        if(n > INT_MAX || n < INT_MIN)
        {
            return 0;
        }
        s++;
    }
    if(*s == '\0')
    {
        sta = VALID;
        return (int)n;
    }
    else
    {
        return (int)n;
    }
    
}
int main()
{
    //1.空字符串
    //2.空指针
    //3.非数字字符
    //4.超出范围溢出
    const char *s = "-3455aa";  
    int ret = my_atoi(s);
    if(sta == VALID)
    {
        printf("%d\n",ret);
    }
    else
    {
        printf("%d\n",ret);
    }
    return 0;
}