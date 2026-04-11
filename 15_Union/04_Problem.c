#include <stdio.h>
#pragma pack(1)

/*
struct store
{
    double price;
    char *title;
    char *author;  
    int num_pages;
    int color;
    int size;
    char *design;
};
*/

struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int num_pages;
        } book;
        struct
        {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};


int main()
{
    struct store s;
    s.item.book.title = "The Alchemist";
    s.item.book.author = "Paulo Coelho";
    s.item.book.num_pages = 197;

    printf("\nBook Title is: %s", s.item.book.title);
    printf("\n%ld bytes\n", sizeof(s));
    return 0;
}

/*

If we used some fields of this structure so another fields memory are wested so instead of thsi we can used structure and union both in single structure.

*/