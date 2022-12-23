// C++ program of the above appraoch
#include <bits/stdc++.h>
using namespace std;

// Recursive sunction to print all
// the possible strings after replacing
// the digits, in lexicographic order
void allPossibleStrings(
	string str, string cur, int i)
{

	// If the complete string
	// has been traversed
	if (str.size() == cur.size()) {

		// Print current string
		cout << cur << " ";
		return;
	}

	// If current character
	// is a digit
	if (isdigit(str[i])) {

		// Recursive call after replacing
		// current character with x
		allPossibleStrings(
			str, cur + "x", i + 1);

		// Recursive call after replacing
		// current character with y
		allPossibleStrings(
			str, cur + "y", i + 1);

		// Recursive call after replacing
		// current character with z
		allPossibleStrings(
			str, cur + "z", i + 1);
	}
	else {

		// Recursive call after appending
		// the current character
		allPossibleStrings(
			str, cur + str[i], i + 1);
	}
}

// Driver Code
int main()
{
	string str = "a1b2";
	allPossibleStrings(str, "", 0);

	return 0;
}
