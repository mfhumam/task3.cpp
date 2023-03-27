#include <iostream>
using namespace std;

int main(){
	char kampus[] = "STMIK AMIKOM";
	
	int lenghth = sizeof(kampus) /sizeof(char);
	
	for (int i=0; i<lenghth;i++)
	{
		cout<<kampus[i];
	}
	cout<<" jika dibalik menjadi ";
	char *p = kampus + lenghth -1;
	while (p >= kampus){
			cout<<*p;
			p--;
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
	
	
}
