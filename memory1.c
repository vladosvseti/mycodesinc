#include <stdio.h>
#include <stdlib.h>

struct ErrorLog {
    int code;
    char type;
};

int main() {
    struct ErrorLog *ptr = (struct ErrorLog *)malloc(sizeof(struct ErrorLog));
    ptr->code = 404;
    ptr->type = 'E';
    printf("Error Code: %d, Error Type: %c\n", ptr->code, ptr->type);
    free(ptr);  
    return 0;
}