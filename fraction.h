struct fraction
{
	int first;
	double second;
	double ka;
	void Init(int, double,double);
	void Read();
	void Show();
	double multiply(int, double, double, fraction&);
};
