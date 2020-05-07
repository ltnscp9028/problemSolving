#include <stdio.h>
int main(void)
{

        long number;
        printf("입력된정수의부호바꾸기\n");
        printf("숫자(부호포함)입력후Enter> ");
        scanf("%ld", &number);
        printf("입력된정수: %ld\n", number);
        number = ~number + 1;
        printf("부호바뀐값:%ld\n", number);
        return 0;
}


