#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	cout<<"Nama     : Diaz Dwi Kurniawan"<<endl;
	cout<<"Nim      : F1B019040"<<endl;
	cout<<"Kelompok : 8"<<endl;
	
	
	int i,j;
	int nimA[2][2];
	int nimB[2][2];
	int jmlh [2][2];
	
	cout<<"PENGURANGAN MATRIX :\n";
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	cout<<"Masukkan Index "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nimA[i][j];
	}
	}
	cout<<endl;
	for(i=0; i<2; i++){
	for(j=0; j<2; j++){
	cout<<"Masukan Index "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nimB[i][j];
	}
	}
	cout <<endl;
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	jmlh [i][j]=nimA[i][j]-nimB[i][j];
	cout<<jmlh[i][j]<<" ";
	}
	cout<<endl;
	}
	}
