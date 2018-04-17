#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ReadSentence(istream& istream, string& sentence);
void main() 
{
	string result{}; //def empty string
	cout << "input line: ";
	ReadSentence(cin, result);  // assign inputted text as input for method
	cout << "result:" << result << endl;

	string result2{};
	ifstream file{ "Resources/SoftwareQuotesInput.txt" };  // load file as text source

	if (!file)  // try opening the file 
	{
		std::cerr << "error opening file" << endl; // error prompt if file can't open
	}
	else
	{
		ReadSentence(file, result2); // opening the file
		cout << "result2: " << result2 << endl; 
	}
	cin.get();


}
void ReadSentence(istream& istream, string& sentence)
{
	string temp{};  // define a string that will load each word
	do
	{
		getline(istream, temp);
		sentence += temp; // append word to the sentence
	} while (sentence.back() != '.');  // while the last char isnt a .


}