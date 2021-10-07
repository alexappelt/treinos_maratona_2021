
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	int k=0, p=0;

	cin>>k;
	while(k--){

		cin>>p;
		int vet[p], vet2[p], soma=0;
	
		for(int i=0;i<p;i++){
			cin>>vet[i];
			vet2[i] = vet[i];
		}

		sort(vet2, vet2+p, greater<int>());

		for(int i=0;i<p;i++){
			if(vet[i] == vet2[i]){
				soma+=1;
			}
		}
	
		cout<<soma<<endl;


	}



	return 0;
}


