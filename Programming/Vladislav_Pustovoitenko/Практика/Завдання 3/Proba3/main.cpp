#include <iostream>
#include <string>
#include <fstream>

using namespace std;
typedef struct MoneySumma
{
    int grivnas;
    int coins;

}groshi;

int main()
{
    groshi grivnas;
    groshi coins;
    ofstream fout("text.txt");
    fout<<grivnas;
    fout<<coins;
    fout.close();

    return 0;
}
