//202510111332
//2704406088@qq.com
//陈亭伍
#include <stdio.h>
int power(int a,int b){
    int result=1;
    for(int i=0;i<b;i++){
        result*=a;
    }
    return result;
}
int main(){
    int a,b;
    printf("请输入底数；\n");
    scanf("%d",&a);
    printf("请输入指数；\n");
    scanf("%d",&b);
    if (b<0){
        printf("请输入正数作为指数 \n");
    }else{
        int result =power(a,b);
        printf("%d",result);
    }
    return 0;
}
