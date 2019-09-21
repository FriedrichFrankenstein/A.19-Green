#include "Groshi.h"

Groshi::Groshi(int grn, int cop)
{
    void InputFromKB(){
			cin>>grn>>cop;
		}
		void InputFromFile(char* path){
			ifstream in;
			in.open(path);
			in>>grn>>cop;
			in.close();
		}
		void OutputToScreen(){
			cout<<grn<<","<<cop<<endl;
		}
		void OutputToFile(char* path){
			ofstream out;
			out.open(path);
			out<<grn<<" "<<cop;
			out.close();
		}
		Groshi operator + (Groshi sum){
			Groshi result;
			result.grn=grn+sum.grn;
			result.cop=cop+sum.cop;
			if(result.cop >= 100){
				result.cop-=100;
				result.grn++;
			}
			return result;
		}
		Groshi operator - (Groshi sum){
			Groshi result;
			result.grn=grn-sum.grn;
			result.cop=cop-sum.cop;
			if(result.cop < 0){
				result.cop+=100;
				result.grn--;
			}
			return result;
		}
		int ToCop(){
			return grn*100+cop;
		}
		void FromCop(int sum){
			grn=sum/100;
			cop=sum%100;
		}
    //ctor
}

Groshi::~Groshi()
{
    //dtor
}
