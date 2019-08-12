template<class T>
void chain<T>::erase(int theIndex)
{
    //删除索引为theIndex的元素
    //若该元素不存在，则抛出异常
    checkIndex(theIndex);
    if (theIndex == 0)
    {
        //删除链表的首节点
        deleteNode = firstNode;
        firstNode = firstNode->next;
    }
    else
    {
        //用指针P指向要删除节点的前驱节点
        chainNode<T>* P = firstNode;
        for (int i = 0; i < theIndex - 1; i++)
            P = P->next;

        deleteNode = P->next;
        P->next = P->next->next;   //删除deleteNode指向的节点
    }
    listSize--;
    delete deleteNode;
}
