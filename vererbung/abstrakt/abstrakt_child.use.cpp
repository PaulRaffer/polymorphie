class Abgeleitete_klasse : public Abstrakte_klasse {
public:
	virtual void rein_virtuelle_methode() override { /*...*/ }
	// ...
};

Abstrakte_klasse* = new Abgeleitete_klasse{};
