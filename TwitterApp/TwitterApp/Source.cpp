#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	
	
	string myData;

	cout << "Welcome to my app" << endl;
	int a = 0;
	while (a != 7) {

		cout << "Please type in the corresponding number from the list below" << endl;
		cout << "Please input 1 to see the total number of tweets in the data set" << endl;
		cout << "Please input 2 to see the total number of tweets which mention money" << endl;
		cout << "Please input 3 to see the total number of tweets which mention politics" << endl;
		cout << "Please input 4 to see the total number of tweets which contain the word Paris" << endl;
		cout << "Please input 5 to see the total number of tweets which contain the word DreamWorks" << endl;
		cout << "Please input 6 to see the total number of tweets which contain the word Uber" << endl;
		
		cin >> a;

		cout << "You have chosen:" << a << endl;

		if (a == 1) {

		}
		else if (a == 2) {

		}
		else if (a == 3) {

		}
		else if (a == 4) {

		}
		else if (a == 5) {

		}
		else if (a == 6) {

		}
		else {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
			}
			cout << "Sorry that is an invalid input, please input a number between 1 and 6" << endl;
		}

	}
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	if (inFile.good()){
		

		while (!inFile.eof()) {
			cout << "Reading from file" << endl;
			getline(inFile, myData);
			cout << myData << endl;

		}
		

}
}

	


