#include <stdio.h>

void move_forward(int distance) {
    printf("Moving forward %d meters\n", distance);
}

int main() {
    move_forward(10);
    int r= move_forward;
     // r is a pointer to a function
    return 0;
}
