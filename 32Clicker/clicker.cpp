class Click {
private:
	int cMax;
	int cMin;
	int spikeRate;
	double random1;
	double random2;
public:
	void Click() {
		this->cMax = cMax;
		this->cMin = cMin;
		this->spikeRate = spikeRate;
		this->random1 = random1;
		this->random2 = random2;
	}
	double genDelay(int minCPS, int maxCPS) {
		cMin = 10000 / (double)maxCPS;
		cMax = 10000 / (double)minCPS;
	}
};