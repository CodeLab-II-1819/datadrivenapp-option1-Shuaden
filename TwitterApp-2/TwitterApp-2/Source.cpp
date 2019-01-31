#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 // Strings for declaring menu, so that I didn't need to type them out each type in an attempt to make code easier to follow
char str[100] = "total number of tweets in the data set";
char str2[100] = "tweets which mention money";
char str3[100] = "tweets which mention politics";
char str4[100] = "tweets which mention the word Paris";
char str5[100] = "tweets which mention the word DreamWorks";
char str6[100] = "tweets which mention the word Uber";
char str7[100] = "tweets which mention the word Trump";
char str8[100] = "tweets which mention the word Football";
char str9[100] = "tweets which mention America";
char str10[100] = "tweets which mention Britain";

char str11[100] = "Please type in the corresponding number from the list below";
char str12[100] = "Please input 1 to see the total number of tweets in the data set";
char str13[100] = "Please input 2 to see the total number of tweets which mention money";
char str14[100] = "Please input 3 to see the total number of tweets which mention politics";
char str15[100] = "Please input 4 to see tweets which contain the word Paris";
char str16[100] = "Please input 5 to see tweets which contain the word DreamWorks";
char str17[100] = "Please input 6 to see tweets which contain the word Uber";
char str18[100] = "Please input 7 to see tweets which contain the word Trump";
char str19[100] = "Please input 8 to see tweets which contain the word Fooball";
char str20[100] = "Please input 9 to see tweets which contain the word America";
char str21[100] = "Please input 10 to see tweets which contain the word Britain";
char str22[100] = "Please input 11 to exit the program";


