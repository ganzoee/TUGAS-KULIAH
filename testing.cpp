#include <iostream>

using namespace std;

int main(){
	cout <<"AYAM POTONG"<<endl;
	cout <<"1. Ayam 1 kg ...rp\n";
	cout <<"2. Ayam 2 kg ...rp\n";
	cout <<"3. Ayam 3 kg ...rp\n";
	cout <<"4. Ayam 4 kg ...rp\n";
	
	int pilihan;
	cout <<"\nPilihan anda : ";
	cin >> pilihan;
	
	if(pilihan == 1){
		cout << "Bayar : ... rp"<<endl;
	}else if(pilihan == 2){
		cout << "Bayar : ... rp"<<endl;
	}else if(pilihan == 3){
		cout << "Bayar : ... rp"<<endl;
	}else if(pilihan == 4){
		cout << "Bayar : ... rp"<<endl;
	}else{
		cout << "Pilihan hanya 1-4"<<endl;
	}
}
