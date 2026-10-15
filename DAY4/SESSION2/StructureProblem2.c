#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticket_no;
    char vehicle[30];
    float gross,tare;
};

float netWeight(struct Ticket *t) {
    return t->gross - t->tare;
}

void printTicket(struct Ticket *t) {
    printf("%d %s gross %.2f tare %.2f\n",
           t->ticket_no, t->vehicle, t->gross, t->tare);
    printf("net %.2f\n", netWeight(t));
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT");
        return 0;
    }

    struct Ticket *t = malloc(n * sizeof(struct Ticket));

    if (t == NULL)
        return 1;

    float total = 0;
    int heaviest = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %29s %f %f",
              &t[i].ticket_no, t[i].vehicle,
              &t[i].gross, &t[i].tare);

        total += netWeight(&t[i]);

        if (i == 0 || netWeight(&t[i]) > netWeight(&t[heaviest])) {
            heaviest = i;
        }
    }

    printf("\nWEIGHBRIDGE DAY BOOK\n");

    for (int i = 0; i < n; i++) {
        printTicket(&t[i]);
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);
    printf("Heaviest net load: ticket %d %s\n",
           t[heaviest].ticket_no, t[heaviest].vehicle);
    printf("%.2f\n", netWeight(&t[heaviest]));

    free(t);
    return 0;
}