template <class T>
chain<T>::~chain()
{
    //��������������ɾ����������нڵ�
    while (firstNode != NULL )
    {
        //ɾ���׽ڵ�
        chainNode<T>* nextNode = firstNode->next;
        delete firstNode;
        firstNode = nextNode;
    }
}
