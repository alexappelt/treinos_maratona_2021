#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{


	int e=0, k=0, cont=0;

	cin>>k;

	while(k--){
		cin>>e;
		if(e != 1){
			cont++;
		}
	}

	cout<<cont<<endl;

	return 0;
}