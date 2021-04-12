template <typename T1, typename T2>
auto summe(T1 const & t1, T2 const & t2) -> decltype(t1 + t2)
{
	return t1 + t2;
}

// ODER

auto summe(auto const & t1, auto const & t2)
{
	return t1 + t2;
}


auto main() -> int
{
	std::cout << summe("Hallo", " Welt!"); // Hallo Welt!
	std::cout << summe(7, 3.5); // 10.5
}
