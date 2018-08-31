/**
 * Incorrect code to identify palindromes
 */

#include <iostream>
#include <sstream>
#include <cstring> 

using namespace std;

bool helper (stringstream &input, int len)
{
	char prev;

	//if we are at the midpoint of the string, return true.
	if (len == 0) return true;

	/**
	 * If the length of the string is odd, and the next
	 * character is the midpoint of the string, consume it
	 * and return true.
	 */
	input >> prev;
	if (len == 1) return true;

	bool val = helper(input, len-2);

	//make your changes only below this line.
<<<<<<< HEAD
	// the above function only indicates what letter is in the middle
	char last;
	input >> last;
	if (prev==last) //try to check to see if the things left of the middle is equal to thing in the front equal to the 
	{
		return true;
	}
	else 
	{
		return false;
	}
=======
	if (val) return true;
	return false;
>>>>>>> c96fb741505fc2a54b1074d9111bd4c147925529
}

//do not change the main function.
int main (int argc, char* argv[])
<<<<<<< HEAD
{nhh  mj 
=======
{
>>>>>>> c96fb741505fc2a54b1074d9111bd4c147925529
  if(argc < 2){
    cerr << "Please provide a string of characters." << endl;
    return 1;
  }
  stringstream ss;
  ss << argv[1];
  if(helper(ss, strlen(argv[1])))
	  cout << "Palindrome" << endl;
  else cout << "Not a Palindrome" << endl;
  return 0;
}
