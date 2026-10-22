#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char c = 'A';
    short s = 31120;
    int in = 100000;
    long l = 100000;
    long long ll = 50000000000LL;
    
    unsigned char uc = 255; 
    unsigned int ui = 4000000;

    float f = 12.7f;
    double d = 12.7;
    long double ld = 3.14L;

    uint8_t ui8t = 8U;
    uint16_t ui16t = 120U;
    uint32_t ui32t = 1240U;
    uint64_t ui64t = 123122U;

    int8_t i8t = -8;
    int16_t i16t = -120;
    int32_t i32t = -1240;
    int64_t i64t = -123122;

    
    printf("char:    %zu bytes\n", sizeof(c));
    printf("short:    %zu bytes\n", sizeof(s));
    printf("int:    %zu bytes\n", sizeof(in));
    printf("long:    %zu bytes\n", sizeof(l));
    printf("long long:    %zu bytes\n", sizeof(ll));

    printf("unsigned char:    %zu bytes\n", sizeof(uc));
    printf("unsigned int:    %zu bytes\n", sizeof(ui));

    printf("float:    %zu bytes\n", sizeof(f));
    printf("double:    %zu bytes\n", sizeof(d));
    printf("long double:    %zu bytes\n", sizeof(ld));

    printf("uint8_t:    %zu bytes\n", sizeof(ui8t));
    printf("uint16_t:    %zu bytes\n", sizeof(ui16t));
    printf("uint32_t:    %zu bytes\n", sizeof(ui32t));
    printf("uint64_t:    %zu bytes\n", sizeof(ui64t));
    
    printf("int8_t:    %zu bytes\n", sizeof(i8t));
    printf("int16_t:    %zu bytes\n", sizeof(i16t));
    printf("int32_t:    %zu bytes\n", sizeof(i32t));
    printf("int64_t:    %zu bytes\n", sizeof(i64t));
    
    return 0;
}
