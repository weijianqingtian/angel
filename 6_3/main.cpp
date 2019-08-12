template<class T>
chain<T>::chain(int initialCapacity)
{
    //���캯��
    if (initialCapacity < 1)
    {
        ostringstream s;
        s << "Initial capacity = " << initialCapacity << " Must be > 0";
        throw illegalParameterValue(s.str());
    }
    firstNode = NULL;
    listSize = 0;
}

template<class T>
chain<T>::chain(const chain<T>& theList)
{
    //���ƹ��캯��
    listSize = theList.listSize;

    if (listSize == 0)
    {
        //����theListΪ��
        firstNode = NULL;
        return;
    }

    //����theListΪ�ǿ�
    chainNode<T>* sourceNode = theList.firstNode;
    //Ҫ��������theList.firstNode;
    firstNode = new chainNode<T>(sourceNode->element);
    //��������theList����Ԫ��
    sourceNode = sourceNode->next;
    chainNode<T>* targetNode = firstNode;
    // ��ǰ����*this�����һ���ڵ�
    while (sourceNode != NULL)
    {
        //����ʣ��Ԫ��
        targetNode->next = new chainNode<T>(sourceNode->element);
        targetNode = targetNode->next;
        sourceNode = sourceNode->next;
    }
    targetNode->next = NULL;  //�������
}
