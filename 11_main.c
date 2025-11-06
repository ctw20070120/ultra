//202510111332
//2704406088@qq.com
//陈亭伍
#include <stdio.h>
int sumArray(int arr[],int len){
    int sum =0;
    for(int i=0;i<len; i++){
        sum +=arr[i];
    }
    return sum;
}
int productArray(int arr[],int len){
    int product=1;
    for(int i=0;i<len;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    printf("请输入5个数：\n");
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum=sumArray(arr,5);
    int product=productArray(arr,5);
    printf("%d,%d",sum,product);
    return 0;
}
