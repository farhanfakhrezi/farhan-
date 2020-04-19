?#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string line;
	ifstream myfile("sahrul1.txt"); 
while (getline(myfile,line)){
	cout << line << '\n';
}
myfile.close();
	
}
