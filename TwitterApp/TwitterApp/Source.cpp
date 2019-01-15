#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	string myData;

	ifstream inFile;
	inFile.open("sampleTweets.csv");

	if (inFile.good()){
		

		while (!inFile.eof()) {
			cout << "Reading from file" << endl;
			getline(inFile, myData);
			cout << myData << endl;

		}
		inFile.close();

}
}

	


