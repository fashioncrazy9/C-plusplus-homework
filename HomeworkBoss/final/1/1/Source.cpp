#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib> 
#include "FileNotOpen.h"
using namespace std;

void outputLine(int, const string, double); 

int main()
{
	    
	ifstream inClientFile("input.txt", ios::in);

	if (!inClientFile)
	{
		try{
			throw FileNotOpen();
		}
		catch (FileNotOpen & fileNotOpen){
			cout<<fileNotOpen.what()<<endl;
		}
	} 
	string nameEng[4];
	string nameChi[2];
	string classroom;

	inClientFile >> nameEng[0] >> nameEng[1] >> nameEng[2] >> nameEng[3];
	inClientFile >> nameChi[0] >> nameChi[1];
	inClientFile >> classroom;

	cout << nameEng[0] << " " << nameEng[1] << " " << nameEng[2] << " " << nameEng[3] << endl;
	cout << nameChi[0] << " " << nameChi[1] << endl;
	cout << classroom << endl;
	system("pause");
	
} 
