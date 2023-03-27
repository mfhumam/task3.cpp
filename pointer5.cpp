#include <iostream>
#include <cstring>
using namespace std;


struct Mahasiswa
{
	char npm[11];
	int nilai;
};

int main(){
	Mahasiswa mhs;
	
	strcpy(mhs.npm,"22.11.1234");
	mhs.nilai = 70;
	
	cout<<"NPM = "<<mhs.npm<< ", nilai = " <<mhs.nilai<< endl<<endl;
	
	Mahasiswa *ptrMhs;
	ptrMhs = &mhs;
	
	strcpy(ptrMhs->npm,"22.11.5178");
	ptrMhs->nilai = 100;
	
	cout<<"NPM = " <<mhs.npm<<", nilai = "<<mhs.nilai<< endl;
	cout<<"NPM = " <<ptrMhs->npm<<", nilai = "<<ptrMhs->nilai<< endl;
	
	cout<<endl<<endl;
	system ("pause");
	return 0;
}
