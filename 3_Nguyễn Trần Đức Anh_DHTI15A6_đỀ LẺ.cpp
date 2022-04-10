#include <iostream>
#include<iomanip>
using namespace std;
void bai1(){
	int n,c,s,r;
	cout<<"Nhap vao so muon kiem tra : ";
	cin>>n;//Nhap vao so muon kiem tra 
	c = n;//cho so c = n
	while(n!=0){// lap lai lien tuc den khi n == 0
		r = n%10;// lay so du cua n chia 10
		s = s + (r*r*r); // tong bang so du r mu 3
		n = n/10;// 
	}
	if(c == s){//neu c == s thi c la so amstrong vi c duoc gan bang n
		cout<<c<<" la so amstrong ";
		
	}else{//c !=  thi c khong la so amstrong 
		cout<<c<<" Khong phai la so amstrong ";
	}
}
void bai2(){
	int ga,cho;// ga va cho
	for(int cho = 1; cho < 36 ;cho++){//cho va ga nho hon 36 
		for(int ga = 1; ga <36;ga++){
			if(ga*2 + cho*4 == 100 && ga + cho ==36){// ga*2chan + cho*4chan = 100 tong ga va cho la 36
				cout<<"So ga la : "<<ga<<endl;
				cout<<"So cho la : "<<cho<<endl;
			}
		}
	}
}
int main(){
	bai1();
	bai2();
}
