class Point2d {
	private: int x_;
	private: int y_;
	
	// <Konstruktor>
	
	// Setter und Getter fuer zwei Dimensionen:
	public: [[nodiscard]] constexpr auto x() const -> int { return x_; }
	void set_x(int const x) & { x_ = x; }
	
	public: [[nodiscard]] constexpr auto y() const -> int { return y_; }
	void set_y(int const y) & { y_ = y; }
};

class Point3d : private Point2d {
	private: int z_;
	
	// <Konstruktor>
	
	// Setter fuer dritte Dimension:
	public: [[nodiscard]] constexpr auto z() const -> int { return z_; }
	void set_z(int const z) & { z_ = z; }
	
	// Setter und Getter aus Point2d oeffenlich machen:
	public: using Point2d::x;
	public: using Point2d::set_x;
	
	public: using Point2d::y;
	public: using Point2d::set_y;
};

auto main() -> int
{
	auto p = Point3d{}; // Neuen 3D Punkt erstellen
	p.set_x(5);         // X-Dimension auf 5 setzen
	std::cout << p.x(); // Output: 5
}
