#include <iostream>
#include <string>
#include <iomanip>

int main()

{
    const int MAX = 80; 
    //int i;
    char str[MAX];
    std::cout << "Input string: "; 
    std::cin >> std::setw(MAX) >> str;
    std::cout << "You’ve input: " << str << std::endl; 
    std::cout << "You’ve input (another way): ";
    for (int i = 0; i < MAX - 1; i++){
    	if ( *(str + i) == 0) break;
    	std::cout << *(str + i);
	}
    return 0;
}

