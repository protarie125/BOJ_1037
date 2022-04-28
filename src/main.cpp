#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int c;
	cin >> c;

	auto ds = vi(c);
	for (int i = 0; i < c; ++i) {
		cin >> ds[i];
	}

	if (1 == c) {
		cout << ds[0] * ds[0];
		return 0;
	}

	auto mn = ds[0];
	auto mx = ds[0];
	for (const auto& d : ds) {
		if (d < mn) {
			mn = d;
		}

		if (mx < d) {
			mx = d;
		}
	}

	cout << mn * mx;

	return 0;
}