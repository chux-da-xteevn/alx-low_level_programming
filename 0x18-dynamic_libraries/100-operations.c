#include "Python.h"

/**
 * add - Add two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * subtract - Subtract two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of a and b.
 */
int subtract(int a, int b)
{
    return a - b;
}

/**
 * multiply - Multiply two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
    return a * b;
}

/**
 * divide - Divide two integers.
 * @a: First integer.
 * @b: Second integer (non-zero).
 *
 * Return: The result of the division of a by b.
 */
int divide(int a, int b)
{
    return a / b;
}

/**
 * modulo - Compute the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int modulo(int a, int b)
{
    return a % b;
}


/**
 * mod - Compute the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int mod(int a, int b)
{
    return a % b;
}

/**
 * get_python_function - Retrieve a Python function.
 * @module: Name of the Python module.
 * @function_name: Name of the Python function.
 *
 * Return: A PyObject representing the Python function.
 */
PyObject *get_python_function(const char *module, const char *function_name)
{
    PyObject *pName, *pModule, *pFunc;

    Py_Initialize();

    pName = PyUnicode_DecodeFSDefault(module);
    pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != NULL)
    {
        pFunc = PyObject_GetAttrString(pModule, function_name);
        Py_DECREF(pModule);

        if (pFunc != NULL && PyCallable_Check(pFunc))
        {
            return pFunc;
        }

        if (PyErr_Occurred())
        {
            PyErr_Print();
        }
        else
        {
            PyErr_SetString(PyExc_RuntimeError, "Cannot find function");
        }

        Py_XDECREF(pFunc);
    }
    else
    {
        PyErr_Print();
    }

    return NULL;
}

/**
 * call_python_function - Call a Python function with two integer arguments.
 * @pFunc: A PyObject representing the Python function.
 * @a: First integer argument.
 * @b: Second integer argument.
 *
 * Return: The result of the Python function call.
 */
int call_python_function(PyObject *pFunc, int a, int b)
{
    PyObject *pArgs, *pValue;
    int result;

    if (pFunc != NULL)
    {
        pArgs = PyTuple_Pack(2, PyLong_FromLong(a), PyLong_FromLong(b));

        if (pArgs != NULL)
        {
            pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != NULL)
            {
                result = (int)PyLong_AsLong(pValue);
                Py_DECREF(pValue);
                return result;
            }
        }
    }

    PyErr_Print();
    return -1; /* Error indicator */
}

/**
 * main - Entry point for testing the dynamic library.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a, b;
    PyObject *pFunc;

    /* Generate random integers for testing */
    a = rand() % 222 - 111;
    b = rand() % 222 - 111;

    /* Load Python module and function */
    pFunc = get_python_function("100-tests", "add");

    /* Call Python function with random integers */
    if (pFunc != NULL)
    {
        int python_result = call_python_function(pFunc, a, b);

        /* Print C and Python results */
        printf("%d + %d = %d (Python result)\n", a, b, python_result);
        printf("%d + %d = %d (C result)\n", a, b, add(a, b));

        Py_DECREF(pFunc);
    }

    Py_Finalize();
    return 0;
}
