// C program to implement binary search tree
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
 
// Define a structure for a binary tree node
struct BinaryTreeNode {
    int key;
    struct BinaryTreeNode *left, *right;
};
 
// Function to create a new node with a given value
struct BinaryTreeNode* newNodeCreate(int value)
{
    struct BinaryTreeNode* temp
        = (struct BinaryTreeNode*)malloc(
            sizeof(struct BinaryTreeNode));
    temp-&gt;key = value;
    temp-&gt;left = temp-&gt;right = NULL;
    return temp;
}
 
// Function to search for a node with a specific key in the
// tree
struct BinaryTreeNode*
searchNode(struct BinaryTreeNode* root, int target)
{
    if (root == NULL || root-&gt;key == target) {
        return root;
    }
    if (root-&gt;key &lt; target) {
        return searchNode(root-&gt;right, target);
    }
    return searchNode(root-&gt;left, target);
}
 
// Function to insert a node with a specific value in the
// tree
struct BinaryTreeNode*
insertNode(struct BinaryTreeNode* node, int value)
{
    if (node == NULL) {
        return newNodeCreate(value);
    }
    if (value &lt; node-&gt;key) {
        node-&gt;left = insertNode(node-&gt;left, value);
    }
    else if (value &gt; node-&gt;key) {
        node-&gt;right = insertNode(node-&gt;right, value);
    }
    return node;
}

 
// Function to perform post-order traversal
void postOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        postOrder(root-&gt;left);
        postOrder(root-&gt;right);
        printf(&quot; %d &quot;, root-&gt;key);
    }
}
 
// Function to perform in-order traversal
void inOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        inOrder(root-&gt;left);
        printf(&quot; %d &quot;, root-&gt;key);
        inOrder(root-&gt;right);
    }
}
 
// Function to perform pre-order traversal
void preOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        printf(&quot; %d &quot;, root-&gt;key);
        preOrder(root-&gt;left);
        preOrder(root-&gt;right);
    }
}
 
// Function to find the minimum value
struct BinaryTreeNode* findMin(struct BinaryTreeNode* root)
{
    if (root == NULL) {
        return NULL;
    }
    else if (root-&gt;left != NULL) {
        return findMin(root-&gt;left);
    }
    return root;
}
 
// Function to delete a node from the tree
struct BinaryTreeNode* delete (struct BinaryTreeNode* root,
                               int x)
{
    if (root == NULL)
        return NULL;
 
    if (x &gt; root-&gt;key) {
        root-&gt;right = delete (root-&gt;right, x);
    }
    else if (x &lt; root-&gt;key) {
        root-&gt;left = delete (root-&gt;left, x);

    }
    else {
        if (root-&gt;left == NULL &amp;&amp; root-&gt;right == NULL) {
            free(root);
            return NULL;
        }
        else if (root-&gt;left == NULL
                 || root-&gt;right == NULL) {
            struct BinaryTreeNode* temp;
            if (root-&gt;left == NULL) {
                temp = root-&gt;right;
            }
            else {
                temp = root-&gt;left;
            }
            free(root);
            return temp;
        }
        else {
            struct BinaryTreeNode* temp
                = findMin(root-&gt;right);
            root-&gt;key = temp-&gt;key;
            root-&gt;right = delete (root-&gt;right, temp-&gt;key);
        }
    }
    return root;
}
 
int main()
{
    // Initialize the root node
    struct BinaryTreeNode* root = NULL;
 
    // Insert nodes into the binary search tree
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
 
    // Search for a node with key 60
    if (searchNode(root, 60) != NULL) {
        printf(&quot;60 found&quot;);
    }
    else {
        printf(&quot;60 not found&quot;);
    }
 
    printf(&quot;\n&quot;);
 
    // Perform post-order traversal
    postOrder(root);
    printf(&quot;\n&quot;);
 

    // Perform pre-order traversal
    preOrder(root);
    printf(&quot;\n&quot;);
 
    // Perform in-order traversal
    inOrder(root);
    printf(&quot;\n&quot;);
 
    // Perform delete the node (70)
    struct BinaryTreeNode* temp = delete (root, 70);
    printf(&quot;After Delete: \n&quot;);
    inOrder(root);
 
    // Free allocated memory (not done in this code, but
    // good practice in real applications)
 
    return 0;
}
