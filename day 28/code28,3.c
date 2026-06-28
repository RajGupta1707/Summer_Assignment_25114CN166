#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked;

    printf("Total Available Seats: %d\n", totalSeats);

    printf("Enter Number of Seats to Book: ");
    scanf("%d", &booked);

    if(booked <= totalSeats) {
        totalSeats -= booked;
        printf("Booking Successful!\n");
        printf("Remaining Seats: %d\n", totalSeats);
    } else {
        printf("Booking Failed! Not enough seats available.\n");
    }

    return 0;
}