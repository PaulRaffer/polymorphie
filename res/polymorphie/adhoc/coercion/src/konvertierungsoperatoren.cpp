Bruch::operator double() // Konvertierungsoperator (Bruch zu double)
{
	return zaehler / nenner;
}

auto main() -> int
{
	std::cout << Bruch{1, 4} + 4.25; // Output: 4.5
}
