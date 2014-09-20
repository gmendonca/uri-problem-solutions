#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

class BinarySearchTree
{
    private:
        struct tree_node
        {
           tree_node* left;
           tree_node* right;
           int data;
        };
        tree_node* root;
    
    public:
        BinarySearchTree()
        {
           root = NULL;
        }
       
        bool isEmpty() const { return root==NULL; }
        void print_inorder();
        void inorder(tree_node*);
        void print_preorder();
        void preorder(tree_node*);
        void print_postorder();
        void postorder(tree_node*);
        void insert(int);
};

void BinarySearchTree::insert(int d)
{
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    
    if(isEmpty()) root = t;
    else
    {
        tree_node* curr;
        curr = root;
        while(curr)
        {
            parent = curr;
            if(t->data > curr->data) curr = curr->right;
            else curr = curr->left;
        }

        if(t->data < parent->data)
           parent->left = t;
        else
           parent->right = t;
    }
}

void BinarySearchTree::print_inorder()
{
  inorder(root);
}

void BinarySearchTree::inorder(tree_node* p)
{
    
    if(p != NULL)
    {
        if(p->left) inorder(p->left);
        printf(" %d",p->data);
        if(p->right) inorder(p->right);
    }
    else return;
}
void BinarySearchTree::print_preorder()
{
    preorder(root);
}

void BinarySearchTree::preorder(tree_node* p)
{
    
    if(p != NULL)
    {
        printf(" %d",p->data);
        if(p->left) preorder(p->left);
        if(p->right) preorder(p->right);
    }
    else return;
}

void BinarySearchTree::print_postorder()
{
    postorder(root);
}

void BinarySearchTree::postorder(tree_node* p)
{
    if(p != NULL)
    {
        if(p->left) postorder(p->left);
        if(p->right) postorder(p->right);
        printf(" %d",p->data);
    }
    else return;
}

int main(){
    int n, i, x, j, e;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
          scanf("%d",&x);
          BinarySearchTree b;
          for(j = 0; j < x; j++){
                scanf("%d",&e);
                b.insert(e);
          }
          printf("Case %d:\n",i+1);
          printf("Pre.:");
          b.print_preorder();
          printf("\nIn..:");
          b.print_inorder();
          printf("\nPost:");
          b.print_postorder();
          printf("\n\n");
    }
    return 0;
}
