template <typename T>
auto Stack<T>::is_empty() const -> bool
{
	return elements_.empty();        // ist der Stack leer?
}
