class Fahrzeug {
	// ...
	public: virtual void rechts_abbiegen() = 0;
	// ...
};

class Auto {
	// ...
	public: virtual void rechts_abbiegen()
	{
		// Implementierung fuer Autos
	}
	// ...
}

class Fahrrad {
	// ...
	public: virtual void rechts_abbiegen()
	{
		// Implementierung fuer Fahrraeder
	}
	// ...
};

auto main() -> int
{
	Fahrzeug* fahrzeug = new Auto;
	fahrzeug.rechts_abbiegen();
}
