template<class T>
int chain<T>::indexOf(const T& theElement) const

{
    //返回元素theElement 首先出现时的索引
    //若该元素不存在，则返回-1

    //搜索链表寻找元素theElement
    chainNode<T>* currentNode = firstNode;
    int index = 0;   //当前节点的索引
    while (currentNode != NULL &&
           currentNode->element != theElement)

           {
               //移向下一个节点
               currentNode = currentNode->next;
               index++;
           }

           //确定是否找到所需的元素
           if (currentNode == NULL)
            return -1;
           else
            return index;
}
