#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n1,n2;
	cout << "Chon khoang :";
	cin >> n1 >> n2;
	
	int khoang = n2 - n1;
	int so1 = n1 + rand() % khoang;
	cout << "so ban dau cua ban la: " << so1 << endl;
	do{
		
	int so2 = n1 + rand() % n2;
	cout << "Hay tim mot phep toan phu hop voi " << so2 << endl;
	
	char pheptinh;
	cout << "Cau tra loi cua ban la: " ;
	cin >> pheptinh;
	switch (pheptinh){
		case '+':
			so1 = so2 + so1;
			break;
		case '-':
			so1 = so2 - so1;
			break;
		case '*':
			so1 = so2 * so1;
			break;
		default :
		    so1 = so2 / so1;		
	}
	
	if ((so1 >= n1) && (so1 <=n2)){
    	cout << endl << "Dung! Ket qua la: " << so1 << endl ;
 	}
}
	while ((so1 >= n1) && (so1 <=n2));
	
	cout << "Sai ! Ket qua la: " << so1 << endl;
	
	return 0;
}
