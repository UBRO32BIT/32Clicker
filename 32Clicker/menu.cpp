#include <iostream>
class menu {
private:
	bool opt_3 = false;
	bool opt_6 = false;
	bool opt_7 = false;
	bool opt_8 = false;
public:
	void keybind() {
		SetConsoleTitleA(" ");
		setColor(6);
		std::cout << "CURRENT CONFIG: ";
		if (isConstCPS()) {
			std::cout << CPSInpMin / 10.0 << " CPS";
		}
		else std::cout << cpsMin / 10.0 << " - " << cpsMax / 10.0 << " CPS";
		setColor(3);
		std::cout << "\n\n\n\tKEYBINDS";
		std::cout << "\n\n\t[ALT]: ENABLE/DISABLE MOUSE CLICKING";
		std::cout << "\n\n\t[F9]: SETTINGS";
		std::cout << "\n\n\t[F10]: HIDE/SHOW THIS WINDOW";
	}
	void settings() {

	}
	int isConstCPS() {
		if (cpsMax == cpsMin) return 1;
		return 0;
	}
};