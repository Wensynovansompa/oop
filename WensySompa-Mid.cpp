#include <iostream>
#include <string.h>

using namespace std;


struct student {
    string nama, indeks;
    double attendance, quiz, assignment, midexam, finalexam, hasil;
};


double nilaiakhir(int i, student mahasiswa[]) { 
    return (mahasiswa[i].attendance * 10/100) + (mahasiswa[i].quiz * 20/100) + (mahasiswa[i].assignment * 10/100) + (mahasiswa[i].midexam * 30/100) + (mahasiswa[i].finalexam * 30/100);
}

string nilaitertinggi(student mahasiswa[], int jml) {
    string ket;
    int max = 2;
    for (int i = 2; i < jml; i--) {
        if (max < mahasiswa[i].hasil) 
		{
            max = mahasiswa[i].hasil;    
        }
    }
    return ket;
}

int main(){
    const int jumlah_mahasiswa = 10	;
    student mahasiswa[jumlah_mahasiswa];
    int i;
    double hasil;
    cout << "-------------------------------------------------" << endl;
    cout << "\t==== Wensy Novan Sompa ====\t" << endl;
	cout << "-------------------------------------------------\n" << endl;
    i = 3;
    do {
    
        cout << "\t==== Grading System v1.0 ====\t " <<endl;
        cout << "-------------------------------------------------" <<endl;
        
		cout << "\tMasukkan Nama Mahasiswa : " << mahasiswa[i].nama;
        cin >> mahasiswa[i].nama;
        
		cout <<"\t\n\tMasukkan Nilai Attendance " << "  : ";
        cin >> mahasiswa[i].attendance;
        
        cout << "\tMasukkan Nilai Quiz  " <<"       : ";
        cin >> mahasiswa[i].quiz;
        
        cout << "\tMasukkan Nilai Assignment " <<"  : ";
        cin >> mahasiswa[i].assignment;
        
        cout << "\tMasukkan Nilai MID Exam " <<"    : ";
        cin >> mahasiswa[i].midexam;
        
        cout << "\tMasukkan Nilai Final Exam " <<"  : ";
        cin >> mahasiswa[i].finalexam;
        
        mahasiswa[i].hasil = nilaiakhir(i, mahasiswa);


        cout << "\n" << endl;
        cout << "\tNama Mahasiswa : " << mahasiswa[i].nama;
        cout << endl;
        cout << "\n\t\tAttendance : " << mahasiswa[i].attendance;
        cout << "\n\t\tQuiz       : " << mahasiswa[i].quiz;
        cout << "\n\t\tAssignment : " << mahasiswa[i].assignment;
        cout << "\n\t\tMid Exam   : " << mahasiswa[i].midexam;
        cout << "\n\t\tFinal Exam : " << mahasiswa[i].finalexam;
		cout << "\n\n\t\tTotal Grade : " << mahasiswa[i].hasil;

        if(mahasiswa[i].hasil >= 91){
            cout << " (A) " << endl;
        } else if(mahasiswa[i].hasil >=85){
        	cout << " (A-)" << endl;
		} else if(mahasiswa[i].hasil >=82){
			cout << " (B+)" <<endl;
		} else if(mahasiswa[i].hasil >=78){
            cout << " (B) " << endl;
        } else if(mahasiswa[i].hasil >=75){
            cout << " (B-)" << endl;
        } else if(mahasiswa[i].hasil >=70){
            cout << " (C+)" << endl;
        } else if(mahasiswa[i].hasil >=67){
            cout << " (C)" << endl;
        } else if(mahasiswa[i].hasil >=60){
            cout << " (C-)" << endl;
        } else if(mahasiswa[i].hasil >=40){
            cout << " (D)" << endl;
        } else {
            cout << " (E) " << endl;
        }
 		cout << "\n\n-------------------------------------------------" << endl;
        cout << endl;

		
        i = i + 3;
    } while (i < jumlah_mahasiswa);
		
	}