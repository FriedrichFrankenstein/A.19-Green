#include <stdio.h>
#include <conio.h>

int main ()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c\n", &ch);
    scanf("%s\n", &s);
    scanf ("%[^\n]%*c\n", &sen );
    printf ( "%c\n%s\n%s", ch, s, sen );
    //getchar;
    return 0;
}
