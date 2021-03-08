#include <iostream>
#include <conio.h>

using namespace std;

char AmbilApaYangMerekaInginkan();

class tollBooth{
	private:
  		unsigned int numCars;
  		double jumlah;
  		
	public:
	tollBooth(){
   	numCars = 0;
   	jumlah = 0;
   	
  }
	void Membayar(){
   		numCars++;
   		jumlah+=0.50;
  }
  	void TidakMembayar(){
   		numCars++;
  }
  	void display() {
   		cout << "Jumlah Dari Semua Mobil yang dipilih : " << numCars << endl;
   		cout << "Total Jumlah : " << jumlah << endl;
  }
};
int main(){
	tollBooth booth;
 	char ApaYangMerekaInginkan;
 	ApaYangMerekaInginkan = AmbilApaYangMerekaInginkan();
 
 	while(ApaYangMerekaInginkan!='e'){
	  	switch(ApaYangMerekaInginkan){
   			case('y'):
    		cout << "Bayar" << endl << endl;
    		booth.Membayar();
    		ApaYangMerekaInginkan = AmbilApaYangMerekaInginkan();
    
    break;
   		case('n'):
    	cout << "Tidak Bayar" << endl << endl;
    	booth.TidakMembayar();
    	ApaYangMerekaInginkan = AmbilApaYangMerekaInginkan();
    	
    break;
  		case('e'):
    	cout << "Result" << endl << endl;
    break;
   		default:
    		cout << "Input Yang di Masukan Salah" << endl;
  }
 }
 booth.display();
}

char AmbilApaYangMerekaInginkan(){
	char a;
 		cout << "Tekan  p  untuk Bayar dan lanjut membeli." << endl;
 		cout << "Tekan  n  untuk Membeli tanpa membayar." << endl;
 		cout << "Tekan  s  untuk melihat hasil transaksi dan keluar." << endl;
 		cout << "Tentukan Pilihanmu " << endl;
 		a = getch();
 		
 		return a;
}