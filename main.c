#include <stdio.h>
#include <stdlib.h>
void input ();
void result ();
int main()
{
        input  ();
}
void input ()
{
    int Number;
    char Name[40];
    float Sale, Value, Profit, Commission;
    printf("Enter number \n");
    scanf("%d",&Number);
    printf("Enter name \n");
    scanf("%s",&Name);
    printf("Enter sale \n");
    scanf("%f",&Sale);
    printf("Enter value \n");
    scanf("%f",&Value);
    printf("Number : %d\n", Number);
    printf("Name : %s\n", Name);
    printf("Sale : %f\n", Sale);
    printf("Value : %f\n", Value);
    Profit = Sale - Value;
    printf("Profit : %f\n", Profit);
    if (Sale <= 1000)
    {
        Commission = Profit / 10*100;
        printf("Commission : %d\n", Commission);
    }
    else
    {
        Commission = Profit / 5*100;
        printf("Commission : %d\n", Commission);
    }
}
