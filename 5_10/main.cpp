template<class iterator>
void copy(iterator start, iterator end, iterator to)
{
    //��[start,end]��[to,to+end-start]
    while(start!=end)
    {
        *to=*start;start++;to++
    }
}
