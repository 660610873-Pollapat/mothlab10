#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	string textline;
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------" << "\n";
	while (getline(source,textline)){
		dest << textline << '\n';
	}
	dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}

