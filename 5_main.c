//202510111332
//2704406088@qq.com
//陈亭伍
#include <stdio.h>
void reverseArray(int arr[],int len){
    for(int i=0;i<len/2;i++){
        int temp = arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
}
int main(){
    int arr[5];
    printf("请输入5个数：\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
