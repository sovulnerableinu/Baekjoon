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

bool compare(const member& a, const member& b)
{
	return a.age < b.age;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int age;
	string name;
	vector<member> v;

	v.reserve(n);

	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;

		v.push_back({ age, name });
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].age << " " << v[i].name << '\n';
	}
}
