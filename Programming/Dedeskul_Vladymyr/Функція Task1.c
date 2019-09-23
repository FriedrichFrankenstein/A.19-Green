void DivBy3(FILE *fp){
	
	int count=0;
	int Sum=0, Num;
	int i=0,j=0;
	char* buffer=(char*)malloc(100*sizeof(char));
	FILE *output = fopen ("resultTask1.txt","w");
	while (fscanf(fp, "%s", buffer)!=EOF){
		for (j=0;j<strlen(buffer);j++){
				Num = buffer[j] - 48;
				Sum+=Num;
		}
			printf ("%i\n", Sum);
			if (Sum%3==0){
				fprintf (output, "1\n");
			}else {
				fprintf (output, "0\n");
			}
			Sum=0;
	}
	fflush(output);
	fclose(output);
}
