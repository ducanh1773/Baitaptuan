#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct kqkiemtra{
	string sobd;
	string tenhs;
	string lop;
	float diemtoan;
	float diemly;
	float diemhoa;
	float tongdiem;
	string ketqua;
};

void nhap(kqkiemtra kq[], int &n){	
	cout << "------------------------------------------\n";
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "\tThong tin hoc sinh thu " << i + 1 << " :\n";
		cin.ignore();
		cout << "\t-So bao danh: ";
		getline(cin, kq[i].sobd);
		cout << "\t-Ten hoc sinh: ";
		getline(cin, kq[i].tenhs);
		cout << "\t-Lop: ";
		getline(cin, kq[i].lop);
		do{
			cout << "\t-Diem toan: ";
			cin >> kq[i].diemtoan;	
		}while(kq[i].diemtoan < 0 or kq[i].diemtoan >= 11);
		
		do {
			cout << "\t-Diem ly: ";
			cin >> kq[i].diemly;
		}while(kq[i].diemly < 0 or kq[i].diemly >= 11);
		
		do{
			cout << "\t-Diem hoa: ";
			cin >> kq[i].diemhoa;
		}while(kq[i].diemhoa < 0 or kq[i].diemhoa >= 11);	
		cout << endl;	
	}
}

void tinhtong(kqkiemtra kq[], int &n){
	int dem = 0;
	for (int i = 0; i < n; i++){
		kq[i].tongdiem = kq[i].diemtoan + kq[i].diemly + kq[i].diemhoa;
		if (kq[i].diemtoan < 5) dem++;
		if (kq[i].diemly < 5) dem++;
		if (kq[i].diemhoa < 5) dem ++;
		if (dem == 0) kq[i].ketqua = "Dat";
		else if (dem == 1) kq[i].ketqua = "Thi lai";
		else kq[i].ketqua = "Hong";
		dem = 0;
	}
}

void indanhsach(kqkiemtra kq[], int &n){
	tinhtong(kq, n);
	cout << "\n===================DANH SACH===================\n\n";
	cout << "   " << setw(15) << "So bao danh";
	cout << " | " << setw(20) << "Ten hoc sinh";
	cout << " | " << setw(10) << "Lop";
	cout << " | " << setw(10) << "Diem toan";
	cout << " | " << setw(10) << "Diem ly";
	cout << " | " << setw(10) << "Diem hoa";
	cout << " | " << setw(10) << "Tong diem";
	cout << " | " << setw(10) << "Ket qua";
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << "   " << setw(15) << kq[i].sobd;
		cout << " | " << setw(20) << kq[i].tenhs;
		cout << " | " << setw(10) << kq[i].lop;
		cout << " | " << setw(10) << kq[i].diemtoan;
		cout << " | " << setw(10) << kq[i].diemly;
		cout << " | " << setw(10) << kq[i].diemhoa;
		cout << " | " << setw(10) << kq[i].tongdiem;
		cout << " | " << setw(10) << kq[i].ketqua;
		cout << endl;
	}
}

void indanhsachthidat(kqkiemtra kq[], int &n){
	cout << "\n===================DANH SACH===================\n\n";
	cout << "   " << setw(15) << "So bao danh";
	cout << " | " << setw(20) << "Ten hoc sinh";
	cout << " | " << setw(10) << "Lop";
	cout << " | " << setw(10) << "Diem toan";
	cout << " | " << setw(10) << "Diem ly";
	cout << " | " << setw(10) << "Diem hoa";
	cout << " | " << setw(10) << "Tong diem";
	cout << " | " << setw(10) << "Ket qua";
	cout << endl;
	
	for (int i = 0; i < n; i++){
		if (kq[i].ketqua == "Dat"){
			cout << "   " << setw(15) << kq[i].sobd;
			cout << " | " << setw(20) << kq[i].tenhs;
			cout << " | " << setw(10) << kq[i].lop;
			cout << " | " << setw(10) << kq[i].diemtoan;
			cout << " | " << setw(10) << kq[i].diemly;
			cout << " | " << setw(10) << kq[i].diemhoa;
			cout << " | " << setw(10) << kq[i].tongdiem;
			cout << " | " << setw(10) << kq[i].ketqua;
			cout << endl;
		}	
	}	
}

void sapxep(kqkiemtra kq[], int &n){
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (kq[i].tongdiem < kq[j].tongdiem){
				kqkiemtra tg = kq[i];
				kq[i] = kq[j];
				kq[j] = tg;
			}
		}
	}
}

void themhocsinh(kqkiemtra kq[], int &n){
	int t;
	cout << "------------------------------------------\n";
	cout << "\n\tNhap so luong hoc sinh muon them: ";
	cin >> t;
	for (int i = n; i < n + t; i++){
		cout << "\tThong tin hoc sinh thu " << i + 1 << " :\n";
		cin.ignore();
		cout << "\t-So bao danh: ";
		getline(cin, kq[i].sobd);
		cout << "\t-Ten hoc sinh: ";
		getline(cin, kq[i].tenhs);
		cout << "\t-Lop: ";
		getline(cin, kq[i].lop);
		do{
			cout << "\t-Diem toan: ";
			cin >> kq[i].diemtoan;	
		}while(kq[i].diemtoan < 0 or kq[i].diemtoan >= 11);
		
		do {
			cout << "\t-Diem ly: ";
			cin >> kq[i].diemly;
		}while(kq[i].diemly < 0 or kq[i].diemly >= 11);
		
		do{
			cout << "\t-Diem hoa: ";
			cin >> kq[i].diemhoa;
		}while(kq[i].diemhoa < 0 or kq[i].diemhoa >= 11);		
	}
	n += t;
}

