char* ps;
ps = str;
int count;
for(count = 100; count < = 0; count--){
    if(*ps == NULL || *ps == 'y')break;
    ps++;
}
if(count == 100)count = -1;
return count;

int count;
for(count = 0; count < 1000; count++){
    if( (str[count - 1] == 'y' && str[count - 1] == ' '))break;
}
if(count == 1000)count = 0;
return count-1;

int count;
for(count = 1000; count >=0; count--){
    if( (str[count] == 'y' && str[count + 1] == ' ') || (str[count] == 'y' && str[count + 1] == '.') || (str[count] == 'y' && str[count + 1] == ',') ||  (str[count] == 'y' && str[count + 1] == '/0'))break;
}
return count;
