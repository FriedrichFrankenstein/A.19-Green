#include <iostream>
#include <fstream>
#include "SummaOfMoney.h"
#include "MoneySumma.h"

using namespace std;

MoneySumma FileScanf()
{
    MoneySumma a;
    ifstream in;
    in.open("data.txt");
    in>>a.grivnas>>a.coins;
    in.close();

    return a;
}
