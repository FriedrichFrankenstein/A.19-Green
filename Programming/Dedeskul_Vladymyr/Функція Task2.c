void IsSquare(FILE *fp) {

	float n=0;
	long long i=0,buffer;
	FILE *output = fopen ("resultTask2.txt","w");
	while (fscanf(fp, "%lli", &buffer)!=EOF){
		printf ("%lli\n", buffer);
		n=(long long)sqrt(buffer);
			if (n*n==buffer){
				fprintf (output, "%lli\n", buffer);
			}
		}
	fclose(output);
}
