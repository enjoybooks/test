#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool big(const string &a, const string &b)
{
	return a.size() < b.size();
}

static void output(vector<string>words)
{
	for (int i = 0; i < words.size(); ++i)
		cout << words[i] << ",";
}


int main() {
	string word;
	vector<string>words;
	while (cin >> word)
	{
		if (word.back() == '.')
		{
			word.pop_back();
			words.push_back(word);
			break;
		}
		words.push_back(word);
	}
	cout << "单词个数：" << words.size() << endl;
	sort(words.begin(), words.end(), big);
	cout << "最长单词：" << words.back() << endl;
	cout << "最长单词的长度：" << words.back().size() << endl;
	output(words);
}