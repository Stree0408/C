// Binary Tree Implementation in C Program
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node):");
    scanf("%d", &x);
    
    if (x==-1)
        return 0;
    newnode->data = x;
    
    printf("Enter left child of %d", x);
    newnode->left = create();
    
    printf("Enter right child of %d", x);
    newnode->right = create();
    
    
    
    return newnode;
}


int main()
{
    struct node *root;
    root = 0;
    root = create();
}


// 1. 이진 트리를 링크로 표현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//typedef struct TreeNode{
//    int data;
//    struct TreeNode *left, *right;
//} TreeNode;
//
//
//int main()
//{
//    TreeNode *n1,*n2,*n3;
//    n1 = (TreeNode *)malloc(sizeof(TreeNode));
//    n2 = (TreeNode *)malloc(sizeof(TreeNode));
//    n3 = (TreeNode *)malloc(sizeof(TreeNode));
//
//    n1->data = 10;  // 첫번째 노드를 설정한다.
//    n1->left = n2;
//    n1->right = n3;
//    
//    n2->data = 20;  // 두번째 노드를 설정한다.
//    n2->left = NULL;
//    n2->right = NULL;
//    
//    n3->data = 30;  // 세번째 노드를 설정한다.
//    n3->left = NULL;
//    n3->right = NULL;
//}




