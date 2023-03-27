#include <iostream>

using namespace std;

int main(){
	
	int x = 100, y = 130, z;
	
	int *ptrX, *ptrY;
	
	cout<<"Nilai x = "<<x<<", y = "<<y<<endl<<endl;
	cout<<"Alamat x = "<<&x<<", y = "<<&y<<endl<<endl;
	
	ptrX = &x;
	
	cout<<"Isi ptrX = "<<&x<<" <alamat x>, nilai yang ditunjuk ptrX = "<<x<<endl<<endl;
	
	ptrY = &y;
	
	cout<<"Isi ptrY = "<<&y<<" <alamat y>, nilai yang ditunjuk ptrY = "<<y<<endl<<endl;
	
	z = *ptrX;
	
	cout<<"Nilai z = "<<x<<" sama dengan nilai x "<<"<"<<*ptrX<<">"<<endl<<endl;
	
	*ptrY = 70;
	
	cout<<"Isi ptrY = "<<&y<<" <tetap>, nilai y = "<<*ptrY<<" <yang berubah>"<<endl<<endl;
	
	*ptrX = *ptrY + 5;
	
	cout<<"Isi ptrX = "<<&x<<" <tetap>, nilai x = "<<*ptrX<<" <yang berubah>"<<endl<<endl;
	
	ptrX = ptrY;
	
	cout<<"Isi ptrX = "<<&x<<" dan ptrY = "<<&y<<endl<<endl;
	cout<<"Nilai yang ditunjuk ptrX = "<<*ptrY<<" dan ptrY = "<<*ptrY<<endl;
	
	cout<<endl;
	return 0;
	
}
