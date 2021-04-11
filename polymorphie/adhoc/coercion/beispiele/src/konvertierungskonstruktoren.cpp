class Bruch {
	int zaehler_;
	int nenner_;
	// ...
};

// Konvertierungskonstruktor (int to Bruch)
Bruch::Bruch(int zaehler = 0, int nenner = 1)
	: zaehler_{zaehler}, nenner_{nenner} {}

void print(Bruch const & bruch)
{
	std::cout << '(' << bruch.zaehler() << '/' << bruch.nenner() << ')';
}

auto main() -> int
{
	// implizite Cast von int{42} zu Bruch{42, 1}
	// Output: (42/1)
	print(42);
}