// 2. 다음 이진 트리를 스택을 사용하여 전위,중위,후위순회하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//    int data;
//    struct TreeNode *left, *right
//}TreeNode;
//
//#define MAX 100
//#define TRUE 1
//#define FALSE 0
//
//
//TreeNode *stack[MAX];
//int top;
//
//
//void initStack()
//{
//    top = 0;
//}
//
//
//void push(TreeNode *ptrNode)
//{
//    stack[top++] = ptrNode;
//}
//
//int isStackEmpty()
//{
//    if (top == 0)
//        return TRUE;
//    else
//        return FALSE;
//}
//
//
//TreeNode *pop()
//{
//    TreeNode *ptrNode;
//    if (!isStackEmpty()) {
//        ptrNode = stack[--top];
//        return ptrNode;
//    }
//    else
//        printf("Stack is Empty!!\n");
//    return NULL;
//}
//
//
//// 트리의 초기화, 초기구성
//TreeNode* initializeTree(TreeNode *root)
//{
//    TreeNode *N4 = (TreeNode*)malloc(sizeof(TreeNode));
//    N4->data = 4;
//    N4->left = NULL;
//    N4->right = NULL;
//    
//    TreeNode *N5 = (TreeNode*)malloc(sizeof(TreeNode));
//    N5->data = 5;
//    N5->left = NULL;
//    N5->right = NULL;
//    
//    TreeNode *N6 = (TreeNode*)malloc(sizeof(TreeNode));
//    N6->data = 6;
//    N6->left = NULL;
//    N6->right = NULL;
//
//    TreeNode *N3 = (TreeNode*)malloc(sizeof(TreeNode));
//    N3->data = 3;
//    N3->left = N6;
//    N3->right = NULL;
//    
//    TreeNode *N2 = (TreeNode*)malloc(sizeof(TreeNode));
//    N2->data = 2;
//    N2->left = N4;
//    N2->right = N5;
//    
//    TreeNode *N1 = (TreeNode*)malloc(sizeof(TreeNode));
//    N1->data = 1;
//    N1->left = N2;
//    N1->right = N3;
//
//    root = N1;
//    return root;
//}
//
//
//void Visit (TreeNode *ptrNode)
//{
//    printf("%2d -> ", ptrNode->data);
//}
//
//
//
//// 내가 푼것
//void Preorder(TreeNode *ptrNode)
//{
//    printf("Preorder : ");
//    while (1) {
//        if ( (ptrNode->right) != NULL )
//            push(ptrNode->right);
//        Visit(ptrNode);
//        
//        
//        if ( (ptrNode->left) != NULL ) {
//            ptrNode = (ptrNode -> left);
//        }
//        else {
//            if ( isStackEmpty() )
//                break;
//            ptrNode = pop();
//        }
//    }
//    printf("\n");
//}
//
//
//void Inorder(TreeNode *ptrNode)
//{
//    printf("Inorder : ");
//    while (1) {
//        push(ptrNode);
//        
//        
//        if ( (ptrNode->left) != NULL ) {
//            ptrNode = (ptrNode -> left);
//        }
//        else {
//            if ( isStackEmpty() )
//                break;
//            else {
//                ptrNode = pop();
//                Visit(ptrNode);
//            }
//        }
//
//    }
//    printf("\n");
//}
//
//
//
////void Preorder(TreeNode *ptrNode)
////{
////    printf("Preorder : ");
////    while ( 1 ) {
////        if ( ptrNode->right != NULL ) {
////            push(ptrNode->right);
////        }
////        Visit(ptrNode);
////        ptrNode = ptrNode -> left;
////        
////        if (ptrNode == NULL && !isStackEmpty() ) {
////            ptrNode = pop();
////        }
////        if (ptrNode == NULL && isStackEmpty() ){
////            break;
////        }
////    }
////    printf("\n");
////}
//
//
////void Inorder(TreeNode *ptrNode)
////{
////    printf("Inorder : ");
////    while ( 1 ) {
////        if ( ptrNode->left != NULL ) {
////            push(ptrNode);
////            ptrNode = ptrNode -> left;
////        }
////        else {
////            Visit(ptrNode);
////            if ( !isStackEmpty() ) {
////                ptrNode = pop();
////                Visit(ptrNode);
////                if (ptrNode->right != NULL) {
////                    ptrNode = ptrNode->right;
////                }
////                else {
////                    if ( !isStackEmpty() )
////                        ptrNode = pop();
////                    else
////                        break;
////                }
////            }
////            else
////                break;
////        }
////    }
////    printf("\n");
////}
//
//
//
//void Postorder(TreeNode *ptrNode)
//{
//    TreeNode *tmp;
//    
//    
//    printf("Postorder : ");
//    while ( 1 ) {
//        if ( ptrNode->left != NULL ) {
//            push(ptrNode);
//            if (ptrNode->right != NULL)
//                push(ptrNode->right);
//            ptrNode = ptrNode -> left;
//        }
//        else {
//            Visit(ptrNode);
//            if ( !isStackEmpty() )
//                ptrNode = pop();
//            else
//                break;
//        }
//    }
//    printf("\n");
//}
//
//
//
//int main()
//{
//    TreeNode *root=NULL;
//
//    initStack();    // 스택의 초기화
//    root = initializeTree(root);   // 트리의 초기화
//    Preorder(root);   // 전위순회
//    Inorder(root);   // 중위순회
////    Postorder(root);    // 후위순회
//}



// 4. 다음 이진 트리를 재귀호출로 전위순회, 중위순회, 후위순휘 하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int data;
//    struct Node* leftChild;
//    struct Node* rightChild;
//} Node;
//
//
//Node *initNode(int data, Node *leftChild, Node *rightChild)
//{
//    Node *node = (Node*) malloc(sizeof(Node));
//    node->data = data;
//    node->leftChild = leftChild;
//    node->rightChild = rightChild;
//    return node;
//}
//
//void Preorder(){
//    
//}
//
//void Inorder(){
//    
//}
//
//void Postorder(){
//    
//}
//
//
//
//
//int main()
//{
//    Node *n7 = initNode(50, NULL, NULL);
//    Node *n6 = initNode(37, NULL, NULL);
//    Node *n5 = initNode(23, NULL, NULL);
//    Node *n4 = initNode(5, NULL, NULL);
//    Node *n3 = initNode(48, NULL, NULL);
//    Node *n2 = initNode(17, NULL, NULL);
//    Node *n1 = initNode(30, n2, n3);
//    
//    
//    printf("전위순회 : ");
//    Preorder(n1);
//    printf("\n중위순회 : ");
//    Inorder(n1);
//    printf("\n후위순회 : ");
//    Postorder(n1);
//}




