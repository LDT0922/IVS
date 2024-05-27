#include <stdio.h>

int main(void){


    int n1 = 33, n2 = 10;

    printf("%d %c %d = %d\n",n1,'/',n2,n1/n2);
    printf("%d %c %d = %.3lf\n",n1,'/',n2,(double)n1/n2);
    // 형 변환 (묵시적 , 명시적)
    // 명시적 : (double)변수 이런 느낌으로
    printf("%d %c %d = %d\n",n1,'%',n2,n1%n2);
    printf("이것은 클론으로 수정 후 다시 올린 것입니다");



    return 0;
}