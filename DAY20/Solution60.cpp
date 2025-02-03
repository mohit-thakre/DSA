#include <iostream>
#include <algorithm>
using namespace std;

bool rotatestring(string s, string goal)
{

	return (s.length() == goal.length() && (s + s).find(goal) != string::npos);
}

int main()
{

	cout << rotatestring("arr", "rra") << endl;
	return 0;
}
