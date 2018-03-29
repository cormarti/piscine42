int		pgcd(int x, int y)
{
	if (x == 0)
		return (y);
	return (pgcd(y % x, x));
}