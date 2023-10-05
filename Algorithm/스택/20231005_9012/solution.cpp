#include <iostream>
#include <string> // string type
#include <vector> // vector

/* Main */
int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	int T;
	int i;
	std::string str;
	std::vector<char> parenthesis;

	/* Set initial input */
	std::cin >> T;

	/* Find result in each case */
	for (int test_case = 1; test_case <= T; test_case++)
	{
		/* Set parenthesis */
		str.clear();
		parenthesis.clear();
		std::cin >> str;

		/* Read string and push,pop stack */
		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
				parenthesis.push_back('(');
			else if (str[i] == ')')
			{
				if (parenthesis.size() > 0)
					parenthesis.pop_back();
				else
					break ;
			}
		}

		/* Print result */
			// Print 'YES' 
			// if stack is empty and string reach the end.
		if (parenthesis.size() == 0 && i == str.size())
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}

	return (0);
}
