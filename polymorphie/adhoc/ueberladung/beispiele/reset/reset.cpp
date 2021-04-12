void reset(int& i)
{
	i = 0;
}

void reset(std::vector<int>& vec)
{
	for (int& i : vec) {
		reset(i);
	}
}
