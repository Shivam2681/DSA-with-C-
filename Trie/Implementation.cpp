#include<iostream>
using namespace std;

class Trinode{
    public:
    char data;
    Trinode* children[26];
    bool isTerminal;

    Trinode(char ch){
        data = ch;
        for(int i =0;i<26;i++){
            children[i] == NULL;
        }
        isTerminal == false;
    }
};

class Tri{
    public:
    Trinode* root;

    Tri(){
        root = new Trinode('\0');
    }

    void insertUtil(Trinode* root,string word){

        if(word.length() == 0){
            root->isTerminal == true;
            return;
        }

        int index = word[0] - 'A';
        Trinode* child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new Trinode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child,word.substr(1));

    }
    void insertword(string word){
        insertUtil(root,word);
    }

    bool searchUtil(Trinode* root,string word){

        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        Trinode* child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child,word.substr(1));

    }
    bool searchword(string word){
        return searchUtil(root,word);
    }
};

int main(){
    Tri*t = new Tri();
    t->insertword("SHIVAM");
    cout<< "present or not" <<t->searchword("SHIVAM")<<endl;
    return 0;
}