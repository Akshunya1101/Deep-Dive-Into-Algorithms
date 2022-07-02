int GCD(int a, int b) {
	int s1=1, t1=0, r1=a, s2=0, t2=1, r2=b;
	int q, t;
	while(r2 !=0) {
		q = r1/r2;
		t = r2;
		r2 = r1 - r2*q;
		r1 = t;

		t = s2;
		s2 = s1 - s2*q;
		s1 = t;

		t = t2;
		t2 = t1 - t2*q;
		t1 = t;
	}
	return r1;
}


			int LCM, LCM_min=m-1, a=1, b=m-1;
			for (int i = 1; i <= m/2; ++i) {
				LCM = i*(m-i)/GCD(i,m-i);
				if(LCM < LCM_min) {
					LCM_min = LCM;
					a = i;
					b = m-i;