void xoahocsinh(kqkiemtra kq[], int &n){
	string b;
	cout << "\n\tNhap so bao danh cua hoc sinh muon xoa: ";
	cin.ignore();
	getline(cin, b);
	for (int i = 0; i < n; i++){
		for (int j  = 0; j < n; j++){
			if (kq[j].sobd == b){
				n--;
				for (int c = j; c < n; c++){
					kq[c] = kq[c + 1];
				}
			}
		}
	}		
}

void luudanhsach(kqkiemtra kq[], int &n, fstream &file){
	
	file.open("D://code//De_42//chatluong.dat", ios :: out);
	if (!file){
		cout << "\nKhong luu duoc danh sach\n";
	} 
	else {
 		cout << "\nLuu danh sach thanh cong\n";
		file << "\n===================DANH SACH DA LUU===================\n\n";
		file << "   " << setw(15) << "So bao danh";
		file << " | " << setw(20) << "Ten hoc sinh";
		file << " | " << setw(10) << "Lop";
		file << " | " << setw(10) << "Diem toan";
		file << " | " << setw(10) << "Diem ly";
		file << " | " << setw(10) << "Diem hoa";
		file << " | " << setw(10) << "Tong diem";
		file << " | " << setw(10) << "Ket qua";
		file << endl;
		
		for (int i = 0; i < n; i++){
			file << "   " << setw(15) << kq[i].sobd;
			file << " | " << setw(20) << kq[i].tenhs;
			file << " | " << setw(10) << kq[i].lop;
			file << " | " << setw(10) << kq[i].diemtoan;
			file << " | " << setw(10) << kq[i].diemly;
			file << " | " << setw(10) << kq[i].diemhoa;
			file << " | " << setw(10) << kq[i].tongdiem;
			file << " | " << setw(10) << kq[i].ketqua;
			file << endl;
		}
	}
	file.close();
}

void doctep(fstream &file){
	file.open("D://code//De_42//chatluong.dat", ios :: in);
	if (!file){
		cout << "\nKhong doc duoc danh sach\n";
		exit(1);
	}
	else {
		while(!file.eof()){
			string f;
			getline(file, f, '\n');
			cout << f << endl;
		}
	} 
	file.close();
}

void luachon(){
	int m;
	kqkiemtra kq[100];
	int n;
	fstream file;
	nhaptiepluachon:
		cout << "\n=========================================================================\n";
		cout << "| " << setw(20) << "\t\t===================MENU===================" << setw(15) << " |" << endl;
		cout << "| " << setw(20) << "\t\t1.Nhap danh sach hoc sinh" << setw(32) << " |" << endl;
		cout << "| " << setw(20) << "\t2.Tinh tong" << setw(46) << " |" << endl;
		cout << "| " << setw(20) << "\t\t3.In danh sach hoc sinh" << setw(34) << " |" << endl;
		cout << "| " << setw(20) << "\t\t4.In thong tin thi sinh thi dat" << setw(26) << " |" << endl;
		cout << "| " << setw(20) << "\t\t5.Sap xep danh sach giam dan" << setw(29) << " |" << endl;
		cout << "| " << setw(20) << "\t\t6.Them thong tin hoc sinh" << setw(32) << " |" << endl;
		cout << "| " << setw(20) << "\t\t7.Xoa thong tin hoc sinh" << setw(33) << " |" << endl;
		cout << "| " << setw(20) << "\t\t8.Luu danh sach ra tep" << setw(35) << " |" << endl;
		cout << "| " << setw(20) << "\t\t9.Doc danh sach tu tep" << setw(35) << " |" << endl;
		cout << "| " << setw(20) << "\t0.Thoat" << setw(50) << " |" << endl;
		cout << "=========================================================================\n\n";
	
	cout << "   ---------------------------\n";
	cout << "\tNhap lua chon: ";
	cin >> m;
	switch(m){
		case 0:
			system ("pause");
			break;
		case 1:
			nhap(kq, n);
			goto nhaptiepluachon;
			break;
		case 2:
			tinhtong(kq, n);
			cout << "Tinh tong thanh cong" << endl;
			goto nhaptiepluachon;
			break;
		case 3:
			indanhsach(kq, n);
			goto nhaptiepluachon;
			break;
		case 4:
			indanhsachthidat(kq, n);
			goto nhaptiepluachon;
			break;
		case 5:
			sapxep(kq, n);
			cout << "Sap xep thanh cong" << endl;
			goto nhaptiepluachon;
			break;
		case 6:
			themhocsinh(kq, n);
			goto nhaptiepluachon;
			break;	
		case 7:
			xoahocsinh(kq, n);
			goto nhaptiepluachon;
			break;	
		case 8:
			luudanhsach(kq, n, file);
			goto nhaptiepluachon;
			break;	
		case 9:
			doctep(file);
			goto nhaptiepluachon;
			break;		
	}
}

int main()
{
	luachon();
	return 0;
}
