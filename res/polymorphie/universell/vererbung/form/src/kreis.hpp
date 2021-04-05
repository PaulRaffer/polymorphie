class Kreis : Form {
	double radius_;
public:
	explicit Kreis(double radius) : radius_{radius} {}
	
	auto zeichnen() const -> void override { /*...*/ }
	auto flaeche() const -> double override
	{
		return std::pow(radius_, 2) * std::pi_v<double>; // A = r^2 * pi
	}
};
