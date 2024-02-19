#include <stdio.h>
#include <stdlib.h>
void main()
{
    int number = 0, kaunta = 0, op;
    float numberf, somam, somamf = 0;
    printf("type 0 for int and 1 for float: ");
    scanf("%d", &op);
    system("cls");
    switch (op)
    {
    case 0:
        do
        {
            printf("type a int number from 0 to 10: ");
            scanf("%d", &number);
            somam += number;
            system("cls");
            kaunta++;
        } while (number != 0);
        kaunta--;
        somam = somam / kaunta;
        printf("you typed %d numbers and the average number of they is = %.2f", kaunta, somam);
        break;
    case 1:
        do
        {
            printf("type a float number from 0 to 10: ");
            scanf("%f", &numberf);
            somamf += numberf;
            system("cls");
            kaunta++;
        } while (numberf != 0);
        kaunta--;
        somamf = somamf / kaunta;
        printf("you typed %d numbers and the average number of they is = %.2f", kaunta, somamf);
        break;
    default:
        printf("wrong answer restart the program and try again");
    }
}
