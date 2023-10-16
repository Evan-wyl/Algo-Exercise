#include<iostream>
#include<vector>
#include<string>

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d){
        return;
    }
};

class BinarySearchTree{
public:
    void Insert(Node* root, int p){
        if(root == nullptr){
            root->data = p;
        }else{
            Node* tmp = root;
            while (tmp != nullptr)
            {
                if (tmp->data > p)
                {
                    if(tmp->left == nullptr){
                        tmp->left = &(Node(p));
                        return;
                    }
                    tmp = tmp->left;
                }else{
                    if (tmp->right == nullptr)
                    {
                        tmp->right = &(Node(p));
                        return;
                    }
                    
                    tmp = tmp->right;
                }
            }
        }
    }

    bool Find(Node* root, int e){
        if (root == nullptr)
        {
            return false;
        }
        Node* tmp = root;
        while (tmp != nullptr && tmp->data != e)
        {
            if(tmp->data > e){
                tmp = tmp->left;
            }else{
                tmp = tmp->right;
            }
        }
        return tmp != nullptr;
    }

    bool Delete(Node* root, int e){
        Node* p, *pp, *minp, *minpp, *child;
        child == nullptr;
        p = root;
        pp = nullptr;
        while (p != nullptr && p->data != e)
        {
            pp = p;
            if(e > p->data){
                p = p->right;
            }else{
                p = p->left;
            }
        }
        
        if(p == nullptr){
            return false;
        }

        if(p->left != nullptr && p->right != nullptr){
            minpp = p;
            minp = p->right;
            while (minp->left != nullptr)
            {
                minpp = minp;
                minp = minp->left;
            }
            p->data = minp->data;
            minpp->left = minp->right;
            return true;
        }
        if(p->left != nullptr || p->right != nullptr){
            minpp = p;
            minp = p->right;
            if (p->left != nullptr)
            {
                child = p->left;
            }else{
                child = p->right;
            }
            if(pp->data > p->data){
                pp->left = child;
            }else{
                pp->right = child;
            }
            return true;
        }

        if(pp->left == p){
            pp->left = child;
        }else{
            pp->right = child;
        }
        return true;
    }
};

