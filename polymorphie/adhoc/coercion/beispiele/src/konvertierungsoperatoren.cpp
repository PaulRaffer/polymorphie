Bruch::operator double() // Konvertierungsoperator (Bruch zu double)
{
	return double{this->zaehler_} / double{this->nenner_};
}

auto main() -> int
{
	// Implizite Umwandlung von Bruch{1, 4} zu double{0.25}
	// Output: 4.5
	std::cout << Bruch{1, 4} + 4.25;
}
