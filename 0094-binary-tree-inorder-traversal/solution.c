/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct{
    int *array;
    size_t used;
    size_t size;
} ListArray;

void addData(ListArray *list, int element){
    if (list->used == list->size){
        list->size *= 2;
        list->array = realloc(list->array, list->size * sizeof(int));
    } 
    list->array[list->used++] = element;
}
void initArray(ListArray *list, size_t size){
    list->array = malloc(size * sizeof(int));
    list->used = 0;
    list->size = size;
}

void InorderRecursion(struct TreeNode* root, ListArray* array){
    if (root == NULL)
        return;
    InorderRecursion(root->left, array);
    addData(array, root->val);
    InorderRecursion(root->right, array);
}


int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    ListArray list;
    initArray(&list, 1);
    InorderRecursion(root, &list); 
    *returnSize = list.used;
    return list.array;
}
