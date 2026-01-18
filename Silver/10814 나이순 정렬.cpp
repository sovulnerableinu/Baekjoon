#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b)
{
	if (a.first.first != b.first.first) // 나이가 다르다
	{
		return a.first.first < b.first.first;
	}
	else // 나이가 같다. -> 먼저 등록 순으로 정렬
	{
		return a.second < b.second;
	}
}

int main()
{
	int n;
	cin >> n;

	int age;
	string name;
	pair<pair<int, string>, int> p;

	vector<pair<pair<int, string>, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		p.first = make_pair(age, name);
		p.second = i;

		v.push_back(p);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first.first << " " << v[i].first.second << endl;
	}
}