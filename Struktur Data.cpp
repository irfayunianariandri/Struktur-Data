#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int n[10][01];
	int p;
	cout<<"Masukkan Panjang Matrik : ";
	cin>>p;
	for(int i=0;i<p;i++){
		for(int j=0;j<p;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]";
			cin>>n[i][j];
			if(i+j==p-1){
				n[i][j]=0;
			}
		}
	}
	cout<<endl;
	for(int i=0;i<p;i++){
		for(int j=0;j<p;j++){
			cout<<setw(3)<<n[i][j];
		}
		cout<<endl;
	}
	return 0;
}
