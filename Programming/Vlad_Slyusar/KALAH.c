#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <dos.h>
#include <iostream.h>
#include <conio.h>

#define ANAME           "Max"
#define BNAME           "You"
#define NH              6
#define NSTONES         6
#define NBLINKS         2

#define FIELDLINE       9
#define PROMPTLINE      17
#define MESGLINE        5

#define CLEAR()         clrscr()
#define CLEARLINE()     printf ("")
#define CURSOR(r,c)     printf ("  ")
#define CURSOR(r,c)     printf ("  ",(r+1), (c)+1, "   ")
#define INVERSE()       printf ("")
#define NORMAL()        printf ("")

int apit [NH+1];
int bpit [NH+1];

char movestring [80];
char *moveptr;

int msg;
int level = 1;
int user_level = -1;


int yes (char *prompt)
{
        char reply [80], *p;

        for (;;) {
                CURSOR (PROMPTLINE, 0);
                printf (prompt);
                CLEARLINE ();
                fflush (stdout);
                if (! fgets (reply, sizeof(reply), stdin))
                        continue;
                for (p=reply; *p==' ' || *p=='\t'; ++p);
                switch (*p) {
                case 0:
                case 'y': case 'Y':
                        return (1);
                case 'n': case 'N':
                case 'q': case 'Q':
                        return (0);
                }
        }
}

void clear_message ()
{
        CURSOR (MESGLINE, 0);
        CLEARLINE ();
        msg = 0;
}

void message (char *fmt, ...)
{

        va_list ap;

        if (msg)
                clear_message ();
        else
                CURSOR (MESGLINE, 0);
        va_start (ap, fmt);
        vprintf (fmt, ap);
        va_end (ap);
        msg = 1;
        printf("\n");
}

void draw_game (char *aname, int *ap, char *bname, int *bp)
{

        int i;
        static char *level_name [] = {
                "0 >>", "I >>", "II >>", "III >>", "IV >>",
                "V >>", "VI >>", "VII >>", "VIII >>", "IX >>",
        };

        CURSOR (0, 0);
        CLEAR ();
        msg = 0;
        printf ("\n%-12s<< Level %-7s%11s\n",
                aname, level_name [level], bname);
        printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        CURSOR (FIELDLINE-2, 8);
        printf ("     6    5    4    3    2    1\n");
        CURSOR (FIELDLINE-1, 8);
        cout<<endl<<"    ";
        for (i=0; i<NH; ++i) {
                CURSOR (FIELDLINE, 8 + 8 * (NH-1-i));
                printf ("(%2d)", ap [i]);
        }
        cout<<endl<<endl<<"("<<ap [NH]<<")"<<"    1    2    3    4    5    6   "<<"("<<bp [NH]<<")";
        cout<<endl<<endl<<"    ";
        for (i=0; i<NH; ++i) {
                CURSOR (FIELDLINE+4, 8 + 8*i);
                printf ("(%2d)", bp [i]);
        }
        cout<<endl;
}

int all_pits_empty (int *pit)
{
        int i;

        for (i=0; i<NH; ++i)
                if (*pit++)
                        return (0);
        return (1);
}

void draw_move (int r, int c, int old, int newz)
{

        int i;

        switch (r) {
        case 'a':
                r = FIELDLINE;
                c = 8 + 8 * (NH - 1 - c);
                break;
        case 'k':
                r = FIELDLINE+2;
                c = c=='b' ? 8+8*NH : 0;
                break;
        case 'b':
                r = FIELDLINE+4;
                c = 8 + 8*c;
                break;
        default:
                printf ("bad draw_move %c\n", r);
                exit (-1);
        }
        for (i=0; i<NBLINKS; ++i) {
                CURSOR (r, c);
                INVERSE ();
                printf ("(%1d)", old);
                fflush (stdout);
                NORMAL ();
                CURSOR (r, c);
                printf ("(%2d )", old);
                fflush (stdout);
        }
        CURSOR (r, c);
        printf ("(%1d )\n", newz);
}

