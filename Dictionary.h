
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

struct TreeNode;

class Dictionary
{
public:
	Dictionary();
	Dictionary(string file);
	TreeNode* addWord(TreeNode* root,string word);
	bool isWord(string word);
	bool isPrefix(string word);
	int wordCount();
	TreeNode* createNewNode(int index);


private:
    TreeNode* root;
	int numWords;
	string line;

	// Any private methods you need/want
};
