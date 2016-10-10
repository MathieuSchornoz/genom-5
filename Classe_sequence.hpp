#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <vector>
#include <string>
using namespace std;


class Sequence 
{
	public:	
	
			//return the size of the sequence
			int getSizeSequence(const vector<char> sequence_test) const;	
	
	private:
	
			vector<char> seq1;				//we have two sequence in promoters.fasta
			vector<char> seq2; 
	
};

#endif


