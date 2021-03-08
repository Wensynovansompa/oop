#include <iostream>
#include <conio.h>

using namespace std;

class employee{
	private:	
  	int emp_num;
  	float emp_comp;
  	
 	public:
  	void entData(){
  	
   		cout <<"Masukan Nomor Pegawai :";
   		cin >> emp_num;
   		cout << "Masukan Jumlah Gaji Pegawai :" ;
   		cin >> emp_comp;
   		cout <<"\n=======================\n";
  }
  
  	void display(){
  		cout << "Pegawai\'s Number " << emp_num << endl;
   		cout << "Pegawai\'s Salary " << emp_comp << endl;
  }
};
int main(){
	employee emp1, emp2, emp3;
 	cout << "Masukan data pegawai 1" << endl;
 	emp1.entData();

 	cout << "Masukan data pegawai 2" << endl;
 	emp2.entData();

 	cout << "Masukan data pegawai 3" << endl;
 	emp3.entData();

 	cout << "Total " << endl;
     
 	emp1.display();
 	emp2.display();
 	emp3.display();
}