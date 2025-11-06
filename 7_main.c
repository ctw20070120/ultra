//202510111332
//2704406088@qq.com
//陈亭伍
#include <stdio.h>
int power (int a,int b){
    int result=1;
    for(int i=0;i<b;i++){
        result*=a;
    }
    return result;
}
int main(){
    int sum=power(1,2)+power(2,2)+power(3,2)+power(4,2)+power(5,2);
    printf("%d",sum);
    return 0; 
}
