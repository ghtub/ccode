int x = 0;

struct Item
{
    int id;
    char text[100];
    struct Item* next;
};