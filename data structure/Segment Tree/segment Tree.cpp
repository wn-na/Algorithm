#include <iostream>
#include <vector>
#include <cmath>

template <typename T>
class SegmentTree {
	// start 1 ~ N
private:
	std::vector<T> tree;
	int size;
	int max_size;
	const int default_value = 0;
public:
	SegmentTree(int size) {
		this->size = int(pow(2, int(ceil(log2(size)))));
		this->max_size = this->size * 2;
		this->tree.assign(this->max_size, this->default_value);
	}

	int range() {
		return this->size - 1;
	}

	T sum(int node, int start, int end, int left, int right)
	{
		if (left > end || right < start) return 0;
		if (left <= start && end <= right) return this->tree[node];
		int mid = (start + end) / 2;
		return sum(node * 2, start, mid, left, right) + sum(node * 2 + 1, mid + 1, end, left, right);
	}

	void update(int i, int value) {
		i += this->size - 1;
		this->tree[i] = value;
		while (i > 1) {
			i /= 2;
			this->tree[i] = this->tree[i * 2] + this->tree[i * 2 + 1];
		}
	}

};

int main()
{
	int N, K;
	std::cin >> N >> K;
	SegmentTree<long long> st(N);
	for (int i = 1; i <= N; i++) {
		int q;
		std::cin >> q;
		st.update(i, q);
	}
	for (int i = 0; i < K; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a == 1) {
			// 1 ~ N => b, c
			// else b + 1, c
			st.update(b, c);
		} else {
			std::cout << st.sum(1, 0, st.range(), b - 1, c - 1) << "\n";
		}
	}
	return 0;
}