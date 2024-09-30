#include <stdio.h>

int main(){
    int x=3, y=3; // 변수 x, y 선언 및 초기화
    int z= x++ + ++y; // 변수 z 선언 및 초기화
    printf("%d %d %d", x ,y, z); // 출력 = 3, 3, 7
    return 0;
}