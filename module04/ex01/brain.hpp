#include <string>

class Brain {
private:
	std::string brain_[100];
public:
	Brain() {
	}
	Brain(const Brain& other) {
		for (size_t i  = 0; i < 100; ++i)
			brain_[i] = other.brain_[i];
	}
	~Brain() {
	}
	void setIdea(const std::string& str) {
		for (size_t i  = 0; i < 100; ++i)
			brain_[i] = str;	
	}
	std::string getIdea() {
		return brain_[10];
	}
	Brain& operator=(const Brain& other) {
		for (size_t i  = 0; i < 100; ++i)
			brain_[i] = other.brain_[i];
		return *this;
	}
	bool operator==(const Brain& other) {
		for (size_t i  = 0; i < 100; ++i) {
			if (brain_[i] != other.brain_[i])
				return false;
		}
		return true;
	}
};