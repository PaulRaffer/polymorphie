Bruch::Bruch(int zaehler = 0, int nenner = 1) // Konvertierungskonstruktor (int to Bruch)
	: zaehler_{zaehler}, nenner_{nenner} {}

auto print(Bruch const & bruch) -> void
{
	std::cout << '(' << bruch.zaehler << '/' << bruch.nenner << ')';
}

auto main() -> int
{
	print(42); // impliziter Cast zu Bruch{42, 1}
	// Output: (42/1)
}