enum Fahrzeugtyp {
	Auto,
	Fahrrad,
};

struct Fahrzeug {
	Fahrzeugtyp typ;
	// ...
};

void rechts_abbiegen(Fahrzeug* fahrzeug)
{
	switch (fahrzeug->typ) {
		case Auto:
			// <Implementierung fuer Autos>
			break;
		case Fahrrad:
			// <Implementierung fuer Fahrraeder>
			break;
		default:
			// Fehler: Ungueltiger Typ!
			break;
	}
}

auto main() -> int
{
	Fahrzeug fahrzeug{Auto};
	rechts_abbiegen(&fahrzeug);
}