// 5. 다음 트리를 리스트로 저장하고 스택으로 순회하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define TRUE 1
//#define FALSE 0
//
//typedef struct Node {
//    int n;
//    struct Node *link;
//} Node;
//
//
//int stack[100] = { 0 };
//int cur;
//int visited[20] = { 0 };
//
//
//void add(Node **g, int p, int n)
//{
//    Node *newNode = (Node *)malloc(sizeof(Node));
//    newNode->n = n;
//    newNode->link = NULL;
//    if ( g[p] == NULL )
//        g[p] = newNode;
//    else
//    {
//        newNode->link = g[p];
//        g[p] = newNode;
//    }
//}
//
//void disp(Node **g)
//{
//    for (int i=1; 1<=8; i++)
//    {
//        Node *tmp = g[i];
//        printf("%d : ", i);
//        while (tmp) {
//            printf("%d ", tmp->n);
//            tmp = tmp->link;
//        }
//        puts("");
//    }
//}
//
//void dfs(Node **g, int v) {
//    cur = -1;
//    stack[++cur]=v;
//    
//    while(cur>=0) {
//        v = stack[cur--];
//        visited[v] = TRUE;
//        
//        printf("%d ", v);
//        
//        Node *tmp = g[v];
//        while (tmp) {
//            if (!visited[tmp->n]) {
//                stack[++cur] = tmp->n;
//                tmp = tmp->link;
//            }
//        }
//    }
//}
//
//
//
//int main()
//{
//    Node **list = (Node**)malloc(sizeof(Node*) * 9);
//    
//    for (int v=0; v<9; v++)
//        list[v] = NULL;
//    
//    add(list,1,2);
//    add(list,1,3);
//    add(list,2,4);
//    add(list,2,5);
//    add(list,3,6);
//    add(list,3,7);
//    
//    printf("\n스택으로 : ");
//    dfs(list, 1);
//
//}




// 6. 다음 트리를 리스트로 저장하고 재귀호출로 순회하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int n;
//    struct Node *link;
//} Node;
//
//
//int stack[100] = {0};
//int cur;
//int visited[20] = {0};
//
//void add(Node **g, int p, int n)
//{
//    Node *newNode = (Node*)malloc(sizeof(Node));
//    newNode->n = n;
//    newNode->link = NULL;
//    if (g[p] == NULL)
//        g[p] = newNode;
//    else
//    {
//        Node *tmp = g[p];
//        while (tmp->link != NULL) {
//            tmp = tmp->link;
//        }
//        tmp->link = newNode;
//    }
//}
//
//
//void disp(Node **g)
//{
//    for (int i=1; i<=8; i++)
//    {
//        Node *tmp = g[i];
//        printf("%d : ", i);
//        while (tmp)
//        {
//            printf("%d ", tmp->n);
//            tmp = tmp->link;
//        }
//        puts("");
//    }
//}
//
//
//void dfs(Node **g, int v)
//{
//    Node *w;
//    visited[v] = 1;             // 정점 v의 방문 표시
//    printf("%d ", v);           // 방문한 정점 출력
//    for (w=g[v]; w; w=w->link)  // 인접 정점 탐색
//        if (!visited[w->n])
//            dfs(g, w->n);       // 정점 w에서 DFS 새로시작
//}
//
//
//
//int main()
//{
//    Node **list = (Node**)malloc(sizeof(Node *) * 9);
//    
//    for (int v=0; v<9; v++)
//        list[v] = NULL;
//    
//    
//    add(list, 1, 2);
//    add(list, 1, 3);
//    add(list, 2, 4);
//    add(list, 2, 5);
//    add(list, 3, 6);
//    add(list, 3, 7);
//    printf("연결상태\n");
//    disp(list);
//    
//    printf("\n재귀로  : ");
//    dfs(list, 1);
//}





// Question 5
// 다음 이진 트리를 중위순회 결과를 적어보고 스택을 사용하여 중위순회 하는 프로그램을 작성하여 봅시다.
