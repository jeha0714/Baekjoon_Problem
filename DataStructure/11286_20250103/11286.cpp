#include <iostream>
#include <queue>

using namespace std;

int N; // # of operator

int main(void)
{
	// priority queue
		// min-heap based on the first element of the pair
	priority_queue< pair<int, int>,
					vector< pair<int, int> >,
					greater< pair<int, int> > > pq;
	int	tmp;

/* input data */
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;

		if (tmp == 0)
		{
			if (pq.empty())
				cout << "0\n";
			else
			{
				// print top and pop
				cout << pq.top().second << "\n";
				pq.pop();
			}
		}
		else // add node in pq
			pq.push(make_pair(abs(tmp), tmp));
	}

	return (0);
}
