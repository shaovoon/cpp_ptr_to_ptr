// CppPtr2PtrExample.cpp : Defines the entry point for the console application.
//

#include <iostream>

// function prototype
void example_ptr();
void func_ptr(int* pp);
void example_ptr_to_ptr();
void func_ptr_to_ptr(int** pp);
void example_ref_to_ptr();
void func_ref_to_ptr(int*& pp);
void example_ret_ptr();
int* func_ret_ptr();
void example_ret_ref();
int& func_ret_ref();

int g_n = 42;

void example_ptr()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ptr()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	func_ptr(pn);

	std::cout << "After :" << *pn << std::endl; // display 23
}

void func_ptr(int* pp)
{
	pp = &g_n;
}

void example_ptr_to_ptr()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ptr_to_ptr()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	func_ptr_to_ptr(&pn);

	std::cout << "After :" << *pn << std::endl; // display 42
}

void func_ptr_to_ptr(int** pp)
{
	*pp = &g_n;
}

void example_ref_to_ptr()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ref_to_ptr()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	func_ref_to_ptr(pn);

	std::cout << "After :" << *pn << std::endl; // display 42
}

void func_ref_to_ptr(int*& pp)
{
	pp = &g_n;
}

void example_ret_ptr()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ret_ptr()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	pn = func_ret_ptr();

	std::cout << "After :" << *pn << std::endl; // display 42
}

int* func_ret_ptr()
{
	return &g_n;
}

void example_ret_ref()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ret_ref()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	pn = &func_ret_ref();

	std::cout << "After :" << *pn << std::endl; // display 42
}

int& func_ret_ref()
{
	return g_n;
}

int main()
{
	example_ptr();
	example_ptr_to_ptr();
	example_ref_to_ptr();
	example_ret_ptr();
	example_ret_ref();

    return 0;
}

