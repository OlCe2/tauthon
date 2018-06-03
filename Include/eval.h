
/* Interface to execute compiled code */

#ifndef Py_EVAL_H
#define Py_EVAL_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(PyObject *) PyEval_EvalCode(PyCodeObject *, PyObject *, PyObject *);

PyAPI_FUNC(PyObject *) PyEval_EvalCodeEx(PyCodeObject *co,
					PyObject *globals,
					PyObject *locals,
					PyObject **args, int argc,
					PyObject **kwds, int kwdc,
					PyObject **defs, int defc,
					PyObject *closure);

/* Define a new API so we don't break C-API backward compatibility */
PyAPI_FUNC(PyObject *) PyEval_EvalCodeEx28(PyCodeObject *co,
					PyObject *globals,
					PyObject *locals,
					PyObject **args, int argcount,
					PyObject **kws, int kwcount,
					PyObject **defs, int defcount,
					PyObject *kwdefs, PyObject *closure);

PyAPI_FUNC(PyObject *) _PyEval_CallTracing(PyObject *func, PyObject *args);

#ifdef __cplusplus
}
#endif
#endif /* !Py_EVAL_H */
