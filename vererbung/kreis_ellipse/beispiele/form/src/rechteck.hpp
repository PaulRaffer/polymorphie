class Rechteck : public Form {
	double laenge_, breite_;
public:
	Rechteck(double laenge, double breite) : laenge_{laenge}, breite_{breite} {}
	explicit Rechteck(double laenge) : Rechteck{laenge, laenge} {}
	
	auto zeichnen() const -> void override { /*...*/ }
	auto flaeche() const -> double override { return laenge_ * breite_; }
};
