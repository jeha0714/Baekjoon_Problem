#include <iostream>
#include <vector>
#include <algorithm>

#define UNDEFINE 0

int 	n; // # of candy
double	m; // amount of money
std::vector< std::pair<int, double> >	candy; 
std::vector<int>						dp(10001, 0); // dp for max calorie each price

bool	ascending(const std::pair<int, double> &a, const std::pair<int, double> &b)
{
	return (a.second < b.second);
}

int	dnc(int	p)
{
	if (dp[p] != UNDEFINE)
		return (dp[p]);
	
	for (int i = 0; i < candy.size(); i++)
	{
		int	candyP = static_cast<int>(candy[i].second * 100 + 0.1);
		if (p >= candyP)
			dp[p] = std::max(dp[p], candy[i].first + dnc(p - candyP));
	}

	return (dp[p]);
}

int main(void)
{
	// each calorie, price about candy
	int		c;
	double	p;

	while (1)
	{
	/* input data */
		// candy calorie and price
		std::cin >> n >> m;

		// finish
		if (n == 0 && m == 0.00)
			break ;
		
	/* set candy vector */
		// clear
		candy.clear();

		// init
		for (int i = 0; i < n; i++)
		{
			std::cin >> c >> p;
			candy.push_back(std::make_pair(c, p));
		}

		// sort candy to price ascending
			std::sort(candy.begin(), candy.end(), ascending);

	/* set dp */
		// clear
		dp.clear();

		// init to undefine
		for (int i = 0; i <= 10000; i++)
			dp[i] = UNDEFINE;

	/* dnc */
		dnc(static_cast<int>(m * 100 + 0.1));

	/* print result */
		std::cout << dp[static_cast<int>(m * 100 + 0.1)] << "\n";
	}

	return (0);	
}
