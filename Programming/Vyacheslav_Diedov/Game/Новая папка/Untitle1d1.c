#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
 
 
int sudoku[9][9];
int x,y;
bool povtor[9][9];
bool lg=true;
bool kg=false;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
void gotoxy(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    SetConsoleTextAttribute(hConsole, 12);
    return;
}
 
void zapolnenie()
{
    FILE* f;
    int kolichestvo;
    int num;
    f = fopen("sudoku.txt", "r");
    if (!f)
    {
        printf("éË®°™a!");
        getch();
        exit(0);
    }
    fscanf(f, "%i", &kolichestvo);
    num = rand() % kolichestvo + 1; 
    for(int k = 0; k < num; k++)
    {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                fscanf(f, "%i", &sudoku[j][i]);
    }
    fclose(f);
 
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(sudoku[i][j]==0)
                povtor[i][j]=true;
            else 
                povtor[i][j]=false;
}
 
void pechat()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
  printf("\n\n");
  SetConsoleTextAttribute(hConsole,14);
  printf("                    …ÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕÀÕÕÕª\n");
  SetConsoleTextAttribute(hConsole,15 );
  SetConsoleTextAttribute(hConsole,14);
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    ÃÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕπ\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    ÃÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕŒÕÕÕπ\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    Ã");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("Œ");SetConsoleTextAttribute(hConsole,15 );printf("ÕÕÕŒÕÕÕŒÕÕÕ");SetConsoleTextAttribute(hConsole,14);printf("π\n");
  printf("                    ∫");SetConsoleTextAttribute(hConsole,15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫");SetConsoleTextAttribute(hConsole, 15 );printf("   ∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫   ");SetConsoleTextAttribute(hConsole,15);printf("∫   ∫   ");SetConsoleTextAttribute(hConsole,14);printf("∫\n");
  printf("                    »ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕ ÕÕÕº\n");
     
 
  for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(sudoku[i][j]!=0)
            {
                gotoxy(i*4+22,j*2+3);
                printf("%i",sudoku[i][j]);
            }
        
}
void proverka()
{
    bool digit[9];
    bool oshibka;
    for(int i=0;i<9;i++)
    {
        oshibka=false;
        for(int j=0;j<9;j++)
            digit[j]=false;
        for(int j=0;j<9;j++)
        {
            if(sudoku[i][j]==0)
            {   
                oshibka=true;
                x=i;
                y=j;
                break;
            }
            if(digit[sudoku[i][j]-1]==true)
            {   
                oshibka=true;
                x=i;
                y=j;
                break;
            }
            digit[sudoku[i][j]-1]=true;
        }
        if(oshibka) break;
    }
    if(!oshibka)
    {
        for(int i=0;i<9;i++)
        {
            oshibka=false;
            for(int j=0;j<9;j++)
                digit[j]=false;
            for(int j=0;j<9;j++)
            {
                if(sudoku[j][i]==0)
                {   
                    oshibka=true;
                    x=i;
                    y=j;
                    break;
                }
                if(digit[sudoku[j][i]-1]==true)
                {   
                    oshibka=true;
                    x=i;
                    y=j;
                    break;
                }
                digit[sudoku[j][i]-1]=true;
            }
            if(oshibka) break;
        }
    }
    if(oshibka==true)
    {
        gotoxy(0,0);
        if(lg==true) 
        {
            SetConsoleTextAttribute(hConsole,6|10); 
            printf("éË®°™\xa0 ¢ ·‚‡Æ™•(%i) ·‚Æ´°Ê•(%i)     ",y+1,x+1);
        }
        if(kg==true)    
        {
            SetConsoleTextAttribute(hConsole,6|10); 
            printf("Error in column(%i) row(%i)            ",y+1,x+1);
        }
        gotoxy(x*4+22,y*2+3);
        return;
 
    }
        if(kg==true) 
        {
            gotoxy(0,0);
            SetConsoleTextAttribute(hConsole,6|10);
            printf("                                        ");
            printf("You won ! Excelent!");
        }
        if(lg==true) 
        {
            gotoxy(0,0);
            SetConsoleTextAttribute(hConsole,6|10);
            printf("                                        ");
            printf("ÇÎ ØÆ°•§®´® ! Ç•´®™Æ´•Ø*Æ !");
        }
    
        
}
 