void draw_empty (int x, int *pit)
{


        int m;

        m = -1;
        while (++m < NH) {
                if (! pit [m])
                        continue;
                pit [NH] += pit [m];
                draw_move (x, m, pit [m], 0);
        }
        draw_move ('k', x, pit [NH], pit [NH]);
}

int make_move (int x, int move, int *mypit, int *herpit)
{
        int c;

        c = mypit [move];
        mypit [move] = 0;

        if (x)
        {
                printf("\n");
                draw_move (x, move, c, 0);
        }
loop:
        while (++move < NH) {
                ++ mypit [move];
                if (x)
                        draw_move (x, move, mypit [move], mypit [move]);
                if (--c < 1) {
                        if (mypit [move] == 1 && herpit [NH-1-move]) {
                                if (x) {
                                        if (x == 'a')
                                                message (rand() & 1 ?
                                                        "I like eating your stones..." :
                                                        "Your stones are so sweet!");
                                        draw_move (x^3, NH-1-move,
                                                herpit [NH-1-move], 0);
                                        draw_move (x, move, 0, 0);
                                }
                                mypit [NH] += herpit [NH-1-move] + 1;
                                herpit [NH-1-move] = 0;
                                mypit [move] = 0;
                                if (x)
                                        draw_move ('k', x, mypit [NH], mypit [NH]);
                        }
                        return (1);
                }
        }
        ++mypit [NH];
        if (x)
                draw_move ('k', x, mypit [NH], mypit [NH]);
        if (--c < 1)
                return (0);
        move = -1;
        while (++move < NH) {
                ++ herpit [move];
                if (x)
                        draw_move (x^3, move, herpit [move], herpit [move]);
                if (--c < 1)
                        return (1);
        }
        move = -1;
        goto loop;
}

int user_move ()
{
        for (;;) {
                while (! *moveptr) {
                        moveptr = movestring;
                        CURSOR (PROMPTLINE, 0);
                        message("\nYour move:");
                        CLEARLINE ();
                        fflush (stdout);
                        if (! fgets (movestring, sizeof(movestring), stdin))
                                continue;
                        if (msg)
                                clear_message ();
                }
                CURSOR (PROMPTLINE, 0);
                CLEARLINE ();
                switch (*moveptr++) {
                case 'r': case 'R':
                        draw_game (ANAME, apit, BNAME, bpit);
                        continue;

                case 'q': case 'Q':
                        exit (0);

                case '1': case '2': case '3': case '4': case '5': case '6':
                        return (moveptr [-1] - '1');
                }
        }
}


int estimate (int *mypit, int *herpit)
{
        int score, i, n;
        static int weight[13] = { 0, 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2 };


        score = 0;
        for (i=0; i<NH; ++i) {
                n = mypit[i] + i;
                score += n/13 + weight [n%13] - i;
        }
        for (i=0; i<NH; ++i) {
                n = herpit[i] + i;
                score -= n/13 + weight [n%13] - i;
        }


        score = score/2 + mypit [NH] - herpit [NH];
        return score;
}


int find_move (int *mypit, int *herpit, int *score, int depth)
{
        int move, best, s, player_changed, i;
        int apit_copy [NH+1], bpit_copy [NH+1];

        *score = mypit [NH] - herpit [NH];


        if (mypit [5] == 1) {
                ++*score;
                return (5);
        }
        if (mypit [5] == 0 && mypit [4] == 2) {
                ++*score;
                return (4);
        }


        best = -1;
        for (move=0; move<NH; ++move) {
                if (! mypit [move])
                        continue;

                if (best < 0)
                        best = move;

                memcpy (apit_copy, mypit, sizeof(apit_copy));
                memcpy (bpit_copy, herpit, sizeof(bpit_copy));

                player_changed = make_move (0, move, apit_copy, bpit_copy);
                if (all_pits_empty (apit_copy)) {
                        s = apit_copy [NH] - bpit_copy [NH];
                        for (i=0; i<NH; ++i)
                                s -= bpit_copy [i];

                } else if (! player_changed) {

                        find_move (apit_copy, bpit_copy, &s, depth);

                } else if (depth > 0) {

                        find_move (bpit_copy, apit_copy, &s, depth - 1);


                        s = -s;
                } else {

                        s = estimate (apit_copy, bpit_copy);
                }
                if (s > *score || (s == *score && (rand() & 1))) {
                        *score = s;
                        best = move;
                }
        }
        return best;
}

