#pragma once
#pragma warning(disable: 4996) 
#include <cstdio>
#include <ostream>
#include <istream>
#include <cstdlib>
#include <cstring>
#include <iostream>
namespace mystd {
	class String {
	private:
		char *str;
		int textsize = 0;
	public:
		// =====================================
		// Member constants
		// =====================================

		static const size_t npos = -1;
		
		// =====================================
		// Member functions
		// =====================================

		String();
		String(String& text);
		String(const char* text);
		String(char text);

		~String();

		String& operator= (const String& text);
		String& operator= (const char* s);
		String& operator= (char c);

		// =====================================
		// Capacity
		// =====================================

		size_t size() const;

		size_t length() const;

		size_t max_size() const;

		void resize(size_t n);
		void resize(size_t n, char c);

		size_t capacity() const;

		void reserve(size_t n = 0);

		void clear();

		bool empty() const;
		
		// =====================================
		// Capacity
		// =====================================

		char& operator[](size_t pos);

		char& at(size_t pos);

		char& front();

		char& back();

		// =====================================
		// Modifiers
		// =====================================

		friend void operator+=(String& left, String& right);
		friend void operator+=(String& left, const char *right);
		friend void operator+=(String& left, char right);

		void append(const char *text);
		void append(String &text);
		void append(int count, char word);
		void append(const char *text, int start, int count);
		void append(String &text, int start, int count);
		
		void push_back(char text);

		void assign(const char *text);
		void assign(String &text);
		void assign(int count, char word);
		void assign(const char *text, int start, int count);
		void assign(String &text, int start, int count);

		void insert(int start, const char *text);
		void insert(int start, String &text);

		void erase(int start, int num);

		void replace(int start, int count, const char* text);
		void replace(int start, int count, String &text);

		void swap(String &text);

		char pop_back();

		// =====================================
		// String operations
		// =====================================
		
		char* c_str();

		int find(char text);
		int find(const char *text);
		int find(const char *text, int start);
		int find(String &text, int start);
		
		char* substr(int start);
		char* substr(int start, int count);

		int compare(String &text);
		int compare(const char *text);


		// =====================================
		// Non-member function overloads
		// =====================================
		
		friend std::istream& operator >>(std::istream& os, String& obj);

		friend std::ostream& operator <<(std::ostream& os, String& obj);
		
		std::istream& getline(std::istream& os, String& obj);
	};
}


