#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int &a,int &b){
	a = a + b;
	b = a - b;
	a = a - b;
}

void Game(int &num1,int &num2){
	char calculation;
	cout << "Choose the right calculation: " << num2 << " ... " << num1 << ':';
	cin >> calculation;
	switch (calculation){
		case '+' :
			num1 = num2 + num1;
			break;
		case '-' :
		    num1 = num2 - num1;
		    break;
		case '*' :
			num1 = num2 * num1;
			break;
		case '/' :
			num1 = num2 / num1;
			break;
		default :
			num1 = num2 % num1;
			break;
	}
	
}

int main() {
	int fp,lp;
	cout << "Please select a range to start the game!" << endl;
	cout << "Fist point: ";
	cin >> fp;
	cout << "Last point: ";
	cin >> lp;  // Doc hai so dau va cuoi
	if (fp > lp) swap(fp,lp);  // doi cho hai so neu so dau lon hon so cuoi
	
	cout << endl << "Game start!" << endl;
	int point = 0;
	int num1 = fp + rand()  % (lp - fp),num2; // chon so dau tien trong khoang
	cout << "Your first number is: " << num1 << endl;
	
	do{
		num2 = rand() % lp; //chon so thu 2 trong khoang
		cout << endl << "Your range is from " << fp << " to " << lp << '!'  << endl; // cac ket qua phai nam trong khoang nay
		Game (num1,num2); 
		if ((num1 >= fp) && (num1 <= lp)){
			cout << "It's correct! Yor new number is: " << num1 << endl;
			point++;
		}
	}while((num1 >= fp) && (num1 <= lp));
	    cout << endl << "Wrong! You lost :( " << endl << "Your source: " << point;
	return 0;	
}

