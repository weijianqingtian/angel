template<class T>
vectorList<T>::vectorList(int initialCapacity)
{
    //���캯��
    if (initialCapacity < 1)
    {
        ostringstream s;
        s << "Initial capacity = " << initialCapacity << " Must be > 0";
        throw illegalParameterValue(s.str());
    }


    element = new vector<T>;
    //��������Ϊ0�Ŀ�����
    element->reserve(initialCapacity);
    //vector������0���ӵ�initialCapacity
}

template<class T>
vectorList<T>::vectorList(const vectorList<T>& theList)
{
    //���ƹ��캯��
    element = new vector<T>(*theList.element);
}
