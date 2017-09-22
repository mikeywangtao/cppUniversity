template <typename T>
T disMax(T tval1, T tval2, T tval3) {
	T rtnMaxmin = tval1;

	if (tval2 > rtnMaxmin) {
		rtnMaxmin = tval2;
	}
	if (tval3 > rtnMaxmin) {
		rtnMaxmin = tval3;
	}
	return rtnMaxmin;
}
