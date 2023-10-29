#include <iostream>
#include <vector>
#include <list>
#include <set>

using namespace std;

template <typename T>
auto print_container(set<T> const& l)
{
	for (auto i : l) cout << i << ", ";
	cout << endl;
	return;
}

template <typename T>
auto print_container(list<T> const& l)
{
	for (auto i : l) cout << i << ", ";
	cout << endl;
	return;
}

template <typename T>
auto print_container(vector<T> const& l)
{
	for (auto i : l) cout << i << ", ";
	cout << endl;
	return;
}

int main()
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set); // four one three two. помните почему такой порядок? :)

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector); // one, two, three, four

	system("pause");
}