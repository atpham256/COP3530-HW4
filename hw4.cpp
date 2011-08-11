// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>
#include <fstream>
#include <string>
#include "extendedChain.h"

using namespace std;

int main()
{
	// extendedChains and variables for problem #17
	extendedChain<int> a, b, c;
	int size, data;
	ifstream inFile;
	inFile.open("in17.txt");
	ofstream outFile("out17.txt");

	// fill extendedChain a based on data in text file
	inFile >> size;
	for(int i = 0; i < size; i++)
	{
		inFile >> data;
		a.push_back(data);
	}

	// fill extendedChain b based on data in text file
	inFile >> size;
	for(int i = 0; i < size; i++)
	{
		inFile >> data;
		b.push_back(data);
	}

	// meld a and b into c
	meld(a,b,c);

	// write c to a text file
	outFile << c.size() << endl;
	for(extendedChain<int>::iterator it = c.begin(); it != c.end(); it++)
	{
		outFile << *it << " ";
	}

	// close file streams
	inFile.close();
	outFile.close();

	// extendedChains and variables for problem #21
	extendedChain<int> a1,b1,c1;
	ifstream inFile1;
	inFile1.open("in21.txt");
	ofstream outFile1("out21.txt");

	// fill extendedChain c1 based on data in text file
	inFile1 >> size;
	for(int i = 0; i < size; i++)
	{
		inFile1 >> data;
		c1.push_back(data);
	}

	// split c1 into a1 and b1
	split(c1,a1,b1);

	// write b1 into the text file
	outFile1 << b1.size() << endl;;
	for(extendedChain<int>::iterator it = b1.begin(); it != b1.end(); it++)
	{
		outFile1 << *it <<  " ";
	}
	outFile1 << endl;

	// write a1 into the text file
	outFile1 << a1.size() << endl;;
	for(extendedChain<int>::iterator it = a1.begin(); it != a1.end(); it++)
	{
		outFile1 << *it <<  " ";
	}
	outFile1 << endl;

	// write c1 into the text file to show that it was unchanged
	outFile1 << c1.size() << endl;;
	for(extendedChain<int>::iterator it = c1.begin(); it != c1.end(); it++)
	{
		outFile1 << *it <<  " ";
	}
	outFile1 << endl;

	// close file streams
	inFile1.close();
	outFile1.close();

	// chains and variables for problem #22
	chain<int> a2,b2,c2;
	ifstream inFile2;
	inFile2.open("in22.txt");
	ofstream outFile2("out22.txt");

	// fill chain c2 based on data in text file
	inFile2 >> size;
	for(int i = 0; i < size; i++)
	{
		inFile2 >> data;
		c2.insert(i,data);
	}

	// split c2 into a2 and b2
	c2.split(a2,b2);

	// write b2 into the text file
	outFile2 << b2.size() << endl;
	for(chain<int>::iterator it = b2.begin(); it != b2.end(); it++)
	{
		outFile2 << *it << " ";
	}
	outFile2 << endl;

	// write a2 into the text file
	outFile2 << a2.size() << endl;
	for(chain<int>::iterator it = a2.begin(); it != b2.end(); it++)
	{
		outFile2 << *it << " ";
	}
	outFile2 << endl;

	// write c2 into the text file to show that it was destroyed after the split method was called
	outFile2 << c2.size() << endl;
	for(chain<int>::iterator it = c2.begin(); it != c2.end(); it++)
	{
		outFile2 << *it << " ";
	}
	outFile2 << endl;

	// close file streams
	cout << "Writing to text files complete." << endl;
	inFile2.close();
	outFile2.close();
}
