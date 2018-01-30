#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Candidate {
public:
	void setName(string name);
	string getName(void);

	void setParty(string party);
	string getParty(void);

	Candidate(string name, string party); //constructor

private:
	string Cname;
	string Cparty;
};


Candidate::Candidate(string name, string party) {
	Cname = name;
	Cparty = party;
}


void Candidate::setName(string name) {
	Cname = name;

}

string Candidate::getName(void) {
	return Cname;
}


void Candidate::setParty(string party) {
	Cparty = party;
}


string Candidate::getParty(void) {
	return Cparty;
}

class BallotPaper {
};


int main() {
	
	ifstream src("READIN.txt");
	string line;
	string candArray[2][4];
	int j = 0;

	while (getline(src, line))
	{
		if (line != ".")
		{
			candArray[0][j] = line;
			j++;
		}
		else
			break;
	}
	system("PAUSE");
	return 0;
}
