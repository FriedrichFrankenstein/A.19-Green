#include <stdio.h>

enum {
    Ludogorec, 
	Razgrad  = 1, 
    Dunav = 3, 
	Ruse = 3, 
    Beroe = 5, 
	StaraZagora = 5, 
    Levsky = 7, 
	Sofia = 7, 
    ChernoMore = 8, 
	Varna = 8, 
    Loko = 10, 
	Plowdyv = 10,
    Etyr = 11, 
	VelykoTyrnovo = 11
}Bulgarclubs;

int main(){
	int place[7] = {};
	int i, j;
	for ( i = 0, j = 0; i < 20; i++){
    	switch (i){
	        case Ludogorec: place[j] = Razgrad;
        	    			j++;
    	        			break;
			 case Dunav: place[j] = Ruse;
        	    			j++;
    	        			break;
			 case Beroe: place[j] = StaraZagora;
        	    			j++;
    	        			break;
			 case Levsky: place[j] = Sofia;
            				j++;
    		       			break;
			 case ChernoMore: place[j] = Varna;
        	    			j++;
    	        			break;
			 case Loko: place[j] = Plowdyv;
        	    			j++;
    	        			break;
			 case Etyr: place[j] = VelykoTyrnovo;
            				j++;
            				break;
        	default: break;
    	}
	}

	for( i = 0; i < 7; i++){
		printf("%i\n", place[i]);
	}

	return 0;
}
