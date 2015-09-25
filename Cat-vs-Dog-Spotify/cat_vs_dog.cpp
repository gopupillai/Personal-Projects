#include <iostream>
#include <string>
#include <map>

int number_satisfied_voters(int v);
// REQUIRES: Input buffer at start of line for first vote for test case
// MODIFIES: Moves input buffer to end of all votes for test case
// EFFECTS: Returns the number of satisfied voters

int main() {

	int test_cases;
	std::cin >> test_cases;
	for (int i = 0; i < test_cases; i++) {
		int v;
		std::cin >> v >> v >> v;
		std::cout << number_satisfied_voters(v) << '\n';
	}

	return 0;
}

int number_satisfied_voters(int v) {

	std::map<std::string, int> keep, kick;
	int satisfied = 0;
	for (int i = 0; i < v; i++) {
		std::string keep_vote, kick_vote;
		std::cin >> keep_vote >> kick_vote;
		keep[keep_vote]++;
		kick[kick_vote]++;
		if (keep[keep_vote] > satisfied) {
			satisfied = keep[keep_vote];
		}
		if (kick[kick_vote] > satisfied) {
			satisfied = kick[kick_vote];
		}
	}
	return satisfied;

}
