int x = 0;
int y = 3;

/* structures and function declarations (headers) */

struct Item
{
    int id;
    char text[100];
    struct Item* next;
};

void testUI();