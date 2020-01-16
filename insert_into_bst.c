#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

void inorder(struct node *root)
{
    if(root==NULL) return;
    else{
        inorder(root->left);
        printf("%3d ",root->data);
        inorder(root->right);
    }


}
void insert(int ele)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->left = NULL;
    newnode->right = NULL;

    if(root==NULL)
    {
        root = newnode;
    }

    else
    {
        struct node *temp;
        temp = root;
        while(temp!=NULL){
            if(temp->data > ele)
            {
                if(temp->left!=NULL)
                {
                    temp = temp->left;
                }

                else if(temp->left==NULL)
                {
                    temp->left=newnode;
                    break;
                }
            }

            else if(temp->data<ele)
            {
                if(temp->right !=NULL)
                {
                    temp=temp->right;
                }
                else if(temp->right == NULL)
                {
                    temp->right = newnode;
                    break;
                }
            }
        }
    }
}

int main()
{
    insert(100);
    insert(50);
    insert(200);
    insert(25);
    insert(90);
    insert(300);
    insert(40);

    printf("\n inorder traversal is :\n");
    inorder(root);
}
