#include <stdio.h>

int main() {
    int a; // 변수 a 선언 및 초기화
    char b; // 변수 b 선언 및 초기화
    scanf("%d %c", &a, &b); // scanf 함수 사용 / 사용자가 첫번째로 입력한 값이 %d, 두번째로 입력한 값이 %c에 초기화 되고, 각각 a, b라는 변수에 초기화
    printf("a는 %d, b는 %c 입니다.", a, b); // 사용자가 입력한 글자와 함께 문자열 출력
    return 0;
}