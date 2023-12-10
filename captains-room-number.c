#include <stdio.h>

int main() {
    // Variables
    int K;  // size of each group
    int roomNumber;  // current room number
    int captainRoom = -1;  // initialize with a value that cannot be a valid room number

    // Input: size of each group
    printf("Enter the size of each group (K): ");
    scanf("%d", &K);

    // Input: room numbers
    printf("Enter the room numbers (enter a non-integer to stop): ");

    // Loop to find Captain's room
    while (1) {
        if (scanf("%d", &roomNumber) == 0) {
            // Stop if non-integer is entered
            break;
        }

        // Check if the room is part of a group
        if (roomNumber != captainRoom) {
            captainRoom = roomNumber;
        } else {
            // If the room is already marked, it's not the Captain's room
            captainRoom = -1;
        }
    }

    // Output: Captain's room number
    if (captainRoom != -1) {
        printf("Captain's room number: %d\n", captainRoom);
    } else {
        printf("No Captain's room found.\n");
    }

    return 0;
}
