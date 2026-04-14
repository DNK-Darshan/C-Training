#include <stdio.h>

struct time
{
    unsigned int hour : 5;   // 0 to 31
    unsigned int minute : 6; // 0 to 63
    unsigned int second : 6; // 0 to 63
} t1;


int main()
{
    t1.hour = 23;
    t1.minute = 59;
    t1.second = 59;

    printf("Time: %d:%d:%d\n", t1.hour, t1.minute, t1.second);

    return 0;
}
