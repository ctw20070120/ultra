//202510111332
//2704406088@qq.com
//陈亭伍
#include <stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    if (score>=90 && score<=100){
        printf("A\n");
    }else if(score>=80 && score<=89){
        printf("B\n");
    }else if(score>=70 && score<=79){
        printf("C\n");
    }else if(score>=60 && score<=69){
        printf("D\n");
    }else if(score>=0 && score<=69){
        printf("E\n");
    }else{
        printf("成绩无效");
    }
    return 0;

    }
