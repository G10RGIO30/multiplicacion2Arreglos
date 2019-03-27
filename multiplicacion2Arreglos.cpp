#include <iostream>

using namespace std;

int main(){
	int arreglo1[] = {1,2,3};
	int arreglo2[] = {4,5,6};
	int arreglo3[3];
	
	for(int i=0;i<3;i++){
		arreglo3[i]=arreglo1[i]*arreglo2[i];
	}
	
	cout<<"El resultado es: "<<endl;
	for(int j =0;j<3;j++){
		cout<<arreglo3[j]<<" ";
	}
	
	return 0;
}
