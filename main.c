#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';
    
    int *iptr = &i;
    char *cptr = &c;
    
    int *iptr2 = iptr; 
    printf("i: %p\n%p (size: %zu)\n", (void*)iptr, (void*)&i, sizeof(iptr));
    printf("c: %p\n%p (size: %zu)\n", (void*)cptr, (void*)&c, sizeof(cptr));

    printf("iptr2: %p, %d\n", (void*)iptr2, *iptr2);

    return 0;
} 



