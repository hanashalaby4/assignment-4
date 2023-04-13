//hana shalaby 900223042
//assignment 4
// program that takes from the user n integers and stores them a vector of int
//a function insertAfter that takes firstValue and secondValue. This function
//searches for each occurrence of firstValue in the vectorand insert the secondValue after
//it in the same vector.The firstand second values are taken from the user.


#include <iostream>
#include "LinkedList.h"
#include <vector>
using namespace std;
void insertAfter(vector<int>& v, int first, int second);

void main()
{

}

void insertAfter(vector<int>& v, int first, int second)
{
	for (vector<int>::iterator it = v.begin();it!=v.end(); it++) //iterates through the vector
	{
		if (*it == first) {
			v.insert(it + 1, second); //inserts the second value specified directly after the first occurence
									  //of the first value specified
			it++;					  //skips the second value that was just inserted and checks for the rest of the vector
		}
	}
}