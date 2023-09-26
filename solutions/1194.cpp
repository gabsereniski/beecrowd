#include <bits/stdc++.h>
using namespace std;

struct node {
    char data;
    node *left, *right;
    node(char data) : data(data), left(NULL), right(NULL) {}
};

node *build(string pre, string in)
{
    if(pre.empty() || in.empty()) return NULL;

    node *root = new node(pre[0]);

    int root_pos = in.find(pre[0]);
    string left_in = in.substr(0, root_pos);
    string right_in = in.substr(root_pos+1);

    int left_size = left_in.size();
    string left_pre = pre.substr(1, left_size);
    string right_pre = pre.substr(left_size+1);

    root->left = build(left_pre, left_in);
    root->right = build(right_pre, right_in);

    return root;
}

void postorder(node *root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

int main()
{
    int c;

    cin >> c;

    while(c--)
    {
        int n;
        string pre, in;
        cin >> n >> pre >> in;

        node *root = build(pre, in);
        postorder(root);
        cout << endl;
    }
}