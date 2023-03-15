
#include <stdio.h>

#define MAX_NUM 100

int main(void) {
    int prime, i;
    int total = 0;

    for (prime = 2; prime <= MAX_NUM; prime++) {
        for (i = 2; i < prime; i++) {
            if (prime % i == 0)
                break;
        }
        if (prime == i)
            total += prime;
    }

    printf("0부터 100까지 소수들의 합:%d \n", total);

}