void random_message ()
{

        static char *tab [] = {
                "My turn: I'm thinking.",
                "Well, well...",
                "Now I will beat you.",
                "Surrender!",
                "Oh-oh.",
                "You have no chance.",
                "You have tired me.",
                "Do you think you are a Grandmaster?",
        };
        int n;

        n = (unsigned) rand() % (sizeof(tab) / sizeof(tab[0]));
        message (tab [n]);

}

void play_game ()
{
        int i, s;

        for (i=0; i<NH; ++i)
                apit [i] = bpit [i] = NSTONES;
        apit [NH] = bpit [NH] = 0;
        draw_game (ANAME, apit, BNAME, bpit);
        for (;;) {
                moveptr = movestring;
                *moveptr = 0;
                do {
                        if (all_pits_empty (bpit)) {
                                draw_empty ('a', apit);
                                return;
                        }
                        if (user_level < 0) {
                                i = user_move ();
                                if (! bpit [i]) {
                                        message ("Cell %d is empty.", i);
                                        continue;
                                }
                        } else {
                                CURSOR (PROMPTLINE, 0);
                                printf ("Thinking...");
                                CLEARLINE ();
                                fflush (stdout);
                                i = find_move (bpit, apit, &s, user_level);
                                CURSOR (PROMPTLINE, 0);
                                printf ("\nYour move is %d", i+1);
                                CLEARLINE ();
                                fflush (stdout);

                        }
                } while (! make_move ('b', i, bpit, apit));

                do {
                        if (all_pits_empty (apit)) {
                                draw_empty ('b', bpit);
                                return;
                        }
                        random_message ();
                        fflush (stdout);
                        i = find_move (apit, bpit, &s, level);
                        message ("\nMy move is %d", i+1);
                } while (! make_move ('a', i, apit, bpit));
        }
}

void usage ()
{

        printf ("Usage:\n");
        printf ("\tkalah [level] [user-level]\n");
        printf ("Level:\n");
        printf ("\t0\t- trivial\n");
        printf ("\t1\t- easy\n");
        printf ("\t2\t- novice\n");
        printf ("\t3\t- intermediate (default)\n");
        printf ("\t4\t- expert\n");
        printf ("\t5\t- master\n");
        printf ("\t6\t- genius\n");
        printf ("\t...\n");
        printf ("\t9\t- Kasparov\n");
        exit (-1);
}

int main (int argc, char **argv)
{
        if (argc > 3)
                usage ();
        if (argc > 2) {
                if (argv[2][0] < '0' || argv[2][0] > '9')
                        usage ();
                user_level = atoi (argv[2]);
                if (user_level < 0 || user_level > 9)
                        usage ();
        }
        if (argc > 1) {
                if (argv[1][0] < '0' || argv[1][0] > '9')
                        usage ();
                level = atoi (argv[1]);
                if (level < 0 || level > 9)
                        usage ();
        }
        srand ((int) time ((long) 0));

        for (;;) {
                play_game ();
                if (apit [NH] != bpit [NH])
                        message ("%s won.\n",
                                apit [NH] > bpit [NH] ? ANAME : BNAME);
                if (user_level >= 0 || ! yes ("Next game? "))
                        break;
        }
        CURSOR (PROMPTLINE, 0);
        CLEAR ();
        getch();
        return (0);
}
