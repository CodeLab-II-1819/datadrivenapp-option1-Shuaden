w#include <iostream>
#include <string>
#include <fstream>

using namespace std;
char str[100] = " Total number of tweets in the data set";
char str2[100] = " Tweets which mention money";
char str3[100] = " Tweets which mention politics";
char str4[100] = " Tweets which mention the word Paris";
char str5[100] = " Tweets which mention the word DreamWorks";
char str6[100] = " Tweets which mention the word Uber";
int main() {
	



	string myData;

	cout << "Welcome to my app" << endl;
	int a = 0;
	

		cout << "Please type in the corresponding number from the list below" << endl;
		cout << "Please input 1 to see the total number of tweets in the data set" << endl;
		cout << "Please input 2 to see the total number of tweets which mention money" << endl;
		cout << "Please input 3 to see the total number of tweets which mention politics" << endl;
		cout << "Please input 4 to see the total number of tweets which contain the word Paris" << endl;
		cout << "Please input 5 to see the total number of tweets which contain the word DreamWorks" << endl;
		cout << "Please input 6 to see the total number of tweets which contain the word Uber" << endl;
		ifstream inFile;
		
		while (a != 7) {
			inFile.open("sampleTweets.csv");
		cin >> a; 
		int tweetCounter = 0;
		if (inFile.good() && a == 1) {
			cout << "You have chosen: " << a << str << endl;
			// Basic idea for calling tweets with specific phrases or words.
			cout << "Reading from file" << endl;
			//While Loop to count total tweets
			while(!inFile.eof()){
				getline(inFile, myData);
				tweetCounter++;
			}
			inFile.close;
			cout << tweetCounter << endl;
		}
		else if (inFile.good() && a == 2) {
			cout << "You have chosen:" << a << str2 << endl;
			cout << "Reading from file" << endl;
			while (!inFile.eof()) {
				if (myData.find("Paris") <= myData.length()) {
					cout << myData << endl;
				}
			}
		}
	else if (a == 3) {
			cout << "You have chosen:" << a << str3 << endl;
			cout << "Reading from file" << endl;
			while (!inFile.eof()) {
				if (myData.find("Paris") <= myData.lenght()) {
					cout << myData << endl;

				}
			}
		}
		else if (a == 4) {
			cout << "You have chosen:" << a << str4 << endl;
		}
		else if (a == 5) {
			cout << "You have chosen:" << a << str5 << endl;
		}
		else if (a == 6) {
			cout << "You have chosen:" << a << str6 << endl;
		}
		else {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
			}
			cout << "Sorry that is an invalid input, please input a number between 1 and 6" << endl;
		}

	}
	



