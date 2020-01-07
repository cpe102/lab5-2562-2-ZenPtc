#include<iostream>
#include<string>
using namespace std;

string mixText(string A,string B){
	string r="";
	if(A.size()==B.size()){
		int i=0;
		while(i<A.size()){
			r=r+A[i]+B[i];
			i++;
		}
		return r;
	}else{
		return "E";
	}
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
