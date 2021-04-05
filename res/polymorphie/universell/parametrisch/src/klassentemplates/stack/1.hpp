template <typename T>
class Stack {
	std::vector<T> elements_;
public:
	auto push(T const & t) -> void;
	auto pop() -> T;
	[[nodiscard]] auto is_empty() const -> bool;
};
