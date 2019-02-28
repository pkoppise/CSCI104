class StackChar
{
public:
	StackChar(unsigned int capacity);
	~StackChar();

	unsigned int size() const;
    void push_back(const char& value); //enqueue
    void pop_back(); // dequeue
    char const & top() const;
    char* topf();
    char& get(int loc);
    bool empty() const; //checks if Stack is empty
private:
    char* data;
    char* top_;
    unsigned int size_;
    unsigned int cap;
};
