/**
Day 01 - Blocks
Should define a block with conditions that:
- Define a variable with integer typer lower than 10
- Check if the variable is less than 10
- Show in the terminal: "Lower than 10, try again..."
*/

#include <stdio.h>

int main() {
    int number = 2;

    if(number < 10) {
        printf("Lower than 10, try again...");
    }

    return 0;
}