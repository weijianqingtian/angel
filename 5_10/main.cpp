template<class iterator>
void copy(iterator start, iterator end, iterator to)
{
    //´Ó[start,end]µ½[to,to+end-start]
    while(start!=end)
    {
        *to=*start;start++;to++
    }
}
