/*	TUGAS ARRAY
*/	

#include <iostream>

using namespace std;

int main(){
	//KAMUS
	
	char hrf[4]; 
	char s; 
	int z=0, sum=0;
	//ALGORITMA
	
	while(z<= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>hrf[z];  
			z++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<hrf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu \n";
	cin>>s;
	
	for(int z=0; z<=3; z++ ){
	if(s == hrf[z]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<s<<" : sebanyak: "<<sum;
	
}
