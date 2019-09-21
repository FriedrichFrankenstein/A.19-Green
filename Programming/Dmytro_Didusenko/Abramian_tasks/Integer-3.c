#include <stdio.h>
#include <conio.h>
main()
{
	int filesize_byte, filesize_kbyte;
	printf("Input the weihgt in kilogramms and press Enter \n");
	scanf("%i", &filesize_byte);
	filesize_kbyte = filesize_byte / 1024;
	printf("Filesize in kilobytes = %i", filesize_kbyte);
	getch();
}
