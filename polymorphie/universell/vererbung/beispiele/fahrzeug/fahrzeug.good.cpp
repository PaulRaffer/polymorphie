class Fahrzeug {
	// ...
	public: virtual void rechts_abbiegen() = 0;
	// ...
};

class Auto : public Fahrzeug {
	// ...
	public: virtual void rechts_abbiegen() override
	{
		// <Implementierung fuer Autos>
	}
	// ...
};

class Fahrrad : public Fahrzeug {
	// ...
	public: virtual void rechts_abbiegen() override
	{
		// <Implementierung fuer Fahrraeder>
	}
	// ...
};

auto main() -> int
{
	Fahrzeug* fahrzeug = new Auto;
	fahrzeug->rechts_abbiegen();
}
