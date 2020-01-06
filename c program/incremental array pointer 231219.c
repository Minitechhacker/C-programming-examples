#include <stdio.h>
int main(void)
 {
int scores[5] = {100, 235, 275, 50, 100};
int *ptr = NULL;
ptr = &scores;
printf("Value stored in pointer after increment is: %d", *++ptr);
}
