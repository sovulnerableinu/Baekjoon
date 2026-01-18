#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct member
{
	int age;
	string name;
};

bool compare(const pair<member, int>& a, const pair<member, int>& b)
{
	if (a.first.age != b.first.age) // 나이가 다르다
	{
		return a.first.age < b.first.age;
	}
	else // 나이가 같다. -> 먼저 등록 순으로 정렬
	{
		return a.second < b.second;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int age;
	string name;
	pair<member, int> p;

	vector<pair<member, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		p.first.age = age;
		p.first.name = name;
		p.second = i;

		v.push_back(p);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first.age << " " << v[i].first.name << '\n';
	}
}
