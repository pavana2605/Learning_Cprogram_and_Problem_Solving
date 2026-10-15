
#include <stdio.h>

union Value
{
    float temperature;
    char door_state;
    long pulses;
};

struct Reading
{
    int sensor_id;
    char kind;
    union Value value;
};

// Equivalent structure with all fields active at once
struct AllFields
{
    int sensor_id;
    char kind;
    float temperature;
    char door_state;
    long pulses;
};

int main()
{
    struct Reading readings[1000];
    int n;

    scanf("%d", &n);

    // Validate count
    if (n <= 0 || n > 1000)
    {
        printf("INVALID COUNT\n");
        return 0;
    }

    // Read sensor records
    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &readings[i].sensor_id,
              &readings[i].kind);

        // Validate kind before reading the corresponding value
        if (readings[i].kind != 'T' &&
            readings[i].kind != 'D' &&
            readings[i].kind != 'P')
        {
            printf("INVALID KIND\n");
            return 0;
        }

        switch (readings[i].kind)
        {
            case 'T':
                scanf("%f", &readings[i].value.temperature);
                break;

            case 'D':
                scanf(" %c", &readings[i].value.door_state);
                break;

            case 'P':
                scanf("%ld", &readings[i].value.pulses);
                break;
        }
    }

    // Print sensor report
    printf("SENSOR REPORT\n");

    for (int i = 0; i < n; i++)
    {
        printf("Sensor %d ", readings[i].sensor_id);

        switch (readings[i].kind)
        {
            case 'T':
                printf("temperature %.2f C\n",
                       readings[i].value.temperature);
                break;

            case 'D':
                if (readings[i].value.door_state == 'O')
                    printf("door OPEN\n");
                else
                    printf("door CLOSED\n");
                break;

            case 'P':
                printf("pulses %ld\n",
                       readings[i].value.pulses);
                break;
        }
    }

    // Print memory footprint comparison
    printf("sizeof(union Value): %zu\n", sizeof(union Value));
    printf("sizeof(Reading) with union: %zu\n",
           sizeof(struct Reading));
    printf("sizeof(Reading) with all fields: %zu\n",
           sizeof(struct AllFields));
    printf("Bytes saved per record: %zu\n",
           sizeof(struct AllFields) - sizeof(struct Reading));

    return 0;
}
