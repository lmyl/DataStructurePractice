//
//  LCBChapterSevenExampleThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleThirteen.h"


void displayAllLeafAncestorInBinaryTreeBylayerTraverse(BinaryTree *tree)  {
    BinaryTreeParentSonCSqQueue *queue = initBinaryTreeParentSonCSqQueue() ;
    queue->front = queue->rear = -1 ;
    BinaryTreeParentSonNode data = {tree,-1} ;
    queue->rear = queue->rear +1 ;
    queue->data[queue->rear] = data ;
    int layer = -1;
    while (queue->front != queue->rear) {
        layer ++ ;
        queue->front = queue->front + 1;
        data = queue->data[queue->front] ;
        if (data.data->left != NULL) {
            BinaryTreeParentSonNode treeCopy ={data.data->left , layer};
            queue->rear ++ ;
            queue->data[queue->rear] = treeCopy ;
        }
        if (data.data->right != NULL) {
            BinaryTreeParentSonNode treeCopy = {data.data->right ,layer} ;
            queue->rear ++ ;
            queue->data[queue->rear] = treeCopy ;
        }
        if (data.data->left == NULL && data.data->right == NULL) {
            printf("%c",data.data->data );
            int count = data.parent ;
            while (count != -1) {
                printf("%c",queue->data[count].data->data) ;
                count = queue->data[count].parent ;
            }
            printf("\n");
        }
    }
    
}

BinaryTreeParentSonCSqQueue *initBinaryTreeParentSonCSqQueue(void ) {
    BinaryTreeParentSonCSqQueue *queue = (BinaryTreeParentSonCSqQueue *)malloc(sizeof(BinaryTreeParentSonCSqQueue));
    queue->front = queue->rear = -1 ;
    return queue ;
}



