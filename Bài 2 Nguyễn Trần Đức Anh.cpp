#include <iostream>
using namespace std;
int main(){
	float a;
	cout<<"Nhap vao chi so dien tieu thu (don vi KW) : ";
	cin>>a;
	if(a<=100){
		cout<<"So tien dien tieu thu trong thang la : "<<a*500<<" Dong"<<endl;
		
	}else if(a > 100){
		float b = a - 100;
		float sum = b*800 + 100*500;
		cout<<"So luong tien dien trong thang la : "<<sum<<" Dong"<<endl;
	}
	

}

