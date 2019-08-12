template<class T>
int chain<T>::indexOf(const T& theElement) const

{
    //����Ԫ��theElement ���ȳ���ʱ������
    //����Ԫ�ز����ڣ��򷵻�-1

    //��������Ѱ��Ԫ��theElement
    chainNode<T>* currentNode = firstNode;
    int index = 0;   //��ǰ�ڵ������
    while (currentNode != NULL &&
           currentNode->element != theElement)

           {
               //������һ���ڵ�
               currentNode = currentNode->next;
               index++;
           }

           //ȷ���Ƿ��ҵ������Ԫ��
           if (currentNode == NULL)
            return -1;
           else
            return index;
}
