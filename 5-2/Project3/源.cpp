template <class T>
void changeLength1D(T*& a, int oldLength, int newLength)
{
	if (newLength < 0)
		throw illega1ParameterValue("new length must be >= 0");

	T* temp = new T[newLength];
	int number = min(oldLength, newLength);
	copy(a, a + number, temp);
	delete [] a;
	a = temp;

}