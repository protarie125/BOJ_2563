#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

vvi d(100, vi(100, 0));

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (auto i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;

		for (auto r = 0; r < 10; ++r) {
			for (auto c = 0; c < 10; ++c) {
				d[y + r][x + c] = 1;
			}
		}
	}

	auto ans = int{ 0 };
	for (const auto& r : d) {
		for (const auto& v : r) {
			ans += v;
		}
	}

	cout << ans;

	return 0;
}