//Ints and bools required for the program
bool programRunning = true;
int tweetCounter = 0;
int moneyCounter = 0;
int politicCounter = 0;
int americaCounter = 0;
int a = 0;
int b = 0;
int main() {
	//the ifstreams which allow my file to recognise it's trying to read from 
	ifstream inFile;
	ifstream inFile2;
	ifstream inFile3;
	ifstream inFile4;
	ifstream inFile5;
	ifstream inFile6;
	ifstream inFile7;
	ifstream inFile8;
	ifstream inFile9;
	ifstream inFile10;
	
	
	string tweetData;
	string tweetData2;
	string tweetData3;
	string tweetData4;
	string tweetData5;
	string tweetData6;
	string tweetData7;
	string tweetData8;
	string tweetData9;
	string tweetData10;
	
	cout << "Welcome to my app" << endl;
	
	//Overall while loop allowing the program to be reused without being closed
	while (programRunning == true) {
		
		//The declaration of previously mentioned strings, forming my menu
		cout << str11 << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << str12 << endl;
		cout << str13 << endl;
		cout << str14 << endl;
		cout << str15 << endl;
		cout << str16 << endl;
		cout << str17 << endl;
		cout << str18 << endl;
		cout << str19 << endl;
		cout << str20 << endl;
		cout << str21 << endl;
		cout << str22 << endl;
		cout << "----------------------------------------------------------" << endl;


		// an iff statement recognising whether the user has inputted 1
		cin >> a;
		if (a == 1) {
			//If 1 was selected then the statement will open the sampletweets
			inFile.open("sampleTweets.csv");
			//if the sample tweets are recognised as good then the next if statement runs
			if (inFile.good()) {
				cout << "You have chosen " << str << endl;
				// a while statement which will run until the file is closed such as if it is reaches the end
				while (!inFile.eof()) {
					//searches through the file for each tweet then adds a counter
					getline(inFile, tweetData);
					tweetCounter++;
				}
				//closes the file
				inFile.close();
				//Prints the counter total and then resets the counter
				cout << "The total number of tweets are: " << tweetCounter << endl;
				cout << "----------------------------------------------------------" << endl;
				tweetCounter = 0;
			}
		}
		if (a == 2) {
			inFile2.open("sampleTweets.csv");
			if (inFile2.good()) {
				cout << "You have chosen " << str2 << endl;
				while (!inFile2.eof()) {
					getline(inFile2, tweetData2);
					if (tweetData2.find("money") <= tweetData2.length()) {
						moneyCounter++;
					}

				}
				inFile2.close();
				cout << "The total number of tweets which contain the word money: " << moneyCounter << endl;
				cout << "----------------------------------------------------------" << endl;
				moneyCounter = 0;
			}
		}

		if (a == 3) {
			inFile3.open("sampleTweets.csv");
			if (inFile3.good()) {
				cout << "You have chosen " << str3 << endl;
				while (!inFile3.eof()) {
					getline(inFile3, tweetData3);
					if (tweetData3.find("politics") <= tweetData3.length()) {
						politicCounter++;
					}

				}
				inFile3.close();
				cout << "The total number of tweets which contain the word politics: " << politicCounter << endl;
				cout << "----------------------------------------------------------" << endl;
				politicCounter = 0;

			}
		} // Different sequence of statements which print all the tweets with a keyword
		if (a == 4) {
			inFile4.open("sampleTweets.csv");
			if (inFile4.good()) {
				cout << "You have chosen " << str4 << endl;
				while (!inFile4.eof()) {
					getline(inFile4, tweetData4);
					//if statement which finds tweets that contain the word paris
					if (tweetData4.find("Paris") <= tweetData4.length()) {
						//Prints all these tweets to the console.
						cout << tweetData4 << endl;
						
					}

				}
				inFile4.close();
				cout << "----------------------------------------------------------" << endl;


			}
		}
		if (a == 5) {
			inFile5.open("sampleTweets.csv");
			if (inFile5.good()) {
				cout << "You have chosen " << str5 << endl;
				while (!inFile5.eof()) {
					getline(inFile5, tweetData5);
					if (tweetData5.find("DreamWorks") <= tweetData5.length()) {
						cout << tweetData5 << endl;
						
					}

				}
				inFile5.close();
				cout << "----------------------------------------------------------" << endl;


			}
		}
		if (a == 6) {
			inFile6.open("sampleTweets.csv");
			if (inFile6.good()) {
				cout << "You have chosen " << str6 << endl;
				while (!inFile6.eof()) {
					getline(inFile6, tweetData6);
					if (tweetData6.find("Uber") <= tweetData6.length()) {
						cout << tweetData6 << endl;
						
					}

				}
				inFile.close();

				cout << "----------------------------------------------------------" << endl;

			}
		}
		if (a == 7) {
			inFile7.open("sampleTweets.csv");
			if (inFile7.good()) {
				cout << "You have chosen " << str7 << endl;
				while (!inFile7.eof()) {
					getline(inFile7, tweetData7);
					if (tweetData7.find("Trump") <= tweetData7.length()) {
						cout << tweetData7 << endl;
						
					}

				}
				inFile7.close();
				cout << "----------------------------------------------------------" << endl;
			}
		}
		if (a == 8) {
			inFile8.open("sampleTweets.csv");
			if (inFile8.good()) {
				cout << "You have chosen " << str8 << endl;
				while (!inFile8.eof()) {
					getline(inFile8, tweetData8);
					if (tweetData8.find("Football") <= tweetData8.length()) {
						cout << tweetData8 << endl;
						
					}

				}
				inFile8.close();
				cout << "----------------------------------------------------------" << endl;

			}
		}
		if (a == 9) {
			inFile9.open("sampleTweets.csv");
			if (inFile9.good()) {
				cout << "You have chosen " << str9 << endl;
				while (!inFile9.eof()) {
					getline(inFile9, tweetData9);
					if (tweetData9.find("America") <= tweetData9.length()) {
						americaCounter++;
					}

				}
				cout << "The total number of tweets which contain the word America: " << americaCounter << endl;
				cout << "----------------------------------------------------------" << endl;
				americaCounter = 0;
				inFile.close();

			}
		}
		if (a == 10) {
			inFile10.open("sampleTweets.csv");
			if(inFile10.good()) {
			cout << "You have chosen " << str10 << endl;
			while (!inFile10.eof()) {
				getline(inFile10, tweetData10);
				if (tweetData10.find("Britain") <= tweetData10.length()) {
					cout << tweetData10 << endl;
					
				}

			}
			inFile10.close();
			cout << "----------------------------------------------------------" << endl;
		}
		}
		//Simple if statement to determine whether the user wants to close the program
		if (a == 11) {
			cout << "Have a nice day" << endl;
			cout << "Please press 1 to end the program" << endl;
				cin >> b;
			if (b == 1) {
				return 0;
			}
			
		}
		//While statement for handling incorrect inputs, anything that isn't 1 - 11
		while (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input a number between 1 and 11" << endl;
			cout << "----------------------------------------------------------" << endl;
			
			
			
		}
		
} 
	//System pause to stop the console from closing as soon as it's reached the end
		system("Pause");
	
}
	




