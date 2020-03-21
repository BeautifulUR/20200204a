#include<stdio.h>
#include<stdlib.h>

typedef struct BTNode{
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;

int main()
{
    BTNode bt;
    bt.data=1024;
    BTNode *BT;
    BT=(BTNode *)malloc(sizeof(BTNode));
    BT=&bt;
    printf("bt.data \t=%d\n",bt.data);
    printf("BT->data\t=%d\n",BT->data);
    //printf("*BT.data=%d\n",*BT.data);     //in GNU complier build error
    printf("(*BT).data\t=%d\n",(*BT).data);
    if(BT==NULL)
    {
        free(BT);
        BT=NULL;
    }
    return 0;
}
