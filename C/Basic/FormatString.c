#include <stdio.h>

int main() {
    float a = 1.234; // 변수 a 선언 및 초기화
    int b = 10; // 변수 b 선언 및 초기화

    printf("%.2f\n", a);        // 소수점 둘째 자리까지 출력 = 1.23
    printf("%5.1f\n", a);       // 소수점 첫째 자리까지 출력 / 전체 공간은 5, 1.2는 세자리 / - 없으므로 왼쪽에서 두자리 띄우고 1.2 출력 = __1.2
    printf("%05.1f\n", a);      // 소수점 첫째 자리까지 출력 / 전체 공간은 5, 1.2는 세자리 / 0이 있으므로 왼쪽에서 두자리 0으로 채우고 1.2 출력 = 001.2
    printf("%-05.1f\n", a);     // 소수점 첫째 자리까지 출력 / 전체 공간은 5, 1.2는 세자리 / -가 있으므로 0 무시 / 왼쪽 정렬해서 1.2 출력 = 1.2
    printf("%5d\n", b);         // 전체 공간은 5 / 10은 두자리 / -가 없으므로 왼쪽에서 세자리 띄우고 10 출력 = ___10
    printf("%05d\n", b);        // 전체 공간은 5 / 10은 두자리 / 0이 있으므로 왼쪽에서 세자리 0으로 채우고 10 출력 = 00010
    printf("%-5d\n", b);        // 전체 공간은 5 / 10은 두자리 / -가 있으므로 왼쪽 정렬하여 10 출력 = 10
    printf("%-05d\n", b);       // 전체 공간은 5 / 10은 두자리 / -가 있으므로 0은 무시 왼쪽 정렬하여 10 출력 = 10

    return 0;
}
