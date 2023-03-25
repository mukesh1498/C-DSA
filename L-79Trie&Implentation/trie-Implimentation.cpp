#include <iostream>
using namespace std;

class TrieNode
{

public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    // constructor
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie
{   public:
    TrieNode *root;
    

    // constructor 
     trie(){
        root = new TrieNode('\0');
     }
    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption, word will be in Capital
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }
};

int main()
{
 trie* t = new trie();
 t.insertWord("abcd");
    return 0;
};