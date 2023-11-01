#include <bits/stdc++.h>

using namespace std;

class MyHashSet
{
private:
    MyHashSet * left;
    MyHashSet* right;
    int data ;

public:
    
    MyHashSet()
    {

    }

    void add(int key)
    {
        
        if (key<data){
            if(this->left == NULL){
                MyHashSet *temp = new MyHashSet();
                temp->data = key;
                this->left = temp;
                return;
            }
            left->add(key);

        }else{
            if(this->right == NULL){
                MyHashSet *temp = new MyHashSet();
                temp->data = key;
                this->left = temp;
                return;
            }
            right->add(key);
        }
    }
    MyHashSet min(){
        MyHashSet *temp = this;
        while(temp->left){
            temp = temp->left;
        }
        return *temp;

    }

    void remove(int key)
    {
        

        if (key<data){
            left->remove(key);

        }else if(key>data){
            right->remove(key);
        }else{
            if(this->left == NULL and this->right == NULL){
                free(this);
            }
            else if(this->left == NULL){
                this->data = right->data;
                this->right = right->right;
                this->left = right->left;
            }
            else if(this->right == NULL){
                this->data = left->data;
                this->right = left->right;
                this->left = left->left;

            }else{
                MyHashSet successor = right->min();
                int val = successor.data;
                this->remove(successor.data);
                this->data = val;


            }
        }
    }
    int height(){
        if(this ==NULL)
            return 0;
        return 1 + max(left->height(),right->height());
    }

    string contains(int key)
    {
        if(this == NULL)
            return "false";
        if (this->data == key){
            return "true";
        }
        if (key<data){
            return left->contains(key);

        }else {
           return  right->contains(key);
        }

    }
    
};


int main(){

    MyHashSet *a = new MyHashSet();
    a->add(5);
    a->add(7);
    a->add(6);
    a->add(1);
    a->remove(1);
    cout<<a->contains(1)<<endl;
    
    
}