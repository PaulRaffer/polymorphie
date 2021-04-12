template <typename T>
auto Stack<T>::push(T const & element) -> void
{
	elements_.push_back(element);    // Element auf Stack legen
}
