





char* s1 = &str1[0];
char* s2 = &str2[0];
if(n >= strlen(s2)) return "Error";

if(n < 8){
	strncpy(s1, s2, n);
    s1[n] = '\0';
    return s1;
}
return "Error";
