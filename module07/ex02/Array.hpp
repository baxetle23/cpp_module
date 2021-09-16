#include <iostream>
#include <exception>

template<typename T>
class Array {
private:
	T* array_begin_;
	size_t size_array_;
public:
	Array(void) : array_begin_(NULL), size_array_(0) {}
	Array(uint32_t count) {
		if (count) {
			array_begin_ = new T[count];
		} else {
			array_begin_ = NULL;
		}
		size_array_ = count;
	}
	Array(const Array& other) {
		array_begin_ = new T [other.size_array_];
		size_array_ = other.size_array_;
		for (size_t i = 0; i < other.size_array_; i++) {
			array_begin_[i] = other[i];
		}
	}
	Array& operator=(const Array& other) {
		if (*this == other) {
			return *this;
		}
		delete [] array_begin_;
		array_begin_ = new T [other.size_array_];
		size_array_ = other.size_array_;
		for (size_t i = 0; i < other.size_array_; i++) {
			array_begin_[i] = other[i];
		}
	}
	const T& operator[](size_t index) const{
		if (index >= size_array_) {
			throw std::out_of_range("Index > Size array");
		}
		return array_begin_[index];
	}
	T& operator[](size_t index) {
		if (index >= size_array_) {
			throw std::out_of_range("Index > Size array");
		}
		return array_begin_[index];
	}
	size_t size() const {
		return size_array_;
	}
	~Array() {
		if (array_begin_) {
			delete [] array_begin_;
		}
	}
};