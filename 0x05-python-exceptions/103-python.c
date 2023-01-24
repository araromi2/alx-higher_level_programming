#include <Python.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_python_list - prints some basic info about Python lists
 * @p: PyObject
 */
void print_python_list(PyObject *p)
{
	if (!PyList_Check(p))
	{
		printf("Error: Invalid PyListObject\n");
		return;
	}
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", PyObject_Length(p));
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	for (int i = 0; i < PyObject_Length(p); i++)
	{
		printf("    Element %d: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
	}
}

/**
 * print_python_bytes - prints some basic info about Python bytes
 * @p: PyObject
 */
void print_python_bytes(PyObject *p)
{
	if (!PyBytes_Check(p))
	{
		printf("Error: Invalid PyBytesObject\n");
		return;
	}
	printf("[*] Python bytes info\n");
	printf("[*] Size of the Python bytes = %ld\n", PyBytes_Size(p));
	printf("[*] First %d bytes: ", (PyBytes_Size(p) > 10) ? 10 : PyBytes_Size(p));
	for (int i = 0; i < (PyBytes_Size(p) > 10) ? 10 : PyBytes_Size(p); i++)
	{
		printf("%02x ", (unsigned char)PyBytes_AsString(p)[i]);
	}
	printf("\n");
}

/**
 * print_python_float - prints some basic info about Python float
 * @p: PyObject
 */
void print_python_float(PyObject *p)
{
	if (!PyFloat_Check(p))
	{
		printf("Error: Invalid PyFloatObject\n");
		return;
	}
	printf("[*] Python float info\n");
	printf("[*] Float value: %f\n", PyFloat_AsDouble(p));
}
