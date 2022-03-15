#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stack>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *root=NULL,*temp,*curr;
class tree{
	private:
	public:
		void create(int x){
			 temp=new node;
			 temp->data=x;
			 temp->left=NULL;
			 temp->right=NULL;
		}
		void insert(node *dRoot, int x){
			if(root==NULL){
				create(x);
				root=temp;
			}
			else if(x>=dRoot->data && dRoot->right==NULL){
				cout<<"\nDR="<<dRoot->data<<endl;
				create(x);
				dRoot->right=temp;
			}
			else if(x<dRoot->data && dRoot->left==NULL){
				cout<<"\nDR="<<dRoot->data<<endl; 
				create(x);
				dRoot->left=temp;
			}
			else if(x>=dRoot->data && dRoot->right!=NULL){
				insert(dRoot->right,x);
			}
			else if(x<dRoot->data && dRoot->left!=NULL){
				insert(dRoot->left,x);
			}
		}
		void inOrderIterative(Node *root) 
		{ 
		    stack<Node *> s; 
		    curr = root; 
		  
		    while (curr != NULL || s.empty() == false) 
		    { 
		        while (curr !=  NULL) 
		        {
		            s.push(curr); 
		            curr = curr->left;
		        } 
		        curr = s.top(); 
		        s.pop(); 
		        cout << curr->data << " "; 
		        curr = curr->right;
		  
		    }
		    
		    void preorderIteration(Node *dRoot) 
			{
				Stack<Node> s = new Stack<Node>();
				while (true) {
					while (dRoot != null) {
						System.out.print(root.data + " ");
						s.push(root);
						root = root.left;
					}
					if (s.isEmpty()) {
						return;
					}
					root = s.pop();
					root = root.right;
				}
			}
};
int main(){
	tree obj;
	int op,x;
	while(true){
		system("cls");
		cout<<"\n\t1.Insert Data\n\n\t3. Display in PreOrder\n\nSelect Option : ";
		cin>>op;
		switch(op){
			case 1:{
				cout<<"\nEnter data : ";
				cin>>x;
				obj.insert(root,x);
				break;
			}
			case 2:{
				obj.displayInOrder(root);
				getch();
				break;
			}
		}
	} 
}


