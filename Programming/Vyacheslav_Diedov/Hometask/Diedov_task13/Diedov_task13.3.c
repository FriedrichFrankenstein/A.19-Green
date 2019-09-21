#include <stdio.h>

typedef struct
{
	float height;
	float width;
	float area;
}Mywindow;

	void printObject(Mywindow mywindow);
	
	void writeObjectToFile(Mywindow mywindow);

int main(){
	Mywindow mywindow;
	mywindow.height = 1.5, mywindow.width = 1.3, mywindow.area = mywindow.height * mywindow.width;
	printObject(mywindow);
	writeObjectToFile(mywindow);
	return 0;
}

	void printObject(Mywindow mywindow){
		printf("My window has:\nthe height = %g;\nthe width = %g;\nthe area = %g", mywindow.height, mywindow.width, mywindow.area);
	}
	
	void writeObjectToFile(Mywindow mywindow){
		FILE *myfile = fopen("data.txt", "w");
		fprintf(myfile, "My window has:\nthe height = %g;\nthe width = %g;\nthe area = %g", mywindow.height, mywindow.width, mywindow.area);
	}
