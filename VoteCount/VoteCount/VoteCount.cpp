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
	cout << name << " of the " << party << " party created.\n";
	Cname = name;
	Cparty = party;
}


void Candidate::setName(string name) {
	cout << "\nCandidate " << Cname << " changed to " << name;
	Cname = name;

}

string Candidate::getName(void) {
	return Cname;
}


void Candidate::setParty(string party) {
	cout << "\nCandidate " << Cname << " changed from " << Cparty << " to " << party;
	Cparty = party;
}


string Candidate::getParty(void) {
	return Cparty;
}

class BallotPaper {
};


int main() {
	Candidate cand1("Niel James", "Republican");
	Candidate cand2("Peter Jessup", "Democrat");

	cand1.setParty("Nationalist");
	cand2.setName("Sarah O' Loughlin");

	cout << "\n\nCandidate 1: " << cand1.getName() << "\nParty: " << cand1.getParty();
	cout << "\n\nCandidate 2: " << cand2.getName() << "\nParty: " << cand2.getParty();

	return 0;
}
