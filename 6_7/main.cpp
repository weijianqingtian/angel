template<class T>
void chain<T>::erase(int theIndex)
{
    //ɾ������ΪtheIndex��Ԫ��
    //����Ԫ�ز����ڣ����׳��쳣
    checkIndex(theIndex);
    if (theIndex == 0)
    {
        //ɾ��������׽ڵ�
        deleteNode = firstNode;
        firstNode = firstNode->next;
    }
    else
    {
        //��ָ��Pָ��Ҫɾ���ڵ��ǰ���ڵ�
        chainNode<T>* P = firstNode;
        for (int i = 0; i < theIndex - 1; i++)
            P = P->next;

        deleteNode = P->next;
        P->next = P->next->next;   //ɾ��deleteNodeָ��Ľڵ�
    }
    listSize--;
    delete deleteNode;
}
