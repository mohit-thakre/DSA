#include <iostream>
using namespace std;

class Queue
{
	int start;
	int end;
	int arr[4];
	int current;

public:
	Queue()
	{
		start = -1;
		end = -1;
		current = 0;
	}
	void push(int val)
	{
		if (current == 4)
		{
			cout << "stack overflow" << endl;
			exit(1);
		}
		if (start == -1)
		{
			start++;
			end++;
		}
		else
		{
			end = (end + 1) % 4;
		}
		arr[end] = val;
		current++;
	}
	int pop()
	{
		if (current == 0)
		{
			cout << "stack is underflow";
			exit(1);
		}
		else
		{

			int x = arr[start];
			start = (start + 1) % 4;
			if (current == 1)
			{
				start = -1;
				end = -1;
			}
			current--;
			return x;
		}
	}
	int top()
	{
		if (current == 0)
			cout << "stack is empty";
		exit(1);

		return arr[end];
	}
	int size()
	{
		return current;
	}
};

int main()
{
	Queue q;

	cout << q.size();

	return 0;
}
