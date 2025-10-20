//202510111332
//2704406088@qq.com
//陈亭伍
#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    switch (op){
        case'+':
        printf("%d\n",a+b);
        break;
        case'*':
        printf("%d\n",a*b);
        break;
        case'-':
        printf("%d\n",a-b);
        break;
        case'/':
        if(b!=0){
            printf("%d\n",a/b);
        }else{
            printf("除数不能为0");
        }
        break;
        default:
        printf("无效运算符");
        }
        return 0;
}
