#pragma once



// function to find the mean of the data 


float fmean(float data[270], int n) {
	float count = 0;
	float mean = 0;
	for (int i = 0; i < n; i++) {
		count = count + data[i];
	}
	mean = count / n;
	return mean;

	// function to find the varience of data 

}

float fvarience(float data[270], int n, float m) {
	float count = 0;
	float v, x = 0;
	for (int i = 0; i < n;i++) {
		x = pow((data[i] - m), 2.0);
		count = count + x;
	}
	v = count / (n - 1);
	return v;
}

	// function to find the skewness of data 

	float fskewness(float data[], int n, float m, float v) {
		float count = 0;
		float s, x = 0;
		for (int i = 0; i < n; i++) {
			x = pow((data[i] - m), 3.0);
			count = count + x;
		}

		s = (count * (1.00 / ((float)n - 1.00))) / (pow(v, (1.50)));
		return s;

	}


	