#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	

	int e=0, vet[7] = {1,3,5,10,25,50,100};

	cin>>e;

	for(int i=0;i<7;i++){
		if(e<=vet[i]){
			cout<<"Top "<<vet[i]<<endl;
			break;
		}
	}








	/*if(e==1){
		cout<<"Top 1"<<endl;
	}else if(e<=3){
		cout<<"Top 3"<<endl;
	}else if(e<=5){
		cout<<"Top 5"<<endl;
	}else if(e<=10){
		cout<<"Top 10"<<endl;
	}else if(e<=25){
		cout<<"Top 25"<<endl;
	}else if(e<=50){
		cout<<"Top 50"<<endl;
	}else if(e<=100){
		cout<<"Top 100"<<endl;
	}*/

	

	return 0;
}