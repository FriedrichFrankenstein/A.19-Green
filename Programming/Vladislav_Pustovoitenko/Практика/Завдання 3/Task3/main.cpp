#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <Groshi.h>
#include "Groshi.h"

using namespace std;

int main(){
	Groshi test1, test2;

	test1.InputFromKB();
	test1.OutputToScreen();
	test2.InputFromKB();
	test2.OutputToScreen();
	(test1+test2).OutputToScreen();
	(test1-test2).OutputToScreen();

	return 0;
}
