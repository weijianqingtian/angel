template<class T>
class vectorList : public linearList<T>
{
public:
    //构造函数，复制构造函数和析构函数
    vectorList(int initialCapacity = 10);
    vectorList(const vectorList<T>&);
    ~vectorList() {delete element;}

    //ADT方法
    bool empty() const {return element->empty();}
    int size() const {return (int) element->size();}
    T& get(int theIndex) const;
    int indexOf(const T& theElement) const;
    void erase(int theIndex);
    void insert(int theIndex, const T& theElement);
    void output(ostream& out) const;

    //增加的方法
    int capacity() const {return (int) element->capacity();}

    //线性表的起始和结束位置的迭代器
    typedef typename vector<T>::iterator iterator;
    iterator begin() {return element->begin();}
    iterator enda() {return element->end();}

protected:
    void checkIndex(int theIndex) const;
    vector<T>* element;   //存储线性表元素的向量

};
