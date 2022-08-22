class PeekingIterator : public Iterator
{
public:
  int n;
  bool has_next;
  PeekingIterator(const vector<int> &nums) : Iterator(nums)
  {
    // Initialize any member here.
    // **DO NOT** save a copy of nums and manipulate it directly.
    // You should only use the Iterator interface methods.
    n = Iterator::next();
    has_next = true;
  }

  // Returns the next element in the iteration without advancing the iterator.
  int peek()
  {
    return n;
  }

  // hasNext() and next() should behave the same as in the Iterator interface.
  // Override them if needed.
  int next()
  {
    int t = n;
    has_next = Iterator::hasNext();
    if (has_next)
    {
      n = Iterator::next();
    }
    return t;
  }

  bool hasNext() const
  {
    return has_next;
  }
};