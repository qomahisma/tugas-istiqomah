#include <iostream>

using namespace std;

int main() {
	
	int usia = 27 ;
	float berat = 60.00 ;
	char jenis = 'p' ;
	string nama = "istiqomah" ;
	bool hasil = false ;
	
	cout <<"masukkan usia saya : " ;
	cin>>usia;
	
	cout<<"berat badan : " ;
	cin>>berat;
	
	cout<<"jenis kelamin saya : " ;
	cin>>jenis;
	
	cout<<"nama : " ;
	cin>>nama;
	
	cout<<"hasil :" ;
	cin>>hasil;
	
	cout <<"usia saya "<< usia <<"tahun" << endl ;
	
	cout <<"berat badan "<< berat <<"kg" << endl ;
	
	cout << "jenis kelamin "<<jenis << endl ;
	cout<<"apakah rumah saya nganjuk "<<hasil <<endl ;
	
	
	
	
	system ("pause" ) ;
	return 0;	
	
}

