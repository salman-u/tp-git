#include <stdio.h>

void move_forward(int distance) {
    printf("Moving forward %d meters\n", distance);
}

int main() {
    move_forward(10);
    int r= move_forward; // Salmzn
    printf("r = %d\n", r);
    return 0;
}
