#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int temperature = 25;

    printf("int:    %zu bytes\n", sizeof(int));
    printf("temperature:    %zu bytes\n", sizeof(temperature));
    printf("uint8_t:    %zu bytes\n", sizeof(uint8_t));

    return 0;
}