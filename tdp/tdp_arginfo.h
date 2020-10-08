/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7eb3fd4083c98e6dffc8b02b6373b7ce9cbf228d */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hello, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_env, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(hello);
ZEND_FUNCTION(env);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(hello, arginfo_hello)
	ZEND_FE(env, arginfo_env)
	ZEND_FE_END
};