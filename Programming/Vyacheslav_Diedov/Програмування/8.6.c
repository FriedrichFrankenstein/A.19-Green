#include <stdio.h>

struct Club
{
    char name[20];
    char city[20];
    int place;
};

int main()
{
    struct Club clubs[7];
    int i, j;
    for ( i = 0; i < 7; i++)
    {
        printf("Input name\n");
        scanf("%s", clubs[i].name);
        printf("Input city\n");
        scanf("%s", clubs[i].city);
        printf("Input place\n");
        scanf("%i", &clubs[i].place);
    }
    for ( i = 0; i < 7; i++ )
    {
        printf ( "Club name - %s, city - %s, place - %i\n", clubs[i].name, clubs[i].city, clubs[i].place );
    }
    printf("\n");
    for ( i = 0; i < 7; i++ )
    {
        for ( j = 0; j < 7; j++ )
        {
            if ( clubs[j].place == ( i + 1 ))
            {
                printf ( "Club name - %s, city - %s, place - %i\n", clubs[j].name, clubs[j].city, clubs[j].place );
            }
        }
    }
    return 0;
}
