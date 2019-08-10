class iterator
{
public:
    //用C++的typedef语句实现双向迭代器
    typedef bidirectional_iterator_tag iterator_category;
    typedef T value_type;
    typedef ptrdiff_t difference_type;
    typedef T* pointer;
    typedef T& reference;

    //构造函数
    iterator(T* thePosition = 0) {position = thePosition;}

    //解引用操作符
    T& operator*() const {return *position;}
    T* operator->() const {return &*position;}

    //迭代器的值增加
    iterator operator++()
    {
        ++position; return *this;
    }
    iterator operator++(int)
    {
        iterator old = *this;
        ++position;
        return old;

    //迭代器的值减少
    iterator& operator--()
    {
        --position; return *this;
    }
    iterator operator--(int)
    {
        iterator old = *this;
        --position;
        return old;
    }

    //测试是否相等
    bool operator !=(const iterator right) const
    {
        return position != right.position;
    }
    bool operator==(const iterator right) const
    {
        return position == right.position;
    }
protected:
    T* position;
    };
