#include "main.h"
#include<iostream> 
#include<fstream>

using namespace std; 

int main() {
	cout << "the following program takes in your five letter password and siphers it\nInput your five letter password below\n";
	//create character variables that will hold the five letters the user inputs
	char l1, l2, l3, l4, l5; 
	//over simplified the code so as to prevent repeating the word char for each variable 

	while (cin >> l1 >> l2 >> l3 >> l4 >> l5) { 
		//create an empty variable named pswrd_file which is of type fstream
		fstream pswrd_file; 
		//open the file or else create the file if its not yet there, using the open function , with parameters filename and the mode of reading of that file 
		

		//appending the passwords to prevent rewriting of the previous passwords from the file
		pswrd_file.open("password.txt", ios::app);
		if (pswrd_file.is_open()) {
			pswrd_file<< int(l1) << int(l2) << int(l3) << int(l4) << int(l5) << endl;
			pswrd_file.close();
		}
	}
}
