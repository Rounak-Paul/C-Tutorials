#include <stdio.h>
#include <stdbool.h>

int main() {
    // char 
    char my_char = 'A';
    printf("My char is: %c\n", my_char); // '\n' is new line char
    printf("Size of char is: %i\n", (int)sizeof(char)); // 1 byte = 8 bits
    // [00110001] => 8 bits => 1 byte
    // System RAM
    // Stack, Heap => parts of RAM.

    // int
    int my_int = 10;
    printf("My int is: %i\n", my_int);
    printf("Size of int is: %i\n", (int)sizeof(int));  // 4 bytes = 32 bits
    // [sign_bit, ...] max of int can be 2^31, min -2^31
    // sign_bit => 0 -- positive, 1 -- negative
    my_int = ((20 + 5)*2)%9;
    printf("My int is: %i\n", my_int);

    // float
    float my_float = 2.67f;
    printf("My float is: %f\n", my_float);
    printf("Size of float is: %i\n", (int)sizeof(float)); // 4 bytes = 32 bits
    // [sign_bit, ..., dec_bit , ...]
    my_float = my_float * 2.9f;
    printf("My float is: %f\n", my_float);

    unsigned int my_new_int = -20; // [ ... ]
    // max 2^32, min 0 [11111 ... 1111] [00000 ... 000]
    printf("new int is: %u\n", my_new_int);

    // bool
    bool my_bool = true; // true = 1, false = 0
    printf("My bool is: %i\n", my_bool);
    printf("Size of bool is: %i", (int)sizeof(bool)); // 1 byte = 8 bits
    return 0;
}