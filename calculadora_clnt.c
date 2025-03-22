/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "calculadora.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

calc_res *
bin_1(double arg1, char arg2, double arg3,  CLIENT *clnt)
{
	bin_1_argument arg;
	static calc_res clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	arg.arg3 = arg3;
	if (clnt_call (clnt, BIN, (xdrproc_t) xdr_bin_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_calc_res, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

calc_res *
un_1(char arg1, double arg2,  CLIENT *clnt)
{
	un_1_argument arg;
	static calc_res clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, UN, (xdrproc_t) xdr_un_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_calc_res, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
