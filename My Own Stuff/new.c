struct Box
{
    int length;
    int width;
    int height;
};
struct Box b1;
struct Box b_arr[20];

b1.length = 10;
b_arr[0].length = 15;

int *ptr, z;

z = 20;
ptr = &z;

printf("%d", ptr);

struct Box *b3;

b3 = b1;

b3->
