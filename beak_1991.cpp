/***********************************************
2017_11_1_수요일
백준 1991 트리순회
************************************************/
#include<iostream>
using namespace std;
class node {
public:
	char key;
	node* left;
	node* right;
};
void preorder(node*, char);
void postorder(node *, char);
void inorder(node*, char);
node* findKey(node*, char);
int main() {
	int numNode;
	cin >> numNode;
	node* root = NULL;
	char temp;
	int index = 0;
	node* tmp = new node();

	bool isNull = true;
	while (numNode--) {
		cin >> temp;
		node* curr = new node();
		if (root == NULL) {
			curr->key = temp;
			root = curr; 
			
		}
		else {
			curr=findKey(root, temp);
			if (curr == NULL) {
				tmp->key = temp;

			}
		}
		node* left=new node();
		node* right = new node();
		cin >> temp;
		left->key = temp;
		cin >> temp;
		right->key = temp;

		if (left->key == root->key) {
			tmp->left = root;
			tmp->right = right;
			root = tmp;
		}
		else if (right->key == root->key) {
			tmp->left = left;
			tmp->right = root;
			root = tmp;
		}
		else {
			curr->left = left;
			curr->right = right;
		}
		

		
		
	}
	preorder(root, 0);
	cout << endl;
	inorder(root, 0);
	cout << endl;
	postorder(root, 0);
	cout << endl;


	return 0;
}
node* findKey(node *root, char key) {
	if (root == NULL)
		return NULL;
	if (root->key == key)
		return root;
	node* res = findKey(root->left, key);
	if (res == NULL)
		return findKey(root->right,key);
	else
		return res;
}

void preorder(node* root, char key) {
	if (root->key == '.')
		return;
	cout << root->key;
	preorder(root->left, key);
	preorder(root->right, key);
}
void inorder(node* root, char key) {
	if (root->key == '.')
		return;
	inorder(root->left, key);
	cout << root->key;
	inorder(root->right, key);
}
void postorder(node* root, char key) {
	if (root->key == '.')
		return;
	
	postorder(root->left, key);
	postorder(root->right, key);
	cout << root->key;
}
