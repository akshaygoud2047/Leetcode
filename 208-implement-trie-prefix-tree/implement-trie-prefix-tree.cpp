class Node{
public:
    unordered_map<char, Node*> children;
    bool endofword;

    Node(){
        endofword = false;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* temp = root;

        for(int i = 0; i < word.size(); i++) {
            char ch = word[i];

            if(temp->children.count(ch) == 0) {
                temp->children[ch] = new Node();
            }

            temp = temp->children[ch];
        }

        temp->endofword = true;
    }

    bool search(string word) {
        Node* temp = root;

        for(int i = 0; i < word.size(); i++) {
            char ch = word[i];

            if(temp->children.count(ch) == 0) {
                return false;
            }

            temp = temp->children[ch];
        }

        return temp->endofword;
    }

    bool startsWith(string prefix) {
        Node* temp = root;

        for(int i = 0; i < prefix.size(); i++) {
            char ch = prefix[i];

            if(temp->children.count(ch) == 0) {
                return false;
            }

            temp = temp->children[ch];
        }

        return true;
    }
};
/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */