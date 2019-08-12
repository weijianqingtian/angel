template<class T>
T& chain<T>::get(int theIndex) const
{
    //��������ΪtheIndex��Ԫ��
    //����Ԫ�ز����ڣ����׳��쳣
    checkIndex(theIndex);

    //��������Ҫ�Ľڵ�
    chainNode<T>* currentNode = firstNode;
    for (int i = 0; i < theIndex; i++)
        currentNode = currentNode->next;
    return currentNode->element;
}
