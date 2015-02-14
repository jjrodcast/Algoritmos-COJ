#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <queue>
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <numeric> 
#include <utility> 
#include <sstream> 
#include <iostream> 
#include <iomanip> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
#include <cstring> 

using namespace std; 
typedef pair<int, int> pii;

pii points[400010];
int x, y, n;
multiset<int> remainingYs;

int main() {
	while (scanf("%d", &n) > 0) {
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			points[4*i] = make_pair(x-1, y-1);
			points[4*i+1] = make_pair(x-1, y+1);
			points[4*i+2] = make_pair(x+1, y-1);
			points[4*i+3] = make_pair(x+1, y+1);
		}

		for (int i = 0; i < 4*n; i++) remainingYs.insert(points[i].second);

		sort(points, points+(4*n));

		long long perimeter = 2*(points[4*n-1].first - points[0].first) +
							  2*(*remainingYs.rbegin() - *remainingYs.begin());

		int current_x = points[0].first;
		int y_top = points[0].second;
		int y_bottom = points[0].second;
		long long area = 0;

		int prev_top = y_top;
		int prev_bottom = y_bottom;

		for (int i = 0; i < 4*n; i++) {
			if (y_bottom < *remainingYs.begin()) 
				y_bottom = min(*remainingYs.begin(), prev_top - 1);
			if (y_top > *remainingYs.rbegin())
				y_top = max(*remainingYs.rbegin(), prev_bottom + 1);
			
			if (current_x != points[i].first) {
				area += (y_top - y_bottom);
				prev_top = y_top;
				prev_bottom = y_bottom;

				if (y_bottom < *remainingYs.begin()) 
					y_bottom = min(*remainingYs.begin(), prev_top - 1);
				if (y_top > *remainingYs.rbegin())
					y_top = max(*remainingYs.rbegin(), prev_bottom + 1);

				area += (points[i].first - current_x - 1) * 1ll * (y_top - y_bottom); 
				current_x = points[i].first;
			}

			y_top = max(y_top, points[i].second);
			y_bottom = min(y_bottom, points[i].second);
			remainingYs.erase( remainingYs.find(points[i].second) );
		}

		printf("%lld %lld\n", perimeter, area);
	}
}