void cell(char c,int x, int y)///Á‡ÔÓÎÌÂÌËÂ Ó‰ÌÓÈ ˇ˜ÂÈÍË
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(povtor[x][y]==true)
    {
        sudoku[x][y]=c-0x30;
        SetConsoleTextAttribute(hConsole, 8|3);
        printf("%c",c);
        gotoxy(x*4+22,y*2+3);
    }
            
}
bool vvod()
{
    
    while(true)
    {
        int cc1 = getch();
            
        
        if(cc1=='1' | cc1=='2' | cc1=='3' | cc1=='4' | cc1=='5' | cc1=='6' | cc1=='7' | cc1=='8' | cc1=='9') 
                cell(cc1,x,y);  
                    
            
        if(cc1==224)
        {
            
            int cc2=getch();
            switch(cc2)
            {
                 case 72://‚‚Âı
                    if(y!=0) y--; ////ËÎË if(y>0) y--;
                    break;
                 case 80://‚ÌËÁ
                    if(y<8) y++;
                      break;
                 case 75://‚ÎÂ‚Ó
                    if(x>0) x--;
                      break;
                 case 77://‚Ô‡‚Ó
                    if(x!=8) x++;
                      break;
            }
 
           gotoxy(x*4+22,y*2+3);
                
         }
        if(cc1==13) break;
        if(cc1==32)
        {
            zapolnenie();
            gotoxy(0,0);
            pechat();
        }
        if(cc1==27) return(true);
        
        if (cc1 == 'l')
        {
            if (lg == true)
            {
                lg = false;
                kg = true;
            }
            else
            {
                lg = true;
                kg = false;
            }
        }
 
            
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        if(kg==true) 
        {
                gotoxy(59,3);
                printf("                     ");
                gotoxy(59,5);   
                printf("                     ");
                gotoxy(59,7);
                printf("                     ");
                gotoxy(59,9); 
                printf("                     ");
                gotoxy(59,11);
                printf("                     ");
                gotoxy(59,15);
                printf("                     ");
                gotoxy(59,17);
                printf("                     ");
                gotoxy(59,19);
                printf("                     ");
                gotoxy(59,3);SetConsoleTextAttribute(hConsole,6|10);    
                printf("Move(\x18,\x19,\x1a,\x1b)");
                gotoxy(59,5);SetConsoleTextAttribute(hConsole,6|10);        
                printf("Change(Space)");
                gotoxy(59,7);SetConsoleTextAttribute(hConsole,6|10);
                printf("Language(L)");
                gotoxy(59,9);SetConsoleTextAttribute(hConsole,6|10);
                printf("Check(Enter)");
                gotoxy(59,11);SetConsoleTextAttribute(hConsole,6|10);   
                printf("Exit(Esc)");
                gotoxy(59,15);SetConsoleTextAttribute(hConsole,7|9);    
                printf("Sudoku v 2.3");
                gotoxy(59,17);SetConsoleTextAttribute(hConsole,7|9);    
                printf("20 december 2012");
                gotoxy(59,19);SetConsoleTextAttribute(hConsole,7|9);
                printf("All rights reserved");
                gotoxy(x*4+22,y*2+3);
                
        }
        if(lg==true) 
        {
            gotoxy(59,3);
            printf("                     ");
            gotoxy(59,5);   
            printf("                     ");
            gotoxy(59,7);
            printf("                     ");
            gotoxy(59,9); 
            printf("                     ");
            gotoxy(59,11);
            printf("                     ");
            gotoxy(59,15);
            printf("                     ");
            gotoxy(59,17);
            printf("                     ");
            gotoxy(59,19);
            printf("                     ");
            gotoxy(59,3);SetConsoleTextAttribute(hConsole,6|10);    
            printf("ìØ‡*¢´•*®•(\x18,\x19,\x1a,\x1b)");
            gotoxy(59,5);SetConsoleTextAttribute(hConsole,6|10);        
            printf("ë¨•*®‚Ï(è‡Æ°•´)");
            gotoxy(59,7);SetConsoleTextAttribute(hConsole,6|10);    
            printf("üßÎ™(L)");
            gotoxy(59,9);SetConsoleTextAttribute(hConsole,6|10);    
            printf("è‡Æ¢•‡™*(Enter)");
            gotoxy(59,11);SetConsoleTextAttribute(hConsole,6|10);   
            printf("ÇÎÂÆ§(Esc)");
            gotoxy(59,15);SetConsoleTextAttribute(hConsole,7|9);    
            printf("ë„§Æ™„ ¢•‡·®Ô 2.3");
            gotoxy(59,17);SetConsoleTextAttribute(hConsole,7|9);    
            printf("20 §•™*°‡Ô 2012");
            gotoxy(59,19);SetConsoleTextAttribute(hConsole,7|9);
            printf("Ç·• Ø‡*¢* ß*È®È•*Î");
            gotoxy(x*4+22,y*2+3);
                
        }
    }
    
    return(false);
    
}
 
int main(int argc, char* argv[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        gotoxy(59,3);SetConsoleTextAttribute(hConsole,6|10);    
        printf("ìØ‡*¢´•*®•(\x18,\x19,\x1a,\x1b)");
        gotoxy(59,5);SetConsoleTextAttribute(hConsole,6|10);        
        printf("ë¨•*®‚Ï(è‡Æ°•´)");
        gotoxy(59,7);SetConsoleTextAttribute(hConsole,6|10);    
        printf("üßÎ™(L)");
        gotoxy(59,9);SetConsoleTextAttribute(hConsole,6|10);    
        printf("è‡Æ¢•‡™*(Enter)");
        gotoxy(59,11);SetConsoleTextAttribute(hConsole,6|10);   
        printf("ÇÎÂÆ§(Esc)");
        gotoxy(59,15);SetConsoleTextAttribute(hConsole,7|9);    
        printf("ë„§Æ™„ ¢•‡·®Ô 2.3");
        gotoxy(59,17);SetConsoleTextAttribute(hConsole,7|9);    
        printf("20 §•™*°‡Ô 2012");
        gotoxy(59,19);SetConsoleTextAttribute(hConsole,7|9);
        printf("Ç·• Ø‡*¢* ß*È®È•*Î");
        gotoxy(x*4+22,y*2+3);
    
    gotoxy(0,0);
    srand(clock());
    CONSOLE_CURSOR_INFO cursor_size = {100, true};
    SetConsoleCursorInfo(hConsole, &cursor_size);
    zapolnenie();
    pechat();
    x=0;y=0;
    gotoxy(x*4+22,y*2+3);
    while(true)
    {
        if(vvod()==true)  return 0;
        proverka();
    }
    
}
