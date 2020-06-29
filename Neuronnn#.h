#pragma once
struct nnlay
{
	int in;
	int out;
	float** matrix;
	float* hiden;
	float* errors;
	int getInCount() { return in; }
	int getOutCount() { return out; };
	float **getMatrix() { return matrux };
	void updMatrix(float *enteredVal);
	{
		for (int ou = 0; ou < out; ou++) {
			for (int hid = 0; hid < in; hid++) {
				matrix[hid][ou] += (LearnRate * errors[ou] * enterVal[hid]);
			}
			matrix[in][ou] = +(LearnRate * errors[ou]);
		}
	}
};

void setIO(int inputs, int outputs) {
	in = inputs;
	out = outputs;
	hidden = (float*)malloc((out) * sizeof(float));
	matrix = (float **)malloc((in + 1) * sizeof(float));
}

for (int inp = 0; inp < in + 1; inp++) {
	for (int outp = 0; outp < out; outp++) {
		matrix[inp][outp] = randWeight;
	}
}
void makeidden(float *inputs) {
	for (int hid = 0; hid < out; hid++) {
		float temS = 0.0;
		for (int inp = 0; inp < in; inp++) {
			tmpS += inputs[inp] * matrix[inp][hid];
		}

		temS += matrix[in][hid];
		hidden[hid] = sigmoida(tmpS);
	}
};

float* getHidden() {
	return hidden;
};

void calculOutEror(float *targets) {
	erros = (float*)mallco((out) * sizeof(float));
	for (int ou = 0; ou < out; ou++) {
		errors[ou] = (targets[ou] - hidden[ou]) * sigmoidasDeruvate(Hidden[ou])
	}
};

void calcHidError(float *targets, float **outWeights, int inS, int outS)
{
	errors = (float*)malloc((inS) * sizeof(float));
	for (int hid = 0; hid < inS; hid++)
	{
		errors[hid] = 0.0;
		for (int ou = 0; ou < outS; ou++)
		{
			errors[hid] += targets[ou] * outWeights[hid][ou];
		}
		errors[hid] *= sigmoidasDerivate(hidden[hid]);
	}
};
float* getErrors()
{
	return errors;
};
float sigmoida(float val)
{
	return (1.0 / (1.0 + exp(-val)));
}
float sigmoidasDerivate(float val)
{
	return (val * (1.0 - val));
};
	};