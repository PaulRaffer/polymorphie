template <typename T>
auto Stack<T>::pop() -> T
{
    assert(!is_empty());             // Stack darf nicht leer sein!
	auto element = elements_.back(); // letztes Element
	elements_.pop_back();            // letztes Element löschen
	return element;                  // gelöschtes Element zurückgeben
}
