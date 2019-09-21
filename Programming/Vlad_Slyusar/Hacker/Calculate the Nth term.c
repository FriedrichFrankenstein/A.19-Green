#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int h = 3;

int find_nth_term( int n , int a, int b, int c){
    int koef = n + 2;
    if ( koef <= 3){
            printf("n = %i\n", n);
            switch (koef) {
            case 1: {
            return a;
            }
            case 2: {
            return b;
            }
            case 3: {
            return c;
            }
        }
    }

    if ( n + 2 == h){
        if ( a > b && a > c){
            return a;
        } else if(b > c){
        return b;
        }else {
        return c;
        }
    }
    if ( h % 3 == 0){
        h++;
        a = a + b + c;
       // printf("n = %i\na = %i\nb = %i\nc = %i\n", n, a, b, c);
        a =  find_nth_term ( n ,  a,  b,  c);
        return a;
    }
    if ( h % 3 == 1){
        h++;
        b = a + b + c;
       // printf("n1 = %i\na1 = %i\nb1 = %i\nc1 = %i\n", n, a, b, c);
        b = find_nth_term( n ,  a, b, c);
        return b;
    }
    if ( h % 3 == 2){
        h++;
        c = a + b + c;
        //printf("n2 = %i\na2 = %i\nb2 = %i\nc2 = %i\n", n, a, b, c);
        c = find_nth_term( n , a,  b, c);
        return c;
    }


}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n - 2, a, b, c);

    printf("%d", ans);
    return 0;
}

