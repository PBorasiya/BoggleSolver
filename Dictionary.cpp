#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "Dictionary.h"

using namespace std;
struct TreeNode {
	char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char flagArr[26]={'f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f'};
    TreeNode* next;
};

char alphabet1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char flagArr1[26]={'f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f'};
Dictionary::Dictionary()
{
    cout<<"helloo"<<endl;
    TreeNode* root= NULL;

}

Dictionary::Dictionary(string inFileName){

    ifstream infile("sample.txt");
    ofstream outfile("outputsample.txt");
    numWords=0;

    while(infile>>line){
          outfile<<line<<endl;
          addWord(root,line);
          numWords++;
        }
cout<<numWords<<endl;

}

TreeNode* Dictionary::addWord(TreeNode* root,string line){
   //TreeNode* currNode=root;
   cout<<"addword call works"<<endl;
   char word[50];
   int wordlength;
   int index;
   wordlength=line.length();
   for(int i=0;i<wordlength;i++){
    word[i]=line[i];
    index=(int)word[i]-(int)'a';
    //if(root->alphabet[index]==alphabet1[index]){
            //cout<<"currnode error msg"<<endl;
            if(root->next==NULL){
                root=createNewNode(index);
                cout<<"daabdafhabfkajfhkabchhjagchjavh"<<endl;
                return root;
            }
        //currNode->flagArr[index]='t';
        //currNode->alphabet[index]=word[i];
        //currNode->next=root;
        //cout<<"done"<<endl;
    //}
/*        else{
            cout<<"error"<<endl;
        }
*/
   }

   for(int i=0;i<wordlength;i++){

   }
   cout<<line<<"  "<<wordlength<<" "<<word[2] << " " << index <<endl;

}

TreeNode* Dictionary::createNewNode(int index){
    cout<<"createNewNode call works"<<endl;
    TreeNode* newNode=new TreeNode;
    newNode->alphabet[index]=alphabet1[index];//(char)97+(char)index
    newNode->flagArr[index]='t';
    newNode->next=NULL;
    cout<<"done"<<endl;
    return newNode;
}
