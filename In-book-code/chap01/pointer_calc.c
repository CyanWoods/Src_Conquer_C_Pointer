#include <stdio.h>

int main(void)
{
    int hoge;
    int *hoge_p;
    int *a=NULL;
    /* 将指向hoge的指针赋给hoge_p */
    hoge_p = &hoge;
    /* 输出hoge_p的值 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* hoge_p加1 */
    hoge_p++;
    /* 输出hoge_p的值 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* 输出hoge_p加3后的值 */
    printf("hoge_p..%p\n", (void*)(hoge_p + 3));
    printf("length of int is %lu\n",sizeof(hoge));
    printf("NUUL %p",(void*)a);

    return 0;
}
