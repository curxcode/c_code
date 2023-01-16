#include <stdio.h>
void bubble_sort(int arr[], int k)
{
    int i = 0;
    for(i=0;i<k-1;i++)//需要冒泡排序的次数
    {
        int flag = 1;//假设数据已经有序
        int j = 0;
        for(j = 0;j < k-1-i;j++)//比较相邻数字的对数
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];  //交换 需要一个变量去代换
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0 ;
            }
        }
        if(flag == 1)
        {
            break;
        }    
    }
}
int main()
{
    int j = 0;
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int k = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,k);//冒泡排序
    for(j = 0;j<k;j++)
    {
        printf("%-2d ",arr[j]);
    }
    return 0;
}