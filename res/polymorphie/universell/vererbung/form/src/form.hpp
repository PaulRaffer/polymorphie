class Form { // abstrakte Bsisklasse, gemeinsames Interface
public:
	virtual auto zeichnen() const -> void = 0;
	[[nodiscard]] virtual auto flaeche() const -> double = 0;
};
