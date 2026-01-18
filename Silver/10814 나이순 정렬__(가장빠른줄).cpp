#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct member
{
	int age;
	string name;
	int index;
};

bool compare(const member& a, const member& b)
{
	if (a.age != b.age) // 나이가 다르다
	{
		return a.age < b.age;
	}
	else // 나이가 같다. -> 먼저 등록 순으로 정렬
	{
		return a.index < b.index;
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
	vector<member> v;

	v.reserve(n);

	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		//m.age = age;
		//m.name = name;
		//m.index = i;

		v.push_back({ age, name, i });
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].age << " " << v[i].name << '\n';
	}
}
