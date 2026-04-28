// #include <stdio.h>
// #include <stdint.h>

// uint8_t reverse_bits(uint8_t x)
// {
//     uint8_t result = 0;

//     for (int i = 0; i < 8; i++)
//     {
//         result = (result << 1) | (x & 1);
//         x = x >> 1;             
//     }

//     return result;
// }

// int main()
// {
//     uint8_t val = 0x58;
//     uint8_t rev = reverse_bits(val);

//     printf("Original: 0x%02X\n", val);
//     printf("Reversed: 0x%02X\n", rev);

//     return 0;
// }








// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[] = "Hello";
//     char *p = s;
//     printf("%c %c\n", *p++, ++*p);
//     printf("%c %c", *++p, *p++);
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//         char s[] = "Hello";
//         char *p = s;
//         printf("%c %c\n", (*p)++, ++(*p));
//         printf("%c %c", *++p, *p++);
//     return 0;
// }



// #include <stdio.h>
// #define ADD(x, y) (x + y)

// int main(int argc, char const *argv[])
// {
//     printf(" %d", 4 * ADD(4, 5));
//     return 0;
// }




#include <stdio.h>

struct abc 
{
    void (*display)(int (*func)(int, int), int a, int b);
};

void display(int (*func)(int, int), int a, int b);
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
    struct abc s1;
    s1.display = &display;
    s1.display(sum, 5, 7);
    s1.display(sub, 9, 7);
    s1.display(mul, 5, 7);
    s1.display(div, 10, 5);
    
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

void display(int (*func)(int, int), int a, int b)
{
    printf("Result = %d\n", func(a, b));
}