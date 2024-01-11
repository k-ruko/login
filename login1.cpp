#include <iostream>
#include <windows.h>


using namespace std;
int main ()

{
	
	string username, password, name, newpass; 
	int kelas;
	char again;
	int chosse;
	bool benar, salah;
	string emailadd;

	
	cout << "welcome!!" << endl; 
	//Sleep(2000);
	
 
	cout << "username" << endl;
	cin >> username;  
	
	cout << "password" << endl;
	cin >> password;
	
	cout << "hello! " << username << endl;
		do{
	cout << "how can i help you" << endl;
	cout << " 1. absen " << endl;
	cout << " 2. ubah data diri " << endl;
	cout << " 3. email " << endl;
	cout << " 0. keluar" << endl;
	cin >> chosse;
	
	
	Sleep(2000);
	
 	switch(chosse){ 
	case 1:
		cout << "masukkan nama: "<< endl;
		cin >> name;
		cout << "masukkan kelas: " << endl ;
		cin >> kelas;
 		cout << username <<" aktif " << " dengan nama " << name << endl;
 		cout << "kelas " << kelas <<   endl;
		break;
	case 2:
		cout << "masukkan nama : " << endl;
		cin >> username;
		
		cout << "masukkan pasword pertama: " <<  endl;
		cin >> password;
		
		if (password != newpass)
			{
//			password != 
			cout << "password salah" << endl;
			cout << "masukkan password lagi" << endl;
			cin >> password; }
//		while (password != newpass);
		
		else if (password == newpass);{
			cout << "password benar" <<endl;
			Sleep(2000);
//			password == 
			cout << "masukkan password baru" << endl;
			cin >> password;}
			
		
		
		
		break; 
	case 3: 
		cout << "halo" << username << " ingin kirim alamat email ke mana? " << endl; 
		
		 cout << "masukkan alamat email : " ; 
		 cin >> emailadd;
		 
		 cout << "sending email " << endl; 
		 Sleep(5000);
		 cout << "email sending to " << emailadd << endl;
		break; 
	case 0: 
	
		break;
		
	default:
	cout << " tidak ada perintah seperti itu" << endl;  
break;
	 }
 	
// 	if ('1'){
// 	
// 	cout << "masukkan nama: "<< endl;
//	cin >> name;
//	cout << "masukkan kelas: " << endl ;
//	cin >> kelas;
// 		cout << username <<" aktif " << " dengan nama " << name << endl;
// 		cout << "kelas " << kelas <<   endl;}
// 		
// 	else if('2'){
// 		cout << " masu
// 	}
// 		
// 		
// 		
 		
		 
 	cout << "can i help you again? (y/n) " << endl;
		cin >> again;
	
	
}while (again == 'Y' || again == 'y');
	cout << "terimakasih" << endl;
	return 0 ;
}
