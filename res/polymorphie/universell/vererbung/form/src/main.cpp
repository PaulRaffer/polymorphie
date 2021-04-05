auto main() -> int
{
	Form * form;
	
	switch (input<char>()) {
	case 'r':
		form = new Rechteck{input<double>(), input<double>()};
		break;
	case 'q':
		form = new Quadrat{input<double>()};
		break;
	case 'd':
		form = new Kreis{input<double>()};
		break;
	default:
		return EXIT_FAILURE;
	}
	
	std::cout << form->flaeche() << '\n';
	delete form;
}
