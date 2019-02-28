/*
class vector
{
	int sz;        // current number of elements
	double *elem;  // address of first element
	int space;     // current number of elements + free_space
 public:
	void reserve(int);
    void resize(int);
    int capacity() const;
    void push_back(double);
};


void vector::reserve(int amount)
{
	if(amount <= space) return;                   // we have enough space
	double *pd = new double[amount];              // allocate new space
	for (int i = 0; i < sz; ++i) pd[i] = elem[i]; // copy old element
	delete[] elem;                                // deallocate old space
	elem = pd;
	space = amount;
}

int vector::capacity() const {return space;}

void vector::resize(int requested_size)
{
	reserve(requested_size);
	for(int i = sz; i < requested_size; ++i) elem[i] = 0;
	sz = requested_size;
}

void vector::push_back(double d)
{
	if(space == 0) reserve(10);
	else if (sz == space) reserve(2*space); // we need more space, so double the size
	elem[sz] = d;                           // put d at the end
	++sz;                                   // increase the number of element, sz
}


vector& vector::operator=(const vector& v)
{
	if(this == &v;) return;
	if(v.sz <= space) {
		for(int i = 0; i < sz; ++i) elem[i] = v.elem[i];
		sz = v.sz;
		return *this;
	}
	double *pd = new double[v.sz];
	for(int i = 0; i < sz; ++i) pd[i] = v.elem[i];
	delete[] elem;
	elem = pd;
	space = sz = v.sz;
	return *this;
}*/

//1)Allocate memory for a copy.
//2)Copy the elements/
//3) Free the old memory allocation.
//4) Update sz, elem, space.