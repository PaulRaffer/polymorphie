struct Point3d : private Point2d {
	int z;
	// Eigenschaften aus Point2d wieder oeffenlich machen:
	public: using Point2d::x;
	public: using Point2d::y;
};
