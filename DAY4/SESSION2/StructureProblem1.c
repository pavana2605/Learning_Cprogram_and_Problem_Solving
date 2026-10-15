#include <stdio.h>
struct Address
{
    char village[50];
    int pincode;
};

struct Member
{
    int id;
    char name[100];
    float share_capital;
    struct Address address; // assosiation agrigation composition...(inheritance applicable in c using this)
};
int main()
{
    int n;
    double total = 0;
    int max = -1; // because in loop i is starting from 0 .
    struct Member array[1000];
    printf("enter the no. of members:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input.");
        return 0;
    }
    // read members
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i].id);
        scanf("%s", array[i].name);
        scanf("%f", &array[i].share_capital);
        scanf("%s", array[i].address.village);
        scanf("%d", &array[i].address.pincode);
        // total sum of capital.
        total = total + array[i].share_capital; // kedans also can be used.
        if (array[i].share_capital > array[max].share_capital)
        {
            max = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i].id);
        printf("%s", array[i].name);
        printf("%f", array[i].share_capital);
        printf("%s", array[i].address.village);
        printf("%d", array[i].address.pincode);
    }
    printf("\n\nThe Total share holding:%f", total);
    printf("%d %s %f", array[max].id, array[max].name, array[max].share_capital);
    return 0;
}