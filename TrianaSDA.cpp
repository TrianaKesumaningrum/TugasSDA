#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string usia;
	string hobi;
	string alamat;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	 
	cout<<"Usia  : ";
	getline (cin, usia); 
	 
	cout<<"Hobi     : ";
	getline (cin, hobi); 
	 
	cout<<"Alamat : ";
	getline (cin, alamat); 
	
	cout<<endl;
	cout<<"DATA PESERTA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"Usia  : "<<usia<<endl;
	cout<<"Hobi     : "<<hobi<<endl;
	cout<<"Alamat : "<<alamat<<endl;

}