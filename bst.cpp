#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root=NULL;
Node *search(Node *current,int item)
{
    Node *loc=NULL;
    if(current->data==item)
    {
        loc=current;
    }
    else if(current->data>item)
    {
      if(current->left!=NULL)
      {
          loc=search(current->left,item);
      }
    }
    else
    {
        if(current->right!=NULL)
        {
            loc=search(current->right,item);
        }

    }
    return loc;
}
int main()
{
    Node n1;
    Node *loc=NULL;
    n1.data=43;
    n1.left=NULL;
    n1.right=NULL;
    root=&n1;
    cout<<root<<endl;
    loc=search(root,31);
    cout<<loc;
    return 0;

}
