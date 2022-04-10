#include <iostream>
#include<math.h>
using namespace std;

int main(){
//	int s[100][100];
//	int a,b,c,d;
//	int x[100][100];
//	int y[100][100];
//	cout<<"Nhap so hang va cot cua ma tran A : ";
//	cin>>a>>b;
//	cout<<endl;
//	cout<<"Nhap ma tran A : ";
//	for(int i = 0 ; i<a;i++){
//		for(int j = 0;j<b;j++){
//			cout<<"A["<<i+1<<"]"<<"["<<j+1<<"] = ";
//			cin>>x[i][j];
//		}
//	}
//	cout<<endl;
//	cout<<"Nhap so hang va cot cua ma tran B : ";
//	cin>>c>>d;
//	cout<<"Nhap ma tran B : ";
//	for(int i = 0 ; i<c;i++){
//		for(int j = 0;j<d;j++){
//			cout<<"B["<<i+1<<"]"<<"["<<j+1<<"] = ";
//			cin>>y[i][j];
//		}
//	}
	int a[2][2] = {{2,3} , {4,5}};
	int b[2][2] = {{1,2} , {3,4}};
	int s[2][2] ={{},{}};
	
	
		for(int i = 0 ; i<2 ; i++){
			
			for(int j = 0 ; j<2;j++){
				int sum = 0;
				for(int g = 0 ;g<2;g++){
					sum += a[i][g] * b[g][j];
					cout<<endl;
					cout<<i<<"  "<<j <<"   "<<g;
					cout<<endl;
				}
				s[i][j] = sum;
			}
			
			
		}
	
	for(int i = 0 ; i<2;i++){
		for(int j = 0;j<2;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<" * ";
	cout<<endl;
		for(int i = 0 ; i<2;i++){
		for(int j = 0;j<2;j++){
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i = 0;i<2;i++){
		for(int j = 0;j<2;j++){
			cout<<s[i][j]<<endl;
		}
}
}

	
	


