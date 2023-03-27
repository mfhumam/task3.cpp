#include <iostream>

using namespace std;

int main(){
	
	int x = 100;
	
	int *ptrX;
	
	ptrX = &x;
	
	int y = *ptrX;
	
	cout<<"Isi variabel x = "<<x<<" ada di alamat "<<&x<<endl<<endl;
	
	cout<<"Isi variabel ptrX = "<<&x<<" sama dengan alamat x "<<"<"<<&x<<">"<<endl;
	cout<<"Isi variabel ptrY = "<<&x<<" sama dengan alamat x "<<"<"<<&x<<">"<<endl;
	cout<<endl;
	cout<<"Nilai yang ditunjukkan ptrX = "<<x<<" sama dengan nilai x "<<"<"<<*ptrX<<">"<<endl;
	cout<<"Nilai yang ditunjukkan ptrY = "<<x<<" sama dengan nilai x "<<"<"<<*ptrX<<">"<<endl;
	
	cout<<endl;
	return 0;
	
}
