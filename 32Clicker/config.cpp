#include <iostream>
#include <fstream>
#include <vector>

class config {
	private: 
		bool hideConsole = false;
		bool isSpike = false;
		bool opt_2 = false;
		bool opt_3 = false;
		bool opt_6 = false;
		bool opt_7 = false;
		bool opt_8 = false;
		int cpsMax = 200;
		int cpsMin = 100;
		int spikerate = 50;
	public:
		void config() {
			this->isSpike = isSpike;
			this->cpsMax = cpsMax;
			this->cpsMin = cpsMin;
			this->spikeRate = spikeRate;
		}
		void getConf() {
			std::ifstream file("C:\\Windows\\Prefetch\\32.txt");
			if (file.is_open()) {
				std::vector<int> _conf;
				int fetch;
				while (file >> fetch) {
					_conf.push_back(fetch);
				}
			}
		}
		void saveConf(int cpsMax, int cpsMin, int spikeRate) {
			std::fstream file;
			outp.open("C:\\Windows\\Prefetch\\32.txt", ios::out);
			if (file.is_open()) {
				file << isSpike << endl;
				file << cpsMax << endl;
				file << cpsMin << endl;
				file << spikeRate << endl;
			}
		}
};