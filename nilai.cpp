#include <iostream>
#include <string>
using namespace std;

int main (){
	int jumblah;
	int nilai[10]={ };
	char karyawan_kontrak,karyawan_harian,lagi;
	
	ulang:
cout <<"       .---.          .-----------" <<endl;
cout <<"      /     T  ___   /    ------" <<endl;
cout <<"     / /     |(0 0) /    -----" <<endl;
cout <<"    //////   *  Y  *   ---" <<endl;
cout <<"   //// / // :     : ---" <<endl;
cout <<"  // /   /  /*     *--" <<endl;
cout <<" //          TT...TT" <<endl;
cout <<" +==========UU====UU=====================Ragil+" <<endl;
cout <<" +           *//||\|*                          +" <<endl;
cout <<" +            ****                            +" <<endl;
cout <<" + Coded by : InYourG00D                      +" <<endl;
cout <<" + Team : LockNullXploit | Soul Team Cyber    +" <<endl;
cout <<" + Github : https://github.com/InYourG00D1    +" <<endl;
cout <<" +============================================+" <<endl;
cout <<"   ^...^                             ^...^" <<endl;
cout <<"  <_* *_> Karyawan Berserta Gajinya <_* *_>" <<endl;
cout <<"    *Y*                               *Y*\n" <<endl;
	string nama_kontrak;
	cout << "Jumblah Karyawan Kontrak : ";
	cin >> jumblah;
	for (int j=1;j<=jumblah;j++){
		cout << "Nama Karyawan Kontrak : ";
		cin >> nama_kontrak;
	}
	for (int j=1;j<=jumblah;j++){
		cout << "Gaji Karyawan Kontrak : ";
		cin >> nilai[j];
	}
		string nama_harian;
	cout << "Jumblah Karyawan Harian : ";
	cin >> jumblah;
	for (int j=1;j<=jumblah;j++){
		cout << "Nama Karyawan Harian : ";
		cin >> nama_harian;
	}
	for (int j=1;j<=jumblah;j++){
		cout << "Gaji Karyawan Harian : ";
		cin >> nilai[j];
	}
	cout << "Ingin Mengulang lagi? (Y/y): ";
	cin >> lagi;
	if(lagi=='Y' || lagi=='y')
	goto ulang;
	else {
		cout <<endl;
		cout << "===================================================" <<endl;
		cout << "[!] Anda Telah Keluar Dari Program Ini " <<endl;
		cout << "===================================================" <<endl;
	}
	
}